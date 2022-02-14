
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char wchar_t ;
struct glob_limit {int l_readdir_cnt; } ;
struct dirent {char* d_name; } ;
typedef int mbstate_t ;
typedef int mbs ;
struct TYPE_6__ {int gl_flags; int (* gl_closedir ) (int *) ;scalar_t__ gl_readdir; int * gl_errfunc; } ;
typedef TYPE_1__ glob_t ;
typedef int buf ;
typedef int DIR ;
typedef unsigned char Char ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 int * FUNC_4 (unsigned char*,TYPE_1__*) ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned char*,unsigned char*,TYPE_1__*,struct glob_limit*) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned char*) ;
 size_t FUNC_7 (unsigned char*,char*,scalar_t__,int *) ;
 int FUNC_8 (int *,int ,int) ;
 struct dirent* FUNC_9 (int *) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(Char *VAR_13, Char *VAR_14, Char *VAR_15,
      Char *VAR_16, Char *VAR_17,
      glob_t *VAR_18, struct glob_limit *VAR_19)
{
 struct dirent *VAR_20;
 DIR *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 char VAR_26[VAR_10 + VAR_11 - 1];

 struct dirent *(*VAR_27)(DIR *);

 if (VAR_14 > VAR_15) {
  VAR_12 = VAR_1;
  return (VAR_9);
 }
 *VAR_14 = VAR_5;
 if (VAR_18->gl_errfunc != ((void*)0) &&
     FUNC_3(VAR_13, VAR_26, sizeof(VAR_26))) {
  VAR_12 = VAR_1;
  return (VAR_9);
 }

 VAR_24 = VAR_12;
 VAR_12 = 0;
 if ((VAR_21 = FUNC_4(VAR_13, VAR_18)) == ((void*)0)) {
  if (VAR_12 == VAR_3 || VAR_12 == VAR_4)
   return (0);
  VAR_22 = FUNC_2(VAR_18, VAR_12, VAR_26);
  if (VAR_12 == 0)
   VAR_12 = VAR_24;
  return (VAR_22);
 }

 VAR_22 = 0;


 if (VAR_18->gl_flags & VAR_6)
  VAR_27 = (struct dirent *(*)(DIR *))VAR_18->gl_readdir;
 else
  VAR_27 = FUNC_9;

 VAR_12 = 0;

 while ((VAR_20 = (*VAR_27)(VAR_21)) != ((void*)0)) {
  char *VAR_28;
  Char *VAR_29;
  wchar_t VAR_30;
  size_t VAR_31;
  mbstate_t VAR_32;

  if ((VAR_18->gl_flags & VAR_7) &&
      VAR_19->l_readdir_cnt++ >= VAR_8) {
   VAR_12 = VAR_1;
   VAR_22 = VAR_9;
   break;
  }


  if (VAR_20->d_name[0] == '.' && FUNC_0(*VAR_16) != VAR_0) {
   VAR_12 = 0;
   continue;
  }
  FUNC_8(&VAR_32, 0, sizeof(VAR_32));
  VAR_29 = VAR_14;
  VAR_28 = VAR_20->d_name;
  VAR_23 = 1;
  while (VAR_29 <= VAR_15) {
   VAR_31 = FUNC_7(&VAR_30, VAR_28, VAR_11, &VAR_32);
   if (VAR_31 == (size_t)-1 || VAR_31 == (size_t)-2) {

    VAR_30 = (unsigned char)*VAR_28;
    VAR_31 = 1;
    FUNC_8(&VAR_32, 0, sizeof(VAR_32));
   }
   if ((*VAR_29++ = VAR_30) == VAR_5) {
    VAR_23 = 0;
    break;
   }
   VAR_28 += VAR_31;
  }
  if (VAR_23 && (VAR_22 = FUNC_2(VAR_18, VAR_2,
      VAR_26))) {
   VAR_12 = VAR_2;
   break;
  }
  if (VAR_23 || !FUNC_6(VAR_14, VAR_16, VAR_17)) {
   *VAR_14 = VAR_5;
   VAR_12 = 0;
   continue;
  }
  if (VAR_12 == 0)
   VAR_12 = VAR_24;
  VAR_22 = FUNC_5(VAR_13, --VAR_29, VAR_15, VAR_17,
      VAR_18, VAR_19);
  if (VAR_22)
   break;
  VAR_12 = 0;
 }

 VAR_25 = VAR_12;
 if (VAR_18->gl_flags & VAR_6)
  (*VAR_18->gl_closedir)(VAR_21);
 else
  FUNC_1(VAR_21);
 VAR_12 = VAR_25;

 if (VAR_22)
  return (VAR_22);

 if (VAR_20 == ((void*)0) && VAR_12 != 0 &&
     (VAR_22 = FUNC_2(VAR_18, VAR_12, VAR_26)))
  return (VAR_22);

 if (VAR_12 == 0)
  VAR_12 = VAR_24;
 return (0);
}
