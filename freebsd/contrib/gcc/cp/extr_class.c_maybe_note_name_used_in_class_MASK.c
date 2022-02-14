
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int splay_tree_value ;
typedef int splay_tree_key ;
typedef scalar_t__ splay_tree ;
struct TYPE_2__ {scalar_t__ names_used; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

void
FUNC_5 (tree VAR_5, tree VAR_6)
{
  splay_tree VAR_7;


  if (!(FUNC_1() == VAR_3
 && FUNC_0 (VAR_2)))
    return;



  if (FUNC_2 (VAR_2, VAR_5,
                   0, 0))
    return;

  if (!VAR_1[VAR_0 - 1].names_used)
    VAR_1[VAR_0 - 1].names_used
      = FUNC_4 (VAR_4, 0, 0);
  VAR_7 = VAR_1[VAR_0 - 1].names_used;

  FUNC_3 (VAR_7,
       (splay_tree_key) VAR_5,
       (splay_tree_value) VAR_6);
}
