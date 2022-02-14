
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct loops {int dummy; } ;
struct loop {int * inner; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int succs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct loop*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 struct loop* FUNC_3 (struct loops*,struct loop*,int ,TYPE_1__**,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct loop *
FUNC_5 (struct loops *VAR_0, struct loop *VAR_1,
      basic_block VAR_2, tree VAR_3)
{
  basic_block VAR_4;


  FUNC_2 (FUNC_1 (VAR_1, VAR_2));
  FUNC_2 (FUNC_0 (VAR_2->succs) == 2);
  FUNC_2 (VAR_1->inner == ((void*)0));

  return FUNC_3 (VAR_0, VAR_1, FUNC_4 (VAR_3),
         &VAR_4, 0);
}
