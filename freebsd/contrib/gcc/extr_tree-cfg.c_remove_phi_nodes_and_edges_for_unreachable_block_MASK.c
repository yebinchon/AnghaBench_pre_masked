
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int succs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6 (basic_block VAR_1)
{
  tree VAR_2;



  VAR_2 = FUNC_3 (VAR_1);
  while (VAR_2)
    {
      tree VAR_3 = FUNC_2 (VAR_2);
      FUNC_5 (VAR_2, VAR_0);
      VAR_2 = VAR_3;
    }


  while (FUNC_0 (VAR_1->succs) > 0)
    FUNC_4 (FUNC_1 (VAR_1, 0));
}
