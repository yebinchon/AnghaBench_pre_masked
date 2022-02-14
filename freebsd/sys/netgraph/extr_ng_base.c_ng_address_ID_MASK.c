
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * node_p ;
typedef int ng_ID_t ;
typedef int item_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ) ;

int
FUNC_6(node_p VAR_2, item_p VAR_3, ng_ID_t VAR_4, ng_ID_t VAR_5)
{
 node_p VAR_6;

 VAR_1;



 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_3);
  FUNC_4();
  return(VAR_0);
 }

 FUNC_1(VAR_3, VAR_6);
 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_2, VAR_5);
 return (0);
}
