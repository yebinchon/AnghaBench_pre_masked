
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs {unsigned int mode; unsigned long seed; int * map; int load_factor; int * compare; int * hf; struct ck_malloc* m; } ;
struct ck_malloc {int * free; int * malloc; } ;
typedef int ck_rhs_hash_cb_t ;
typedef int ck_rhs_compare_cb_t ;


 int VAR_0 ;
 int * FUNC_0 (struct ck_rhs*,unsigned long) ;

bool
FUNC_1(struct ck_rhs *VAR_1,
    unsigned int VAR_2,
    ck_rhs_hash_cb_t *VAR_3,
    ck_rhs_compare_cb_t *VAR_4,
    struct ck_malloc *VAR_5,
    unsigned long VAR_6,
    unsigned long VAR_7)
{

 if (VAR_5 == ((void*)0) || VAR_5->malloc == ((void*)0) || VAR_5->free == ((void*)0) || VAR_3 == ((void*)0))
  return 0;

 VAR_1->m = VAR_5;
 VAR_1->mode = VAR_2;
 VAR_1->seed = VAR_7;
 VAR_1->hf = VAR_3;
 VAR_1->compare = VAR_4;
 VAR_1->load_factor = VAR_0;

 VAR_1->map = FUNC_0(VAR_1, VAR_6);
 return VAR_1->map != ((void*)0);
}
