
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_node {int dummy; } ;
typedef TYPE_1__* funct_state ;
typedef enum availability { ____Placeholder_availability } availability ;
struct TYPE_4__ {scalar_t__ pure_const_state; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (funct_state VAR_8, tree VAR_9)
{
  int VAR_10 = FUNC_5(VAR_9);
  tree VAR_11 = FUNC_3 (VAR_9, 1);
  tree VAR_12;
  tree VAR_13 = FUNC_9 (VAR_9);
  struct cgraph_node* VAR_14;
  enum availability VAR_15 = VAR_0;

  for (VAR_12 = VAR_11;
       VAR_12 != VAR_7;
       VAR_12 = FUNC_2 (VAR_12))
    {
      tree VAR_16 = FUNC_4 (VAR_12);
      FUNC_8 (VAR_8, VAR_16);
    }
  if (VAR_13)
    {
      VAR_14 = FUNC_7(VAR_13);
      VAR_15 = FUNC_6 (VAR_14);



      if (FUNC_10 (VAR_13))
 VAR_8->pure_const_state = VAR_5;

      if (FUNC_0 (VAR_13) == VAR_2)
 switch (FUNC_1 (VAR_13))
   {
   case 129:
   case 128:
     VAR_8->pure_const_state = VAR_5;
     break;
   default:
     break;
   }
    }






  if (VAR_15 == VAR_0 || VAR_15 == VAR_1)
    {
      if (VAR_10 & VAR_3)
 {
   if (VAR_8->pure_const_state == VAR_4)
     VAR_8->pure_const_state = VAR_6;
 }
      else
 VAR_8->pure_const_state = VAR_5;
    }
  else
    {

      if (VAR_10 & VAR_3)
 {
   if (VAR_8->pure_const_state == VAR_4)
     VAR_8->pure_const_state = VAR_6;
 }
    }
}
