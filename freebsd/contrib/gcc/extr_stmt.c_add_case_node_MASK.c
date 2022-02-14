
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct case_node {struct case_node* right; int * left; int parent; scalar_t__ code_label; void* high; void* low; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int) ;
 struct case_node* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct case_node *
FUNC_12 (struct case_node *VAR_1, tree VAR_2, tree VAR_3, tree VAR_4,
        tree VAR_5)
{
  tree VAR_6, VAR_7;
  struct case_node *VAR_8;

  FUNC_8 (FUNC_0 (VAR_3) == VAR_0);
  FUNC_8 (!VAR_4 || FUNC_0 (VAR_4) == VAR_0);

  VAR_6 = FUNC_5 (VAR_2);
  VAR_7 = FUNC_4 (VAR_2);





  if (!VAR_4 || FUNC_11 (VAR_3, VAR_4))
    {

      if ((FUNC_0 (VAR_6) == VAR_0
            && FUNC_10 (VAR_3, VAR_6) < 0)
   || (FUNC_0 (VAR_7) == VAR_0
       && FUNC_10 (VAR_3, VAR_7) > 0))
 return VAR_1;
      VAR_3 = FUNC_7 (VAR_2, VAR_3);
      VAR_4 = VAR_3;
    }
  else
    {

      if ((FUNC_0 (VAR_6) == VAR_0
            && FUNC_10 (VAR_4, VAR_6) < 0)
   || (FUNC_0 (VAR_7) == VAR_0
       && FUNC_10 (VAR_3, VAR_7) > 0))
 return VAR_1;



      if (FUNC_0 (VAR_6) == VAR_0
            && FUNC_10 (VAR_3, VAR_6) < 0)
 VAR_3 = VAR_6;
      VAR_3 = FUNC_7 (VAR_2, VAR_3);



      if (FUNC_0 (VAR_7) == VAR_0
   && FUNC_10 (VAR_4, VAR_7) > 0)
 VAR_4 = VAR_7;
      VAR_4 = FUNC_7 (VAR_2, VAR_4);
    }



  VAR_8 = FUNC_9 (sizeof (struct case_node));
  VAR_8->low = FUNC_6 (FUNC_3 (VAR_3), FUNC_2 (VAR_3),
          FUNC_1 (VAR_3));
  VAR_8->high = FUNC_6 (FUNC_3 (VAR_4), FUNC_2 (VAR_4),
    FUNC_1 (VAR_4));
  VAR_8->code_label = VAR_5;
  VAR_8->parent = *(VAR_8->left = ((void*)0));
  VAR_8->right = VAR_1;
  return VAR_8;
}
