
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_12__ {int root; } ;
struct TYPE_11__ {scalar_t__ value; scalar_t__ key; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_14 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_16 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (int ,char*) ;

tree
FUNC_21 (splay_tree VAR_4, tree VAR_5, tree VAR_6,
    tree VAR_7, tree VAR_8)
{
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;
  splay_tree_node VAR_12;


  VAR_10 = FUNC_10 ();



  if (!VAR_5 || VAR_5 == VAR_2)
    goto error_out;

  if ((VAR_7 && FUNC_3 (VAR_7)
       && FUNC_2 (FUNC_3 (VAR_7)))
      || (VAR_8 && FUNC_3 (VAR_8)
   && FUNC_2 (FUNC_3 (VAR_8))))
    {
      FUNC_11 ("pointers are not permitted as case values");
      goto error_out;
    }


  if (VAR_8 && VAR_3)
    FUNC_12 ("range expressions in switch statements are non-standard");

  VAR_9 = FUNC_3 (VAR_5);
  if (VAR_7)
    {
      VAR_7 = FUNC_8 (VAR_7);
      VAR_7 = FUNC_9 (VAR_9, VAR_7);
      if (VAR_7 == VAR_2)
 goto error_out;
    }
  if (VAR_8)
    {
      VAR_8 = FUNC_8 (VAR_8);
      VAR_8 = FUNC_9 (VAR_9, VAR_8);
      if (VAR_8 == VAR_2)
 goto error_out;
    }

  if (VAR_7 && VAR_8)
    {



      if (FUNC_18 (VAR_7, VAR_8))
 VAR_8 = VAR_1;
      else if (!FUNC_19 (VAR_7, VAR_8))
 FUNC_20 (0, "empty range specified");
    }




  if (VAR_7
      && !FUNC_7 (VAR_9, VAR_6,
        &VAR_7, VAR_8 ? &VAR_8 : ((void*)0)))
    return VAR_1;



  VAR_12 = FUNC_14 (VAR_4, (splay_tree_key) VAR_7);



  if (!VAR_12 && (VAR_7 || VAR_8))
    {
      splay_tree_node VAR_13;
      splay_tree_node VAR_14;
      VAR_13 = FUNC_15 (VAR_4,
       (splay_tree_key) VAR_7);
      VAR_14 = FUNC_16 (VAR_4,
      (splay_tree_key) VAR_7);




      if (VAR_13
   && FUNC_0 ((tree) VAR_13->value)
   && FUNC_17 (FUNC_0 ((tree) VAR_13->value),
        VAR_7) >= 0)
 VAR_12 = VAR_13;




      else if (VAR_14
        && VAR_8
        && (FUNC_17 ((tree) VAR_14->key,
      VAR_8)
     <= 0))
 VAR_12 = VAR_14;
    }

  if (VAR_12)
    {
      tree VAR_15 = FUNC_1 ((tree) VAR_12->value);

      if (VAR_8)
 {
   FUNC_11 ("duplicate (or overlapping) case value");
   FUNC_11 ("%Jthis is the first entry overlapping that value", VAR_15);
 }
      else if (VAR_7)
 {
   FUNC_11 ("duplicate case value") ;
   FUNC_11 ("%Jpreviously used here", VAR_15);
 }
      else
 {
   FUNC_11 ("multiple default labels in one switch");
   FUNC_11 ("%Jthis is the first default label", VAR_15);
 }
      goto error_out;
    }


  VAR_11 = FUNC_4 (FUNC_5 (VAR_7, VAR_8, VAR_10));

  FUNC_13 (VAR_4,
       (splay_tree_key) VAR_7,
       (splay_tree_value) VAR_11);

  return VAR_11;

 error_out:



  if (!VAR_4->root)
    {
      tree VAR_16 = FUNC_10 ();
      FUNC_4 (FUNC_6 (VAR_0, VAR_16));
    }
  return VAR_2;
}
