
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ck_rhs_no_entry_desc {int dummy; } ;
struct TYPE_5__ {void* descs; void* entries; } ;
struct TYPE_6__ {void* descs; TYPE_2__ no_entries; } ;
struct ck_rhs_map {int read_mostly; unsigned long size; unsigned int probe_limit; unsigned long capacity; unsigned long mask; unsigned long max_entries; int offset_mask; void* generation; int probe_func; TYPE_3__ entries; int n_entries; int step; scalar_t__ probe_maximum; } ;
struct ck_rhs_entry_desc {int dummy; } ;
struct ck_rhs {int mode; scalar_t__ load_factor; TYPE_1__* m; } ;
struct TYPE_4__ {struct ck_rhs_map* (* malloc ) (unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*,int ,int) ;
 struct ck_rhs_map* FUNC_5 (unsigned long) ;

__attribute__((used)) static struct ck_rhs_map *
FUNC_6(struct ck_rhs *VAR_8, unsigned long VAR_9)
{
 struct ck_rhs_map *VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12 < VAR_2)
  VAR_12 = VAR_2;

 if (VAR_8->mode & VAR_1)
  VAR_11 = sizeof(struct ck_rhs_map) +
      (sizeof(void *) * VAR_12 +
       sizeof(struct ck_rhs_no_entry_desc) * VAR_12 +
       2 * VAR_0 - 1);
 else
  VAR_11 = sizeof(struct ck_rhs_map) +
      (sizeof(struct ck_rhs_entry_desc) * VAR_12 +
       VAR_0 - 1);
 VAR_10 = VAR_8->m->malloc(VAR_11);
 if (VAR_10 == ((void*)0))
  return ((void*)0);
 VAR_10->read_mostly = !!(VAR_8->mode & VAR_1);

 VAR_10->size = VAR_11;

 VAR_13 = FUNC_1(VAR_12 >> (VAR_4 + 2), VAR_3);
 if (VAR_13 > VAR_5)
  VAR_13 = VAR_5;

 VAR_10->probe_limit = (unsigned int)VAR_13;
 VAR_10->probe_maximum = 0;
 VAR_10->capacity = VAR_12;
 VAR_10->step = FUNC_0(VAR_12);
 VAR_10->mask = VAR_12 - 1;
 VAR_10->n_entries = 0;

 VAR_10->max_entries = (VAR_10->capacity * (unsigned long)VAR_8->load_factor) / 100;

 if (VAR_10->read_mostly) {
  VAR_10->entries.no_entries.entries = (void *)(((uintptr_t)&VAR_10[1] +
      VAR_0 - 1) & ~(VAR_0 - 1));
  VAR_10->entries.no_entries.descs = (void *)(((uintptr_t)VAR_10->entries.no_entries.entries + (sizeof(void *) * VAR_12) + VAR_0 - 1) &~ (VAR_0 - 1));
  FUNC_4(VAR_10->entries.no_entries.entries, 0,
      sizeof(void *) * VAR_12);
  FUNC_4(VAR_10->entries.no_entries.descs, 0,
      sizeof(struct ck_rhs_no_entry_desc) * VAR_12);
  VAR_10->offset_mask = (VAR_0 / sizeof(void *)) - 1;
  VAR_10->probe_func = VAR_7;

 } else {
  VAR_10->entries.descs = (void *)(((uintptr_t)&VAR_10[1] +
      VAR_0 - 1) & ~(VAR_0 - 1));
  FUNC_4(VAR_10->entries.descs, 0, sizeof(struct ck_rhs_entry_desc) * VAR_12);
  VAR_10->offset_mask = (VAR_0 / sizeof(struct ck_rhs_entry_desc)) - 1;
  VAR_10->probe_func = VAR_6;
 }
 FUNC_4(VAR_10->generation, 0, sizeof VAR_10->generation);


 FUNC_3();
 return VAR_10;
}
