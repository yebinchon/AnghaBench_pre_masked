
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {scalar_t__* links; int addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 struct tipc_node* FUNC_5 (size_t) ;
 int FUNC_6 (struct tipc_node*) ;
 int FUNC_7 (struct tipc_node*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_3)
{
 struct tipc_node *VAR_4;
 char VAR_5[16];
 u32 VAR_6;

 FUNC_2(&VAR_2);
 VAR_4 = FUNC_5((u32)VAR_3);
 if (!VAR_4) {
  FUNC_3(&VAR_2);
  return;
 }

 FUNC_6(VAR_4);

 FUNC_8("Resetting all links to %s\n",
      FUNC_0(VAR_5, VAR_4->addr));

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->links[VAR_6]) {
   FUNC_1(VAR_4->links[VAR_6], VAR_1,
       "Resetting link\n");
   FUNC_4(VAR_4->links[VAR_6]);
  }
 }

 FUNC_7(VAR_4);
 FUNC_3(&VAR_2);
}
