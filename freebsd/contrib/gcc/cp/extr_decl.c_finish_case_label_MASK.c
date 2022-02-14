
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ kind; scalar_t__ more_cleanups_ok; struct cp_binding_level* level_chain; } ;
struct TYPE_2__ {int cases; int level; int switch_stmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 struct cp_binding_level* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;

tree
FUNC_9 (tree VAR_8, tree VAR_9)
{
  tree VAR_10, VAR_11;
  struct cp_binding_level *VAR_12;

  if (VAR_5)
    {
      tree VAR_13;



      VAR_13 = FUNC_6 (VAR_0, VAR_1, VAR_1);
      return FUNC_4 (FUNC_5 (VAR_8, VAR_9, VAR_13));
    }


  VAR_10 = FUNC_0 (VAR_7->switch_stmt);
  if (VAR_10 && FUNC_1 (VAR_10) == VAR_2)
    VAR_10 = FUNC_3 (VAR_10);

  if (!FUNC_8 (VAR_7->level))
    return VAR_4;

  VAR_11 = FUNC_7 (VAR_7->cases, VAR_10, FUNC_2 (VAR_10),
   VAR_8, VAR_9);



  for (VAR_12 = VAR_3;
       VAR_12->kind != VAR_6;
       VAR_12 = VAR_12->level_chain)
    VAR_12->more_cleanups_ok = 0;

  return VAR_11;
}
