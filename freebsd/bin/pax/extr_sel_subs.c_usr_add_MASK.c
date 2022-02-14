
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef size_t u_int ;
struct passwd {scalar_t__ pw_uid; } ;
struct TYPE_3__ {scalar_t__ uid; struct TYPE_3__* fow; } ;
typedef TYPE_1__ USRT ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 int FUNC_2 () ;
 struct passwd* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ FUNC_6 (char*,int *,int) ;
 TYPE_1__** VAR_1 ;

int
FUNC_7(char *VAR_2)
{
 u_int VAR_3;
 USRT *VAR_4;
 struct passwd *VAR_5;
 uid_t VAR_6;




 if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0'))
  return(-1);
 if ((VAR_1 == ((void*)0)) &&
      ((VAR_1 = (USRT **)FUNC_1(VAR_0, sizeof(USRT *))) == ((void*)0))) {
  FUNC_5(1, "Unable to allocate memory for user selection table");
  return(-1);
 }




 if (VAR_2[0] != '#') {



  if ((VAR_2[0] == '\\') && (VAR_2[1] == '#'))
   ++VAR_2;
  if ((VAR_5 = FUNC_3(VAR_2)) == ((void*)0)) {
   FUNC_5(1, "Unable to find uid for user: %s", VAR_2);
   return(-1);
  }
  VAR_6 = (uid_t)VAR_5->pw_uid;
 } else



  VAR_6 = (uid_t)FUNC_6(VAR_2+1, ((void*)0), 10);

 FUNC_2();




 VAR_3 = ((unsigned)VAR_6) % VAR_0;
 if ((VAR_4 = VAR_1[VAR_3]) != ((void*)0)) {
  while (VAR_4 != ((void*)0)) {
   if (VAR_4->uid == VAR_6)
    return(0);
   VAR_4 = VAR_4->fow;
  }
 }




 if ((VAR_4 = (USRT *)FUNC_4(sizeof(USRT))) != ((void*)0)) {
  VAR_4->uid = VAR_6;
  VAR_4->fow = VAR_1[VAR_3];
  VAR_1[VAR_3] = VAR_4;
  return(0);
 }
 FUNC_5(1, "User selection table out of memory");
 return(-1);
}
