
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ currow; scalar_t__ curcol; } ;
typedef TYPE_1__ FORM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(FORM *VAR_2)
{
  FUNC_0((FUNC_1("IFN_Previous_Line(%p)"), (void *)VAR_2));
  if ((--(VAR_2->currow)) < 0)
    {
      VAR_2->currow++;
      FUNC_2(VAR_1);
    }
  VAR_2->curcol = 0;
  FUNC_2(VAR_0);
}
