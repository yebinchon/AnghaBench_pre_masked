
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct passwd {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct passwd* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,struct passwd*) ;
 int FUNC_5 () ;
 int VAR_0 ;

int
FUNC_6(int VAR_1, char **VAR_2)
{
 struct passwd *VAR_3;

 FUNC_5();

 FUNC_3();

 if ((VAR_3 = FUNC_1(FUNC_2())) == ((void*)0)) {
  FUNC_0(VAR_0, "No user found for uid %d\n",
      (u_long)FUNC_2());
  return 1;
 }

 return (FUNC_4(VAR_1, VAR_2, VAR_3));
}
