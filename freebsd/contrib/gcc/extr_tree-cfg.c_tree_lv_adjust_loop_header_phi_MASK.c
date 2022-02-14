
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_5__ {int dest_idx; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (basic_block VAR_0, basic_block VAR_1,
    basic_block VAR_2, edge VAR_3)
{
  tree VAR_4, VAR_5;
  edge VAR_6 = FUNC_3 (VAR_2, VAR_1);



  FUNC_4 (VAR_6 != ((void*)0));




  for (VAR_5 = FUNC_5 (VAR_1), VAR_4 = FUNC_5 (VAR_0);
       VAR_5 && VAR_4;
       VAR_5 = FUNC_1 (VAR_5), VAR_4 = FUNC_1 (VAR_4))
    {
      tree VAR_7 = FUNC_0 (VAR_5, VAR_6->dest_idx);
      FUNC_2 (VAR_4, VAR_7, VAR_3);
    }
}
