
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_malloc {int * free; int * malloc; } ;
struct ck_hs {unsigned int mode; unsigned long seed; int * map; int * compare; int * hf; struct ck_malloc* m; } ;
typedef int ck_hs_hash_cb_t ;
typedef int ck_hs_compare_cb_t ;


 int * FUNC_0 (struct ck_hs*,unsigned long) ;

bool
FUNC_1(struct ck_hs *VAR_0,
    unsigned int VAR_1,
    ck_hs_hash_cb_t *VAR_2,
    ck_hs_compare_cb_t *VAR_3,
    struct ck_malloc *VAR_4,
    unsigned long VAR_5,
    unsigned long VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_4->malloc == ((void*)0) || VAR_4->free == ((void*)0) || VAR_2 == ((void*)0))
  return 0;

 VAR_0->m = VAR_4;
 VAR_0->mode = VAR_1;
 VAR_0->seed = VAR_6;
 VAR_0->hf = VAR_2;
 VAR_0->compare = VAR_3;

 VAR_0->map = FUNC_0(VAR_0, VAR_5);
 return VAR_0->map != ((void*)0);
}
