
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {int * array; } ;
struct lruhash_entry {int dummy; } ;
typedef int hashvalue_type ;


 int FUNC_0 (int ,int ,struct lruhash_entry*,void*,void*) ;
 size_t FUNC_1 (struct slabhash*,int ) ;

void FUNC_2(struct slabhash* VAR_0, hashvalue_type VAR_1,
 struct lruhash_entry* VAR_2, void* VAR_3, void* VAR_4)
{
 FUNC_0(VAR_0->array[FUNC_1(VAR_0, VAR_1)], VAR_1, VAR_2, VAR_3, VAR_4);
}
