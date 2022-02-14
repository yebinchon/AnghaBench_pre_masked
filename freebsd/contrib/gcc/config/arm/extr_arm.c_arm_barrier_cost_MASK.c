
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;




 scalar_t__ FUNC_0 (int *) ;


 int * FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2 (rtx VAR_0)
{



  int VAR_1 = 50;
  rtx VAR_2 = FUNC_1 (VAR_0);

  if (VAR_2 != ((void*)0) && FUNC_0 (VAR_2) == 130)
    VAR_1 -= 20;

  switch (FUNC_0 (VAR_0))
    {
    case 130:


      return 50;

    case 129:
    case 131:
      return VAR_1;

    case 128:
      return VAR_1 - 10;

    default:
      return VAR_1 + 10;
    }
}
