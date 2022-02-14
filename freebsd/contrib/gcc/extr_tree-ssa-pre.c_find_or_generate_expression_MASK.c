
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
typedef int basic_block ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct TYPE_3__ {int * expr; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static tree
FUNC_6 (basic_block VAR_0, tree VAR_1, tree VAR_2)
{
  tree VAR_3 = FUNC_2 (FUNC_0 (VAR_0), VAR_1);



  if (VAR_3 == ((void*)0))
    {
      VAR_3 = FUNC_1 (VAR_1)->head->expr;

      FUNC_5 (FUNC_3 (VAR_3));
      VAR_3 = FUNC_4 (VAR_0, VAR_3, VAR_2);
    }
  return VAR_3;
}
