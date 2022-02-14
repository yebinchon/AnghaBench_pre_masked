
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int splay_tree ;
typedef TYPE_1__* record_layout_info ;
struct TYPE_4__ {scalar_t__ t; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (TYPE_1__*,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7 (record_layout_info VAR_0,
     splay_tree VAR_1, tree *VAR_2)
{


  tree VAR_3 = VAR_0->t;
  int VAR_4 = FUNC_1 (FUNC_5 (VAR_3));
  int VAR_5;


  if (FUNC_3 (VAR_3))
    VAR_2 = FUNC_6 (VAR_0, FUNC_4 (VAR_3),
       VAR_1, VAR_2);


  for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
      tree VAR_6;

      VAR_6 = FUNC_0 (FUNC_5 (VAR_3), VAR_5);



      if (VAR_6 == FUNC_4 (VAR_3))
 continue;



      if (FUNC_2 (VAR_6))
 continue;

      VAR_2 = FUNC_6 (VAR_0, VAR_6,
         VAR_1, VAR_2);
    }
}
