
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs {int * compare; int * hf; struct ck_malloc* m; int load_factor; int map; int seed; int mode; } ;
struct ck_malloc {int * free; int * malloc; } ;
typedef int ck_rhs_hash_cb_t ;
typedef int ck_rhs_compare_cb_t ;



bool
FUNC_0(struct ck_rhs *VAR_0,
    struct ck_rhs *VAR_1,
    ck_rhs_hash_cb_t *VAR_2,
    ck_rhs_compare_cb_t *VAR_3,
    struct ck_malloc *VAR_4)
{

 if (VAR_4 == ((void*)0) || VAR_4->malloc == ((void*)0) || VAR_4->free == ((void*)0) || VAR_2 == ((void*)0))
  return 0;

 VAR_0->mode = VAR_1->mode;
 VAR_0->seed = VAR_1->seed;
 VAR_0->map = VAR_1->map;
 VAR_0->load_factor = VAR_1->load_factor;
 VAR_0->m = VAR_4;
 VAR_0->hf = VAR_2;
 VAR_0->compare = VAR_3;
 return 1;
}
