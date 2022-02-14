
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ck_malloc {int * free; int * malloc; } ;
struct ck_ht {unsigned int mode; int * map; int * h; int seed; struct ck_malloc* m; } ;
typedef int ck_ht_hash_cb_t ;
typedef int CK_HT_TYPE ;


 int * VAR_0 ;
 int * FUNC_0 (struct ck_ht*,int ) ;

bool
FUNC_1(struct ck_ht *VAR_1,
    unsigned int VAR_2,
    ck_ht_hash_cb_t *VAR_3,
    struct ck_malloc *VAR_4,
    CK_HT_TYPE VAR_5,
    uint64_t VAR_6)
{

 if (VAR_4 == ((void*)0) || VAR_4->malloc == ((void*)0) || VAR_4->free == ((void*)0))
  return 0;

 VAR_1->m = VAR_4;
 VAR_1->mode = VAR_2;
 VAR_1->seed = VAR_6;

 if (VAR_3 == ((void*)0)) {
  VAR_1->h = VAR_0;
 } else {
  VAR_1->h = VAR_3;
 }

 VAR_1->map = FUNC_0(VAR_1, VAR_5);
 return VAR_1->map != ((void*)0);
}
