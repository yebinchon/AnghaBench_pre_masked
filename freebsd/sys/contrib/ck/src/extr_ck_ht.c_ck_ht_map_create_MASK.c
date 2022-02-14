
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ck_ht_map {int mode; int size; int capacity; int mask; struct ck_ht_entry* entries; struct ck_ht_entry* probe_bound; scalar_t__ n_entries; int step; scalar_t__ probe_maximum; scalar_t__ deletions; int probe_limit; } ;
struct ck_ht_entry {int dummy; } ;
struct ck_ht {int mode; TYPE_1__* m; } ;
struct TYPE_2__ {struct ck_ht_map* (* malloc ) (int) ;} ;
typedef struct ck_ht_entry CK_HT_WORD ;
typedef int CK_HT_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ck_ht_entry*,int ,int) ;
 struct ck_ht_map* FUNC_5 (int) ;

__attribute__((used)) static struct ck_ht_map *
FUNC_6(struct ck_ht *VAR_5, CK_HT_TYPE VAR_6)
{
 struct ck_ht_map *VAR_7;
 CK_HT_TYPE VAR_8;
 uintptr_t VAR_9;
 uint32_t VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 < VAR_0)
  VAR_10 = VAR_0;

 VAR_8 = sizeof(struct ck_ht_map) +
     (sizeof(struct ck_ht_entry) * VAR_10 + VAR_4 - 1);

 if (VAR_5->mode & VAR_3) {
  VAR_9 = sizeof(CK_HT_WORD) * VAR_10;
  VAR_8 += VAR_9;
 } else {
  VAR_9 = 0;
 }

 VAR_7 = VAR_5->m->malloc(VAR_8);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->mode = VAR_5->mode;
 VAR_7->size = VAR_8;
 VAR_7->probe_limit = FUNC_1(VAR_10 >>
     (VAR_1 + 2), VAR_2);

 VAR_7->deletions = 0;
 VAR_7->probe_maximum = 0;
 VAR_7->capacity = VAR_10;
 VAR_7->step = FUNC_0(VAR_7->capacity);
 VAR_7->mask = VAR_7->capacity - 1;
 VAR_7->n_entries = 0;
 VAR_7->entries = (struct ck_ht_entry *)(((uintptr_t)&VAR_7[1] + VAR_9 +
     VAR_4 - 1) & ~(VAR_4 - 1));

 if (VAR_5->mode & VAR_3) {
  VAR_7->probe_bound = (CK_HT_WORD *)&VAR_7[1];
  FUNC_4(VAR_7->probe_bound, 0, VAR_9);
 } else {
  VAR_7->probe_bound = ((void*)0);
 }

 FUNC_4(VAR_7->entries, 0, sizeof(struct ck_ht_entry) * VAR_10);
 FUNC_3();
 return VAR_7;
}
