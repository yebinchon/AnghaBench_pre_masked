
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; int st_size; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {char* p_path; } ;
struct TYPE_4__ {char* fts_path; struct stat* fts_statp; } ;
typedef TYPE_1__ FTSENT ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,size_t) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (size_t) ;
 char* FUNC_9 (int *,size_t,int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_10 (char*,size_t) ;
 scalar_t__ VAR_20 ;
 int FUNC_11 (char*,int,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,char*,size_t) ;
 scalar_t__ FUNC_15 (struct stat*,int) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (int ) ;
 TYPE_2__ VAR_24 ;
 int FUNC_18 (char*) ;
 scalar_t__ VAR_25 ;
 int FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (int,char*,size_t) ;

int
FUNC_21(const FTSENT *VAR_26, int VAR_27)
{
 static char *VAR_28 = ((void*)0);
 static size_t VAR_29;
 struct stat *VAR_30;
 ssize_t VAR_31;
 size_t VAR_32;
 off_t VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 char *VAR_40;




 VAR_36 = VAR_39 = -1;
 if (!VAR_19 && !VAR_22 &&
     (VAR_36 = FUNC_11(VAR_26->fts_path, VAR_7, 0)) == -1) {
  FUNC_19("%s", VAR_26->fts_path);
  return (1);
 }

 VAR_30 = VAR_26->fts_statp;
 if (!VAR_27) {

  if (VAR_20) {
   if (VAR_25)
    FUNC_13("%s not overwritten\n", VAR_24.p_path);
   VAR_38 = 1;
   goto done;
  } else if (VAR_17) {
   (void)FUNC_5(VAR_23, "overwrite %s? %s",
       VAR_24.p_path, "(y/n [n]) ");
   VAR_35 = VAR_34 = FUNC_6();
   while (VAR_34 != '\n' && VAR_34 != VAR_2)
    VAR_34 = FUNC_6();
   if (VAR_35 != 'y' && VAR_35 != 'Y') {
    (void)FUNC_5(VAR_23, "not overwritten\n");
    VAR_38 = 1;
    goto done;
   }
  }

  if (VAR_16) {




   (void)FUNC_18(VAR_24.p_path);
   if (!VAR_19 && !VAR_22) {
    VAR_39 = FUNC_11(VAR_24.p_path,
        VAR_9 | VAR_8 | VAR_6,
        VAR_30->st_mode & ~(VAR_13 | VAR_12));
   }
  } else if (!VAR_19 && !VAR_22) {

   VAR_39 = FUNC_11(VAR_24.p_path, VAR_9 | VAR_8, 0);
  }
 } else if (!VAR_19 && !VAR_22) {
  VAR_39 = FUNC_11(VAR_24.p_path, VAR_9 | VAR_8 | VAR_6,
      VAR_30->st_mode & ~(VAR_13 | VAR_12));
 }

 if (!VAR_19 && !VAR_22 && VAR_39 == -1) {
  FUNC_19("%s", VAR_24.p_path);
  VAR_38 = 1;
  goto done;
 }

 VAR_38 = 0;

 if (!VAR_19 && !VAR_22) {
  {
   if (VAR_28 == ((void*)0)) {





    if (FUNC_17(VAR_15) >
        VAR_10)
     VAR_29 = FUNC_0(VAR_0, VAR_5 * 8);
    else
     VAR_29 = VAR_1;
    VAR_28 = FUNC_8(VAR_29);
    if (VAR_28 == ((void*)0))
     FUNC_4(1, "Not enough memory");
   }
   VAR_33 = 0;
   while ((VAR_37 = FUNC_14(VAR_36, VAR_28, VAR_29)) > 0) {
    for (VAR_40 = VAR_28, VAR_32 = VAR_37; ;
        VAR_40 += VAR_31, VAR_32 -= VAR_31) {
     VAR_31 = FUNC_20(VAR_39, VAR_40, VAR_32);
     if (VAR_31 <= 0)
      break;
     VAR_33 += VAR_31;
     if (VAR_18) {
      VAR_18 = 0;
      (void)FUNC_5(VAR_23,
          "%s -> %s %3d%%\n",
          VAR_26->fts_path, VAR_24.p_path,
          FUNC_3(VAR_33, VAR_30->st_size));
     }
     if (VAR_31 >= (ssize_t)VAR_32)
      break;
    }
    if (VAR_31 != (ssize_t)VAR_32) {
     FUNC_19("%s", VAR_24.p_path);
     VAR_38 = 1;
     break;
    }
   }
   if (VAR_37 < 0) {
    FUNC_19("%s", VAR_26->fts_path);
    VAR_38 = 1;
   }
  }
 } else if (VAR_19) {
  if (FUNC_7(VAR_26->fts_path, VAR_24.p_path)) {
   FUNC_19("%s", VAR_24.p_path);
   VAR_38 = 1;
  }
 } else if (VAR_22) {
  if (FUNC_16(VAR_26->fts_path, VAR_24.p_path)) {
   FUNC_19("%s", VAR_24.p_path);
   VAR_38 = 1;
  }
 }
 if (!VAR_19 && !VAR_22) {
  if (VAR_21 && FUNC_15(VAR_30, VAR_39))
   VAR_38 = 1;
  if (VAR_21 && FUNC_12(VAR_36, VAR_39) != 0)
   VAR_38 = 1;
  if (FUNC_2(VAR_39)) {
   FUNC_19("%s", VAR_24.p_path);
   VAR_38 = 1;
  }
 }

done:
 if (VAR_36 != -1)
  (void)FUNC_2(VAR_36);
 return (VAR_38);
}
