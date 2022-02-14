
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_7(void (*VAR_2)(const char *), const char *VAR_3)
{
 pid_t VAR_4;

 VAR_4 = FUNC_5();
 FUNC_0(VAR_4 != -1);
 if (VAR_4 == 0) {
  VAR_1 = 1;
  VAR_2(VAR_3);
  FUNC_3(0);

 } else {
  int VAR_5;

  FUNC_0(FUNC_6(VAR_4, &VAR_5, 0) != -1);
  if (!FUNC_2(VAR_5) || FUNC_1(VAR_5) != VAR_0)
   FUNC_4("See stderr for details");
 }
}
