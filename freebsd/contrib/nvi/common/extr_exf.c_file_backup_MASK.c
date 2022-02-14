
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; scalar_t__ st_uid; } ;
struct dirent {int d_name; } ;
typedef int off_t ;
typedef int buf ;
struct TYPE_6__ {int argc; TYPE_1__** argv; } ;
struct TYPE_5__ {int len; int bp; } ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;
typedef int DIR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,int ,char*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,size_t,int) ;
 int FUNC_3 (int *,int ,int,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,char*,size_t) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (int *,TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *,int ,char*,char*) ;
 int FUNC_12 (char*,int,int) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (int,char*,int) ;
 struct dirent* FUNC_15 (int *) ;
 int FUNC_16 (char*,size_t,char*,int) ;
 int FUNC_17 (int ,char*,int*) ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (int *,char*,size_t) ;
 int FUNC_23 (int,char*,int) ;

__attribute__((used)) static int
FUNC_24(
 SCR *VAR_15,
 char *VAR_16,
 char *VAR_17)
{
 struct dirent *VAR_18;
 struct stat VAR_19;
 DIR *VAR_20;
 EXCMD VAR_21;
 off_t VAR_22;
 size_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 char *VAR_32, *VAR_33, *VAR_34, *VAR_35, *VAR_36, *VAR_37, *VAR_38, VAR_39[8192];
 CHAR_T *VAR_40;
 size_t VAR_41;
 size_t VAR_42;
 char *VAR_43 = ((void*)0);

 VAR_29 = VAR_30 = -1;
 VAR_32 = VAR_33 = VAR_38 = ((void*)0);







 VAR_14 = 0;
 if ((VAR_29 = FUNC_12(VAR_16, VAR_5, 0)) < 0) {
  if (VAR_14 == VAR_0)
   return (0);
  VAR_33 = VAR_16;
  goto err;
 }
 FUNC_8(VAR_15, &VAR_21, 0, 0, 0, 0, 0);
 if (VAR_17[0] == 'N') {
  VAR_31 = 1;
  ++VAR_17;
 } else
  VAR_31 = 0;
 FUNC_0(VAR_15, VAR_17, FUNC_20(VAR_17), VAR_40, VAR_41);
 if ((VAR_40 = FUNC_22(VAR_15, VAR_40, VAR_41)) == ((void*)0))
  return (1);
 if (FUNC_5(VAR_15, &VAR_21, VAR_40, VAR_41)) {
  FUNC_9(VAR_40);
  return (1);
 }
 FUNC_9(VAR_40);






 if (VAR_21.argc != 1) {
  FUNC_11(VAR_15, VAR_1, VAR_17,
      "258|%s expanded into too many file names");
  (void)FUNC_6(VAR_29);
  return (1);
 }
 if (VAR_31) {
  FUNC_2(VAR_15, VAR_32, VAR_23, VAR_21.argv[0]->len * 2 + 50);
  FUNC_3(VAR_15, VAR_21.argv[0]->bp, VAR_21.argv[0]->len + 1,
    VAR_34, VAR_42);
  VAR_43 = FUNC_19(VAR_34);
  VAR_34 = VAR_43;
  for (VAR_37 = VAR_32, VAR_36 = ((void*)0);
       VAR_34[0] != '\0'; *VAR_37++ = *VAR_34++)
   if (VAR_34[0] == '%') {
    if (VAR_34[1] != '%')
     *VAR_37++ = '%';
   } else if (VAR_34[0] == '/')
    VAR_36 = VAR_37;
  VAR_35 = VAR_37;
  *VAR_37++ = '%';
  *VAR_37++ = 'd';
  *VAR_37 = '\0';

  if (VAR_36 == ((void*)0)) {
   VAR_20 = FUNC_13(".");
   VAR_34 = VAR_32;
  } else {
   *VAR_36 = '\0';
   VAR_20 = FUNC_13(VAR_32);
   *VAR_36 = '/';
   VAR_34 = VAR_36 + 1;
  }
  if (VAR_20 == ((void*)0)) {
   FUNC_3(VAR_15, VAR_21.argv[0]->bp, VAR_21.argv[0]->len + 1,
    VAR_33, VAR_42);
   goto err;
  }

  for (VAR_25 = 0; (VAR_18 = FUNC_15(VAR_20)) != ((void*)0);)
   if (FUNC_17(VAR_18->d_name, VAR_34, &VAR_27) == 1 && VAR_27 > VAR_25)
    VAR_25 = VAR_27;
  (void)FUNC_7(VAR_20);


  (void)FUNC_16(VAR_35, VAR_23 - (VAR_35 - VAR_32), "%d", VAR_25 + 1);
  VAR_38 = VAR_32;
 } else {
  VAR_32 = ((void*)0);
  FUNC_3(VAR_15, VAR_21.argv[0]->bp, VAR_21.argv[0]->len + 1,
   VAR_38, VAR_42);
 }


 if (FUNC_18(VAR_38, &VAR_19) == 0) {
  if (!FUNC_4(VAR_19.st_mode)) {
   FUNC_11(VAR_15, VAR_1, VAR_17,
       "259|%s: not a regular file");
   goto err;
  }
  if (VAR_19.st_uid != FUNC_10()) {
   FUNC_11(VAR_15, VAR_1, VAR_17, "260|%s: not owned by you");
   goto err;
  }
  if (VAR_19.st_mode & (VAR_8 | VAR_11 | VAR_9 | VAR_12)) {
   FUNC_11(VAR_15, VAR_1, VAR_17,
      "261|%s: accessible by a user other than the owner");
   goto err;
  }
  VAR_24 = VAR_6;
 } else
  VAR_24 = VAR_3 | VAR_4;
 if ((VAR_30 = FUNC_12(VAR_38, VAR_24 | VAR_7, VAR_10 | VAR_13)) < 0) {
  VAR_33 = VAR_17;
  goto err;
 }


 while ((VAR_26 = FUNC_14(VAR_29, VAR_39, sizeof(VAR_39))) > 0)
  for (VAR_22 = 0; VAR_26 != 0; VAR_26 -= VAR_28, VAR_22 += VAR_28)
   if ((VAR_28 = FUNC_23(VAR_30, VAR_39 + VAR_22, VAR_26)) < 0) {
    VAR_33 = VAR_38;
    goto err;
   }
 if (VAR_26 < 0) {
  VAR_33 = VAR_16;
  goto err;
 }

 if (FUNC_6(VAR_29)) {
  VAR_33 = VAR_16;
  goto err;
 }
 if (FUNC_6(VAR_30)) {
  VAR_33 = VAR_38;
  goto err;
 }
 if (VAR_32 != ((void*)0))
  FUNC_1(VAR_15, VAR_32, VAR_23);
 return (0);

alloc_err:
err: if (VAR_29 != -1)
  (void)FUNC_6(VAR_29);
 if (VAR_30 != -1) {
  (void)FUNC_21(VAR_38);
  (void)FUNC_6(VAR_30);
 }
 if (VAR_33)
  FUNC_11(VAR_15, VAR_2, VAR_33, "%s");
 if (VAR_43 != ((void*)0))
  FUNC_9(VAR_43);
 if (VAR_32 != ((void*)0))
  FUNC_1(VAR_15, VAR_32, VAR_23);
 return (1);
}
