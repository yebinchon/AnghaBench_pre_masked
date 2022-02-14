
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5 (void)
{


  if (!VAR_4)
  {
    VAR_3 = FUNC_0 (0, 0);
    if (VAR_3 != -1)
      VAR_2 = 1;
    else


      VAR_2 = 0;
    VAR_4 = 1;


    VAR_1 = 0;
    if (FUNC_3 (&VAR_0) == -1)
    {
      FUNC_2 (&VAR_0);
      FUNC_1 ("Cannot redirect standard handles for debugger: %s.",
      FUNC_4 (VAR_1));
    }
  }
}
