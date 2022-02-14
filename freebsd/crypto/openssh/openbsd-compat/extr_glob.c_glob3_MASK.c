
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct glob_lim {int glim_readdir; } ;
struct dirent {scalar_t__* d_name; } ;
struct TYPE_5__ {int gl_flags; int (* gl_closedir ) (void*) ;struct dirent* (* gl_readdir ) (void*) ;scalar_t__ (* gl_errfunc ) (char*,scalar_t__) ;} ;
typedef TYPE_1__ glob_t ;
typedef int buf ;
typedef void DIR ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__*,char*,int) ;
 void* FUNC_2 (scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,TYPE_1__*,struct glob_lim*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (char*,scalar_t__) ;
 struct dirent* FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int
FUNC_8(Char *VAR_13, Char *VAR_14, Char *VAR_15, Char *VAR_16,
    Char *VAR_17, Char *VAR_18, Char *VAR_19, glob_t *VAR_20,
    struct glob_lim *VAR_21)
{
 struct dirent *VAR_22;
 DIR *VAR_23;
 int VAR_24;
 char VAR_25[VAR_9];







 struct dirent *(*VAR_26)(void *);

 if (VAR_15 > VAR_16)
  return (1);
 *VAR_15 = VAR_1;
 VAR_11 = 0;

 if ((VAR_23 = FUNC_2(VAR_13, VAR_20)) == ((void*)0)) {

  if (VAR_20->gl_errfunc) {
   if (FUNC_1(VAR_13, VAR_25, sizeof(VAR_25)))
    return(VAR_2);
   if (VAR_20->gl_errfunc(VAR_25, VAR_11) ||
       VAR_20->gl_flags & VAR_4)
    return(VAR_2);
  }
  return(0);
 }

 VAR_24 = 0;


 if (VAR_20->gl_flags & VAR_3)
  VAR_26 = VAR_20->gl_readdir;
 else
  VAR_26 = (struct dirent *(*)(void *))VAR_12;
 while ((VAR_22 = (*VAR_26)(VAR_23))) {
  u_char *VAR_27;
  Char *VAR_28;

  if ((VAR_20->gl_flags & VAR_5) &&
      VAR_21->glim_readdir++ >= VAR_6) {
   VAR_11 = 0;
   *VAR_15++ = VAR_10;
   *VAR_15 = VAR_1;
   VAR_24 = VAR_8;
   break;
  }


  if (VAR_22->d_name[0] == VAR_0 && *VAR_17 != VAR_0)
   continue;
  VAR_28 = VAR_15;
  VAR_27 = (u_char *) VAR_22->d_name;
  while (VAR_28 < VAR_16 && (*VAR_28++ = *VAR_27++) != VAR_1)
   ;
  if (VAR_28 >= VAR_16) {
   *VAR_28 = VAR_1;
   VAR_24 = 1;
   break;
  }

  if (!FUNC_4(VAR_15, VAR_17, VAR_18, VAR_7)) {
   *VAR_15 = VAR_1;
   continue;
  }
  VAR_24 = FUNC_3(VAR_13, VAR_14, --VAR_28, VAR_16,
      VAR_18, VAR_19, VAR_20, VAR_21);
  if (VAR_24)
   break;
 }

 if (VAR_20->gl_flags & VAR_3)
  (*VAR_20->gl_closedir)(VAR_23);
 else
  FUNC_0(VAR_23);
 return(VAR_24);
}
