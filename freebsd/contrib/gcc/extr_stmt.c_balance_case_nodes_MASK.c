
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* case_node_ptr ;
struct TYPE_4__ {struct TYPE_4__* parent; struct TYPE_4__* right; struct TYPE_4__* left; int high; int low; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3 (case_node_ptr *VAR_1, case_node_ptr VAR_2)
{
  case_node_ptr VAR_3;

  VAR_3 = *VAR_1;
  if (VAR_3)
    {
      int VAR_4 = 0;
      int VAR_5 = 0;
      int VAR_6 = 0;
      case_node_ptr *VAR_7;
      case_node_ptr VAR_8;



      while (VAR_3)
 {
   if (!FUNC_2 (VAR_3->low, VAR_3->high))
     {
       VAR_6++;
       if (VAR_0)
  VAR_4 += FUNC_0 (FUNC_1 (VAR_3->high));
     }

   if (VAR_0)
     VAR_4 += FUNC_0 (FUNC_1 (VAR_3->low));

   VAR_5++;
   VAR_3 = VAR_3->right;
 }

      if (VAR_5 > 2)
 {

   VAR_7 = VAR_1;
   VAR_8 = *VAR_7;
   if (VAR_0)
     {


       int VAR_9 = 0;
       VAR_5 = (VAR_4 + 1) / 2;
       while (1)
  {

    if (!FUNC_2 ((*VAR_7)->low, (*VAR_7)->high))
      VAR_5 -= FUNC_0 (FUNC_1 ((*VAR_7)->high));
    VAR_5 -= FUNC_0 (FUNC_1 ((*VAR_7)->low));
    if (VAR_5 <= 0)
      break;
    VAR_7 = &(*VAR_7)->right;
    VAR_9 += 1;
  }
       if (VAR_9 == 0)
  {


    VAR_3 = *VAR_1;
    VAR_3->parent = VAR_2;
    FUNC_3 (&VAR_3->left, VAR_3);
    for (; VAR_3->right; VAR_3 = VAR_3->right)
      VAR_3->right->parent = VAR_3;
    return;
  }
     }

   else if (VAR_5 == 3)
     VAR_7 = &(*VAR_7)->right;
   else
     {



       VAR_5 = (VAR_5 + VAR_6 + 1) / 2;
       while (1)
  {

    if (!FUNC_2 ((*VAR_7)->low, (*VAR_7)->high))
      VAR_5--;
    VAR_5--;
    if (VAR_5 <= 0)
      break;
    VAR_7 = &(*VAR_7)->right;
  }
     }
   *VAR_1 = VAR_3 = *VAR_7;
   *VAR_7 = 0;
   VAR_3->parent = VAR_2;
   VAR_3->left = VAR_8;


   FUNC_3 (&VAR_3->left, VAR_3);
   FUNC_3 (&VAR_3->right, VAR_3);
 }
      else
 {


   VAR_3 = *VAR_1;
   VAR_3->parent = VAR_2;
   for (; VAR_3->right; VAR_3 = VAR_3->right)
     VAR_3->right->parent = VAR_3;
 }
    }
}
