
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {int need_temporary_p; int type; } ;
typedef TYPE_1__ conversion ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static conversion *
FUNC_5 (tree VAR_3, conversion *VAR_4)
{
  tree VAR_5;

  FUNC_3 (FUNC_0 (VAR_3) == VAR_0);
  FUNC_3 (FUNC_0 (VAR_4->type) != VAR_0);

  VAR_5 = FUNC_1 (VAR_3);
  if (!FUNC_4 (VAR_5, VAR_4->type))
    {

      VAR_4 = FUNC_2 (VAR_1, VAR_5, VAR_4);



      VAR_4->need_temporary_p = 0;
    }
  return FUNC_2 (VAR_2, VAR_3, VAR_4);
}
