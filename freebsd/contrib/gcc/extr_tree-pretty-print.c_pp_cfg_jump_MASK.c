
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int pretty_printer ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void
FUNC_7 (pretty_printer *VAR_1, basic_block VAR_2)
{
  tree VAR_3;

  VAR_3 = FUNC_3 (VAR_2);

  FUNC_6 (VAR_1, "goto <bb ");
  FUNC_4 (VAR_1, VAR_2->index);
  FUNC_6 (VAR_1, ">");
  if (VAR_3 && FUNC_1 (VAR_3) == VAR_0)
    {
      FUNC_6 (VAR_1, " (");
      FUNC_2 (VAR_1, FUNC_0 (VAR_3), 0, 0, 0);
      FUNC_6 (VAR_1, ")");
    }
  FUNC_5 (VAR_1);
}
