
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct dirent {scalar_t__* d_name; } ;
struct TYPE_5__ {int gl_flags; int (* gl_closedir ) (void*) ;struct dirent* (* gl_readdir ) (void*) ;scalar_t__ (* gl_errfunc ) (char*,scalar_t__) ;} ;
typedef TYPE_1__ glob_t ;
typedef void DIR ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__*,char*) ;
 void* FUNC_2 (scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,TYPE_1__*,size_t*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (char*,scalar_t__) ;
 struct dirent* FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int
FUNC_8(Char *VAR_8, Char *VAR_9, Char *VAR_10, Char *VAR_11,
      glob_t *VAR_12, size_t *VAR_13)
{
 struct dirent *VAR_14;
 DIR *VAR_15;
 int VAR_16;
 char VAR_17[VAR_5];







 struct dirent *(*VAR_18)(void *);

 *VAR_9 = VAR_1;
 VAR_6 = 0;

 if ((VAR_15 = FUNC_2(VAR_8, VAR_12)) == ((void*)0)) {

  if (VAR_12->gl_errfunc) {
   FUNC_1(VAR_8, VAR_17);
   if (VAR_12->gl_errfunc(VAR_17, VAR_6) ||
       VAR_12->gl_flags & VAR_4)
    return (VAR_2);
  }
  return(0);
 }

 VAR_16 = 0;


 if (VAR_12->gl_flags & VAR_3)
  VAR_18 = VAR_12->gl_readdir;
 else
  VAR_18 = (struct dirent *(*)(void *))VAR_7;
 while ((VAR_14 = (*VAR_18)(VAR_15))) {
  u_char *VAR_19;
  Char *VAR_20;


  if (VAR_14->d_name[0] == VAR_0 && *VAR_10 != VAR_0)
   continue;
  for (VAR_19 = (u_char *) VAR_14->d_name, VAR_20 = VAR_9;
       (*VAR_20++ = *VAR_19++) != VAR_1;)
   continue;
  if (!FUNC_4(VAR_9, VAR_10, VAR_11)) {
   *VAR_9 = VAR_1;
   continue;
  }
  VAR_16 = FUNC_3(VAR_8, --VAR_20, VAR_11, VAR_12, VAR_13);
  if (VAR_16)
   break;
 }

 if (VAR_12->gl_flags & VAR_3)
  (*VAR_12->gl_closedir)(VAR_15);
 else
  FUNC_0(VAR_15);
 return(VAR_16);
}
