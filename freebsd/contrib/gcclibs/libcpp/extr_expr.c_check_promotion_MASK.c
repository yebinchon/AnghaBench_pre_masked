
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unsignedp; } ;
struct op {int token; TYPE_1__ value; } ;
typedef int cpp_reader ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_2, const struct op *VAR_3)
{
  if (VAR_3->value.unsignedp == VAR_3[-1].value.unsignedp)
    return;

  if (VAR_3->value.unsignedp)
    {
      if (!FUNC_3 (VAR_3[-1].value, FUNC_0 (VAR_2, VAR_1)))
 FUNC_1 (VAR_2, VAR_0,
     "the left operand of \"%s\" changes sign when promoted",
     FUNC_2 (VAR_2, VAR_3->token));
    }
  else if (!FUNC_3 (VAR_3->value, FUNC_0 (VAR_2, VAR_1)))
    FUNC_1 (VAR_2, VAR_0,
        "the right operand of \"%s\" changes sign when promoted",
        FUNC_2 (VAR_2, VAR_3->token));
}
