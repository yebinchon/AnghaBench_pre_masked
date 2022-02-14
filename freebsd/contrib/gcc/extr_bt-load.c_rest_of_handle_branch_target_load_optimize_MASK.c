
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static unsigned int
FUNC_2 (void)
{
  static int VAR_3 = 0;




  if (VAR_1
      && VAR_2
      && !VAR_3)
    {
      FUNC_1 (0, "branch target register load optimization is not intended "
    "to be run twice");

      VAR_3 = 1;
    }

  FUNC_0 (VAR_0);
  return 0;
}
