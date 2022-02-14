
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (ptid_t VAR_0, int VAR_1, enum target_signal VAR_2)
{
  if (VAR_1)
    {
      FUNC_1 ("ST\r");

      FUNC_0 ("ST\r", 1);
    }
  else
    {
      FUNC_1 ("GO\r");

      FUNC_0 ("GO\r", 1);
    }
}
