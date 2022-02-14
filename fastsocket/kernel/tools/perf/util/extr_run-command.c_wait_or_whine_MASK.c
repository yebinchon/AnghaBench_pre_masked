
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_6(pid_t VAR_7)
{
 for (;;) {
  int VAR_8, VAR_9;
  pid_t VAR_10 = FUNC_5(VAR_7, &VAR_8, 0);

  if (VAR_10 < 0) {
   if (VAR_6 == VAR_0)
    continue;
   FUNC_3("waitpid failed (%s)", FUNC_4(VAR_6));
   return -VAR_2;
  }
  if (VAR_10 != VAR_7)
   return -VAR_5;
  if (FUNC_2(VAR_8))
   return -VAR_4;

  if (!FUNC_1(VAR_8))
   return -VAR_3;
  VAR_9 = FUNC_0(VAR_8);
  switch (VAR_9) {
  case 127:
   return -VAR_1;
  case 0:
   return 0;
  default:
   return -VAR_9;
  }
 }
}
