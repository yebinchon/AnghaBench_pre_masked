
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(void)
{
 static int VAR_8 = 0;
 cap_rights_t VAR_9;

 if (VAR_5 || VAR_8)
  return;

 VAR_8 = 1;


 VAR_4 = 0;

 if (FUNC_3(-1, VAR_6) == -1)
  FUNC_4("daemon");

 FUNC_0(&VAR_9);

 if (VAR_7 != ((void*)0)) {
  FUNC_6(VAR_7);

  if (FUNC_1(FUNC_5(VAR_7), &VAR_9) < 0)
   FUNC_4("can't limit pidfile descriptor: %m");
 }

 if (VAR_6 != -1) {
  FUNC_2(VAR_6);
  VAR_6 = -1;
 }

 if (FUNC_1(VAR_2, &VAR_9) < 0)
  FUNC_4("can't limit stdin: %m");
 FUNC_0(&VAR_9, VAR_0);
 if (FUNC_1(VAR_3, &VAR_9) < 0)
  FUNC_4("can't limit stdout: %m");
 if (FUNC_1(VAR_1, &VAR_9) < 0)
  FUNC_4("can't limit stderr: %m");
}
