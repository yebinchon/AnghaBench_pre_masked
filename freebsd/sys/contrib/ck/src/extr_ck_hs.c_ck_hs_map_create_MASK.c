
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ck_hs_map {unsigned long size; unsigned int probe_limit; unsigned long capacity; unsigned long mask; int * probe_bound; int * generation; int * entries; int n_entries; int step; scalar_t__ probe_maximum; } ;
struct ck_hs {int mode; TYPE_1__* m; } ;
struct TYPE_2__ {struct ck_hs_map* (* malloc ) (unsigned long) ;} ;
typedef int CK_HS_WORD ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,unsigned long) ;
 struct ck_hs_map* FUNC_5 (unsigned long) ;

__attribute__((used)) static struct ck_hs_map *
FUNC_6(struct ck_hs *VAR_6, unsigned long VAR_7)
{
 struct ck_hs_map *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 < VAR_1)
  VAR_10 = VAR_1;

 VAR_9 = sizeof(struct ck_hs_map) + (sizeof(void *) * VAR_10 + VAR_4 - 1);

 if (VAR_6->mode & VAR_0) {
  VAR_11 = sizeof(CK_HS_WORD) * VAR_10;
  VAR_9 += VAR_11;
 } else {
  VAR_11 = 0;
 }

 VAR_8 = VAR_6->m->malloc(VAR_9);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->size = VAR_9;


 VAR_12 = FUNC_1(VAR_10 >> (VAR_3 + 2), VAR_2);
 if (VAR_12 > VAR_5)
  VAR_12 = VAR_5;

 VAR_8->probe_limit = (unsigned int)VAR_12;
 VAR_8->probe_maximum = 0;
 VAR_8->capacity = VAR_10;
 VAR_8->step = FUNC_0(VAR_10);
 VAR_8->mask = VAR_10 - 1;
 VAR_8->n_entries = 0;


 VAR_8->entries = (void *)(((uintptr_t)&VAR_8[1] + VAR_11 +
     VAR_4 - 1) & ~(VAR_4 - 1));

 FUNC_4(VAR_8->entries, 0, sizeof(void *) * VAR_10);
 FUNC_4(VAR_8->generation, 0, sizeof VAR_8->generation);

 if (VAR_6->mode & VAR_0) {
  VAR_8->probe_bound = (CK_HS_WORD *)&VAR_8[1];
  FUNC_4(VAR_8->probe_bound, 0, VAR_11);
 } else {
  VAR_8->probe_bound = ((void*)0);
 }


 FUNC_3();
 return VAR_8;
}
