
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * node_p ;
typedef int ng_ID_t ;
typedef int item_p ;
typedef int * hook_p ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,char const*,int **,int **) ;

int
FUNC_5(node_p VAR_1, item_p VAR_2, const char *VAR_3, ng_ID_t VAR_4)
{
 node_p VAR_5 = ((void*)0);
 hook_p VAR_6 = ((void*)0);
 int VAR_7;

 VAR_0;




 VAR_7 = FUNC_4(VAR_1, VAR_3, &VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_2);
  return (VAR_7);
 }
 FUNC_1(VAR_2, VAR_5);
 if (VAR_6)
  FUNC_0(VAR_2, VAR_6);

 FUNC_3(VAR_2, VAR_1, VAR_4);
 return (0);
}
