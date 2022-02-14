
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_node {int dummy; } ;
typedef enum availability { ____Placeholder_availability } availability ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_7)
{
  int VAR_8 = FUNC_6(VAR_7);
  tree VAR_9 = FUNC_2 (VAR_7, 1);
  tree VAR_10;
  tree VAR_11 = FUNC_11 (VAR_7);
  tree VAR_12;
  struct cgraph_node* VAR_13;
  enum availability VAR_14 = VAR_0;

  for (VAR_10 = VAR_9;
       VAR_10 != VAR_5;
       VAR_10 = FUNC_1 (VAR_10))
    {
      tree VAR_15 = FUNC_4 (VAR_10);
      FUNC_10 (VAR_15);
    }

  if (VAR_11)
    {
      tree VAR_16;
      tree VAR_17 = ((void*)0);
      VAR_13 = FUNC_8(VAR_11);
      VAR_14 = FUNC_7 (VAR_13);



      if (FUNC_5 (FUNC_3 (VAR_11)))
 {
   VAR_10 = VAR_9;
   for (VAR_16 = FUNC_5 (FUNC_3 (VAR_11));
        VAR_16 && FUNC_4 (VAR_16) != VAR_6;
        VAR_16 = FUNC_1 (VAR_16))
     {
       if (VAR_10)
  {
    VAR_12 = FUNC_4 (VAR_10);
    VAR_17 = FUNC_4(VAR_16);
    FUNC_9 (VAR_17, VAR_12);
    VAR_10 = FUNC_1 (VAR_10);
  }
       else



  break;
     }
 }
      else
 {



   VAR_10 = VAR_9;
   for (VAR_16 = FUNC_0 (VAR_11);
        VAR_16;
        VAR_16 = FUNC_1 (VAR_16))
     {
       if (VAR_10)
  {
    VAR_12 = FUNC_4 (VAR_10);
    VAR_17 = FUNC_3(VAR_16);
    FUNC_9 (VAR_17, VAR_12);
    VAR_10 = FUNC_1 (VAR_10);
  }
       else



  break;
     }
 }



      VAR_16 = VAR_17;
      for (;
    VAR_10 != VAR_5;
    VAR_10 = FUNC_1 (VAR_10))
 {
   VAR_12 = FUNC_4 (VAR_10);
   if (VAR_16)
     FUNC_9 (VAR_16, VAR_12);
   else
     {





       tree VAR_18 = FUNC_12 (FUNC_3 (VAR_12), 0, 0);
       FUNC_13 (VAR_18, VAR_4);
     }
 }
    }







  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
    {


      for (VAR_10 = VAR_9;
    VAR_10 != VAR_5;
    VAR_10 = FUNC_1 (VAR_10))
 {
   tree VAR_19 =
     FUNC_12 (FUNC_3 (FUNC_4 (VAR_10)), 0, 0);
   FUNC_13 (VAR_19, VAR_3);
    }

      if (VAR_11)
 {
   tree VAR_20 =
     FUNC_12 (FUNC_3 (FUNC_3 (VAR_11)), 0, 0);
   FUNC_13 (VAR_20, VAR_3);
 }
    }
  return (VAR_8 & VAR_2);
}
