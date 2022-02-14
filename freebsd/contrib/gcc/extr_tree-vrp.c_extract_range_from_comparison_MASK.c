
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int equiv; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int,int*) ;

__attribute__((used)) static void
FUNC_8 (value_range_t *VAR_1, tree VAR_2)
{
  bool VAR_3 = 0;
  tree VAR_4 = FUNC_7 (VAR_2, 0, &VAR_3);






  if (VAR_4 && !FUNC_3 (VAR_4) && !VAR_3)
    {



      VAR_4 = FUNC_1 (FUNC_0 (VAR_2), VAR_4);
      if (FUNC_2 (VAR_4))
 FUNC_5 (VAR_1, VAR_4, VAR_1->equiv);
      else
 FUNC_4 (VAR_1, VAR_0, VAR_4, VAR_4, VAR_1->equiv);
    }
  else
    FUNC_6 (VAR_1);
}
