
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct publication {int upper; int lower; int type; int key; int ref; } ;
struct distr_item {void* key; void* ref; void* upper; void* lower; void* type; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct distr_item *VAR_0, struct publication *VAR_1)
{
 VAR_0->type = FUNC_1(VAR_1->type);
 VAR_0->lower = FUNC_1(VAR_1->lower);
 VAR_0->upper = FUNC_1(VAR_1->upper);
 VAR_0->ref = FUNC_1(VAR_1->ref);
 VAR_0->key = FUNC_1(VAR_1->key);
 FUNC_0("publ_to_item: %u, %u, %u\n", VAR_1->type, VAR_1->lower, VAR_1->upper);
}
