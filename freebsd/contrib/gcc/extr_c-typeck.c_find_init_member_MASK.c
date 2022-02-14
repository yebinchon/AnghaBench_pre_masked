
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct init_node {scalar_t__ purpose; scalar_t__ value; struct init_node* right; struct init_node* left; } ;
struct TYPE_2__ {scalar_t__ index; scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct init_node* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_10)
{
  struct init_node *VAR_11;

  if (FUNC_0 (VAR_7) == VAR_0)
    {
      if (VAR_5
   && FUNC_5 (VAR_10, VAR_9))
 FUNC_4 ();

      VAR_11 = VAR_6;
      while (VAR_11)
 {
   if (FUNC_5 (VAR_10, VAR_11->purpose))
     VAR_11 = VAR_11->left;
   else if (FUNC_5 (VAR_11->purpose, VAR_10))
     VAR_11 = VAR_11->right;
   else
     return VAR_11->value;
 }
    }
  else if (FUNC_0 (VAR_7) == VAR_1)
    {
      tree VAR_12 = FUNC_3 (VAR_10);

      if (VAR_5
   && (!VAR_8
       || FUNC_5 (VAR_12,
      FUNC_3 (VAR_8))))
 FUNC_4 ();

      VAR_11 = VAR_6;
      while (VAR_11)
 {
   if (VAR_10 == VAR_11->purpose)
     return VAR_11->value;
   else if (FUNC_5 (VAR_12, FUNC_3 (VAR_11->purpose)))
     VAR_11 = VAR_11->left;
   else
     VAR_11 = VAR_11->right;
 }
    }
  else if (FUNC_0 (VAR_7) == VAR_2)
    {
      if (!FUNC_1 (VAR_4, VAR_3)
   && (FUNC_2 (VAR_4, VAR_3)->index
       == VAR_10))
 return FUNC_2 (VAR_4, VAR_3)->value;
    }
  return 0;
}
