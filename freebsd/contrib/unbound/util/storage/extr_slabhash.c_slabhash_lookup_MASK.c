
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {int * array; } ;
struct lruhash_entry {int dummy; } ;
typedef int hashvalue_type ;


 struct lruhash_entry* FUNC_0 (int ,int ,void*,int) ;
 size_t FUNC_1 (struct slabhash*,int ) ;

struct lruhash_entry* FUNC_2(struct slabhash* VAR_0,
 hashvalue_type VAR_1, void* VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0->array[FUNC_1(VAR_0, VAR_1)], VAR_1, VAR_2, VAR_3);
}
