
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct passwd* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;

int
FUNC_7(void)
{
 struct passwd *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);

 FUNC_6();
 if (FUNC_1(VAR_0) != 0 || FUNC_0("/") != 0 ||
     FUNC_3(1, &VAR_2->pw_gid) != 0 ||
     FUNC_4(VAR_2->pw_gid, VAR_2->pw_gid, VAR_2->pw_gid) != 0 ||
     FUNC_5(VAR_2->pw_uid, VAR_2->pw_uid, VAR_2->pw_uid) != 0)
  return (0);

 return (1);
}
