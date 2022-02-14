
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct init_node {scalar_t__ purpose; struct init_node* parent; struct init_node* right; struct init_node* left; int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct init_node* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (int VAR_7)
{
  struct init_node *VAR_8 = VAR_3;
  tree VAR_9;

 retry:






  VAR_9 = 0;
  while (VAR_8)
    {
      if (FUNC_0 (VAR_4) == VAR_0)
 {
   if (FUNC_4 (VAR_8->purpose,
      VAR_6))
     FUNC_3 (VAR_8->value, 1,
     FUNC_1 (VAR_4),
     VAR_6, 0);
   else if (FUNC_5 (VAR_6,
        VAR_8->purpose))
     {

       if (VAR_8->left)
  VAR_8 = VAR_8->left;
       else
  {


    VAR_9 = VAR_8->purpose;
    break;
  }
     }
   else
     {

       if (VAR_8->right)
  VAR_8 = VAR_8->right;
       else
  {


    while (VAR_8->parent && VAR_8->parent->right == VAR_8)
      VAR_8 = VAR_8->parent;
    VAR_8 = VAR_8->parent;
    if (VAR_8 && FUNC_5 (VAR_6,
           VAR_8->purpose))
      {
        VAR_9 = VAR_8->purpose;
        break;
      }
  }
     }
 }
      else if (FUNC_0 (VAR_4) == VAR_1
        || FUNC_0 (VAR_4) == VAR_2)
 {
   tree VAR_10, VAR_11;


   if (VAR_5 == 0)
     break;

   VAR_10 = FUNC_2 (VAR_5);
   VAR_11 = FUNC_2 (VAR_8->purpose);


   if (FUNC_4 (VAR_11, VAR_10))
     {
       VAR_5 = VAR_8->purpose;
       FUNC_3 (VAR_8->value, 1, FUNC_1 (VAR_8->purpose),
       VAR_8->purpose, 0);
     }
   else if (FUNC_5 (VAR_10, VAR_11))
     {

       if (VAR_8->left)
  VAR_8 = VAR_8->left;
       else
  {


    VAR_9 = VAR_8->purpose;
    break;
  }
     }
   else
     {

       if (VAR_8->right)
  VAR_8 = VAR_8->right;
       else
  {


    while (VAR_8->parent && VAR_8->parent->right == VAR_8)
      VAR_8 = VAR_8->parent;
    VAR_8 = VAR_8->parent;
    if (VAR_8
        && (FUNC_5 (VAR_10,
        FUNC_2 (VAR_8->purpose))))
      {
        VAR_9 = VAR_8->purpose;
        break;
      }
  }
     }
 }
    }



  if (!(VAR_7 && VAR_9 != 0))
    return;



  if (FUNC_0 (VAR_4) == VAR_1
      || FUNC_0 (VAR_4) == VAR_2)
    VAR_5 = VAR_9;
  else if (FUNC_0 (VAR_4) == VAR_0)
    VAR_6 = VAR_9;



  goto retry;
}
