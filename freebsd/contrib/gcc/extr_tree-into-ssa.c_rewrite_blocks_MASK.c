
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int walk_data ;
struct dom_walk_data {int after_dom_children_after_stmts; int before_dom_children_after_stmts; int before_dom_children_walk_stmts; int before_dom_children_before_stmts; int interesting_blocks; int dom_direction; } ;
typedef int sbitmap ;
typedef enum rewrite_mode { ____Placeholder_rewrite_mode } rewrite_mode ;
typedef int basic_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dom_walk_data*) ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dom_walk_data*) ;
 int FUNC_8 (struct dom_walk_data*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_18 ;
 int FUNC_11 (struct dom_walk_data*,int ) ;

__attribute__((used)) static void
FUNC_12 (basic_block VAR_19, enum rewrite_mode VAR_20, sbitmap VAR_21)
{
  struct dom_walk_data VAR_22;


  FUNC_10 (VAR_4);


  FUNC_8 (&VAR_22, 0, sizeof (VAR_22));

  VAR_22.dom_direction = VAR_0;
  VAR_22.interesting_blocks = VAR_21;

  if (VAR_20 == VAR_2)
    VAR_22.before_dom_children_before_stmts = VAR_15;
  else
    VAR_22.before_dom_children_before_stmts = VAR_12;

  if (VAR_20 == VAR_1)
    VAR_22.before_dom_children_walk_stmts = VAR_13;
  else if (VAR_20 == VAR_2)
    VAR_22.before_dom_children_walk_stmts = VAR_17;
  else
    FUNC_5 ();

  if (VAR_20 == VAR_1)
    VAR_22.before_dom_children_after_stmts = VAR_10;
  else if (VAR_20 == VAR_2)
    VAR_22.before_dom_children_after_stmts = VAR_16;
  else
    FUNC_5 ();

  if (VAR_20 == VAR_1)
    VAR_22.after_dom_children_after_stmts = VAR_11;
  else if (VAR_20 == VAR_2)
    VAR_22.after_dom_children_after_stmts = VAR_14;
  else
    FUNC_5 ();

  VAR_5 = FUNC_0 (VAR_18, VAR_9, 10);


  FUNC_7 (&VAR_22);



  FUNC_11 (&VAR_22, VAR_19);


  FUNC_4 (&VAR_22);


  if (VAR_7 && (VAR_8 & VAR_3))
    {
      FUNC_2 (VAR_7);
      if (VAR_6)
 FUNC_3 (VAR_7);
    }

  if (VAR_6)
    {
      FUNC_6 (VAR_6);
      VAR_6 = ((void*)0);
    }

  FUNC_1 (VAR_18, VAR_9, VAR_5);

  FUNC_9 (VAR_4);
}
