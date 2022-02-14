
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct publication {int key; int ref; int node; int lower; int type; int upper; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct publication*) ;
 int VAR_0 ;
 struct publication* FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct publication *VAR_1)
{
 struct publication *VAR_2;

 FUNC_4(&VAR_0);
 FUNC_0("node_is_down: withdrawing %u, %u, %u\n",
     VAR_1->type, VAR_1->lower, VAR_1->upper);
 VAR_1->key += 1222345;
 VAR_2 = FUNC_3(VAR_1->type, VAR_1->lower,
         VAR_1->node, VAR_1->ref, VAR_1->key);
 FUNC_5(&VAR_0);

 if (VAR_2 != VAR_1) {
  FUNC_1("Unable to remove publication from failed node\n"
      "(type=%u, lower=%u, node=0x%x, ref=%u, key=%u)\n",
      VAR_1->type, VAR_1->lower, VAR_1->node, VAR_1->ref, VAR_1->key);
 }

 if (VAR_2) {
  FUNC_2(VAR_2);
 }
}
