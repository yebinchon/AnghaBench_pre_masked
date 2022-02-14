
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;


 union node* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 union node* FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;

union node *
FUNC_4(int VAR_8)
{
 int VAR_9;




 FUNC_1();
 VAR_5 = ((void*)0);

 VAR_7 = 0;
 VAR_3 = 0;
 VAR_4 = VAR_8;
 if (VAR_4)
  FUNC_3(1);
 else
  FUNC_3(0);
 VAR_6 = 0;
 VAR_9 = FUNC_2();
 if (VAR_9 == VAR_1)
  return VAR_0;
 if (VAR_9 == VAR_2)
  return ((void*)0);
 VAR_7++;
 return FUNC_0(1);
}
