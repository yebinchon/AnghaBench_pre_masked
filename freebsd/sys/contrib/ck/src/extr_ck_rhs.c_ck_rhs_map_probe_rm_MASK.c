
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * descs; int * entries; } ;
struct TYPE_4__ {TYPE_1__ no_entries; } ;
struct ck_rhs_map {unsigned long mask; TYPE_2__ entries; } ;
struct ck_rhs_entry_desc {int in_rh; unsigned long probes; } ;
struct ck_rhs {int mode; int (* compare ) (void const*,void const*) ;} ;
typedef enum ck_rhs_probe_behavior { ____Placeholder_ck_rhs_probe_behavior } ck_rhs_probe_behavior ;


 uintptr_t VAR_0 ;
 void const* VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void const*) ;
 void* FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 int FUNC_3 (void const*,void const*) ;

__attribute__((used)) static long
FUNC_4(struct ck_rhs *VAR_7,
    struct ck_rhs_map *VAR_8,
    unsigned long *VAR_9,
    long *VAR_10,
    unsigned long VAR_11,
    const void *VAR_12,
    const void **VAR_13,
    unsigned long VAR_14,
    enum ck_rhs_probe_behavior VAR_15)
{
 const void *VAR_16;
 const void *VAR_17;
 long VAR_18 = -1;
 unsigned long VAR_19, VAR_20, VAR_21;
 VAR_17 = VAR_12;

  *VAR_13 = ((void*)0);
 if (VAR_15 != VAR_6) {
  VAR_20 = 0;
  VAR_19 = VAR_11 & VAR_8->mask;
 } else {

  VAR_20 = *VAR_9;
  VAR_19 = FUNC_2(VAR_8, *VAR_10,
      VAR_20);
 }
 VAR_21 = VAR_14;

 for (;;) {
  if (VAR_20++ == VAR_14) {
   if (VAR_14 == VAR_21 || VAR_18 != -1) {
    VAR_16 = VAR_1;
    goto leave;
   }




   VAR_14 = VAR_21;
  }
  VAR_16 = FUNC_1(&VAR_8->entries.no_entries.entries[VAR_19]);
  if (VAR_16 == VAR_1)
   goto leave;

  if (VAR_15 != VAR_4) {
   struct ck_rhs_entry_desc *VAR_22 = (void *)&VAR_8->entries.no_entries.descs[VAR_19];

   if (VAR_18 == -1 &&
       VAR_22->in_rh == 0 && VAR_22->probes < VAR_20) {
    VAR_18 = VAR_19;
    *VAR_9 = VAR_20;

    if (VAR_15 == VAR_5 ||
        VAR_15 == VAR_6) {
     VAR_16 = VAR_1;
     goto leave;
    }
   }
  }

  if (VAR_15 != VAR_6) {
   if (VAR_16 == VAR_17)
    goto leave;

   if (VAR_7->compare == ((void*)0)) {
    VAR_19 = FUNC_2(VAR_8, VAR_19, VAR_20);
    continue;
   }

   if (VAR_7->compare(VAR_16, VAR_12) == 1)
    goto leave;
  }
  VAR_19 = FUNC_2(VAR_8, VAR_19, VAR_20);
 }
leave:
 if (VAR_20 > VAR_14) {
  VAR_19 = -1;
 } else {
  *VAR_13 = VAR_16;
 }

 if (VAR_18 == -1)
  *VAR_9 = VAR_20;

 *VAR_10 = VAR_18;
 return VAR_19;
}
