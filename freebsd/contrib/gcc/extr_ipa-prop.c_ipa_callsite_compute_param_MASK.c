
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_node {int dummy; } ;
struct cgraph_edge {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 struct cgraph_node* FUNC_7 (struct cgraph_edge*) ;
 scalar_t__ FUNC_8 (struct cgraph_edge*) ;
 int FUNC_9 (struct cgraph_edge*) ;
 int FUNC_10 (struct cgraph_edge*,int,scalar_t__) ;
 int FUNC_11 (struct cgraph_edge*,int,int) ;
 int FUNC_12 (struct cgraph_edge*,int,int ) ;
 int FUNC_13 (struct cgraph_edge*) ;
 scalar_t__ FUNC_14 (struct cgraph_node*,int) ;
 int FUNC_15 (struct cgraph_node*,scalar_t__) ;

void
FUNC_16 (struct cgraph_edge *VAR_11)
{
  tree VAR_12;
  tree VAR_13, VAR_14;
  int VAR_15;
  int VAR_16;
  struct cgraph_node *VAR_17;

  if (FUNC_8 (VAR_11) == 0)
    return;
  FUNC_9 (VAR_11);
  VAR_12 = FUNC_6 (FUNC_13 (VAR_11));
  FUNC_5 (FUNC_2 (VAR_12) == VAR_1);
  VAR_13 = FUNC_3 (VAR_12, 1);
  VAR_15 = 0;

  for (; VAR_13 != VAR_7; VAR_13 = FUNC_1 (VAR_13))
    {



      if (FUNC_2 (FUNC_4 (VAR_13)) == VAR_8)
 {
   VAR_17 = FUNC_7 (VAR_11);
   VAR_16 = FUNC_15 (VAR_17, FUNC_4 (VAR_13));
   if (VAR_16 < 0 || FUNC_14 (VAR_17, VAR_16))
     FUNC_12 (VAR_11, VAR_15, VAR_10);
   else
     {
       FUNC_12 (VAR_11, VAR_15, VAR_5);
       FUNC_11 (VAR_11, VAR_15, VAR_16);
     }
 }



      else if (FUNC_2 (FUNC_4 (VAR_13)) == VAR_6
        || FUNC_2 (FUNC_4 (VAR_13)) == VAR_9)
 {
   FUNC_12 (VAR_11, VAR_15, VAR_3);
   FUNC_10 (VAR_11, VAR_15,
         FUNC_4 (VAR_13));
 }




      else if (FUNC_2 (FUNC_4 (VAR_13)) == VAR_0
        && FUNC_2 (FUNC_3 (FUNC_4 (VAR_13), 0)) ==
        VAR_2)
 {
   VAR_14 = FUNC_3 (FUNC_4 (VAR_13), 0);
   if (FUNC_2 (FUNC_0 (VAR_14)) == VAR_6
       || FUNC_2 (FUNC_0 (VAR_14)) == VAR_9)
     {
       FUNC_12 (VAR_11, VAR_15,
        VAR_4);
       FUNC_10 (VAR_11, VAR_15,
      FUNC_0 (VAR_14));
     }
 }
      else
 FUNC_12 (VAR_11, VAR_15, VAR_10);
      VAR_15++;
    }
}
