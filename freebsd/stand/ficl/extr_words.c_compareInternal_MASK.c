
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_UNS ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0, int VAR_1)
{
    char *VAR_2, *VAR_3;
    FICL_UNS VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;

    FUNC_4(VAR_0, 4, 1);
    VAR_5 = FUNC_2(VAR_0->pStack);
    VAR_3 = (char *)FUNC_1(VAR_0->pStack);
    VAR_4 = FUNC_2(VAR_0->pStack);
    VAR_2 = (char *)FUNC_1(VAR_0->pStack);

    VAR_6 = (VAR_4 < VAR_5)? VAR_4 : VAR_5;
    for ( ; (VAR_6 > 0) && (VAR_7 == 0); VAR_6--)
    {
  char VAR_8 = *VAR_2++;
  char VAR_9 = *VAR_3++;
  if (VAR_1)
  {
   VAR_8 = (char)FUNC_3(VAR_8);
   VAR_9 = (char)FUNC_3(VAR_9);
  }
        VAR_7 = (int)(VAR_8 - VAR_9);
    }

    if (VAR_7 == 0)
        VAR_7 = (int)(VAR_4 - VAR_5);

    if (VAR_7 < 0)
        VAR_7 = -1;
    else if (VAR_7 > 0)
        VAR_7 = 1;

    FUNC_0(VAR_7);
    return;
}
