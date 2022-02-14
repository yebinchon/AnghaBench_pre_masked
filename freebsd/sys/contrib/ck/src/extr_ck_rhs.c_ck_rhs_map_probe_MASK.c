
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ck_rhs_entry_desc* descs; } ;
struct ck_rhs_map {unsigned long mask; TYPE_1__ entries; } ;
struct ck_rhs_entry_desc {int in_rh; unsigned long probes; int entry; } ;
struct ck_rhs {int mode; int (* compare ) (void const*,void const*) ;} ;
typedef enum ck_rhs_probe_behavior { ____Placeholder_ck_rhs_probe_behavior } ck_rhs_probe_behavior ;


 uintptr_t VAR_0 ;
 void const* VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void const*) ;
 void* FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct ck_rhs_map*,unsigned long) ;
 unsigned long FUNC_3 (struct ck_rhs_map*,unsigned long,unsigned long) ;
 int FUNC_4 (void const*,void const*) ;

__attribute__((used)) static long
FUNC_5(struct ck_rhs *VAR_8,
    struct ck_rhs_map *VAR_9,
    unsigned long *VAR_10,
    long *VAR_11,
    unsigned long VAR_12,
    const void *VAR_13,
    const void **VAR_14,
    unsigned long VAR_15,
    enum ck_rhs_probe_behavior VAR_16)
{
 const void *VAR_17;
 const void *VAR_18;
 long VAR_19 = -1;
 unsigned long VAR_20, VAR_21, VAR_22;
 VAR_18 = VAR_13;


  *VAR_14 = ((void*)0);
 if (VAR_16 != VAR_7) {
  VAR_21 = 0;
  VAR_20 = VAR_12 & VAR_9->mask;
 } else {

  VAR_21 = *VAR_10;
  VAR_20 = FUNC_3(VAR_9, *VAR_11,
      VAR_21);
 }
 VAR_22 = VAR_15;
 if (VAR_16 == VAR_4)
  VAR_15 = FUNC_2(VAR_9, VAR_12);

 for (;;) {
  if (VAR_21++ == VAR_15) {
   if (VAR_15 == VAR_22 || VAR_19 != -1) {
    VAR_17 = VAR_1;
    goto leave;
   }




   VAR_15 = VAR_22;
  }
  VAR_17 = FUNC_1(&VAR_9->entries.descs[VAR_20].entry);
  if (VAR_17 == VAR_1)
   goto leave;
  if ((VAR_16 != VAR_5)) {
   struct ck_rhs_entry_desc *VAR_23 = &VAR_9->entries.descs[VAR_20];

   if (VAR_19 == -1 &&
       VAR_23->in_rh == 0 && VAR_23->probes < VAR_21) {
    VAR_19 = VAR_20;
    *VAR_10 = VAR_21;

    if (VAR_16 == VAR_6 ||
        VAR_16 == VAR_7) {
     VAR_17 = VAR_1;
     goto leave;
    }
   }
  }

  if (VAR_16 != VAR_7) {
   if (VAR_17 == VAR_18)
    goto leave;

   if (VAR_8->compare == ((void*)0)) {
    VAR_20 = FUNC_3(VAR_9, VAR_20, VAR_21);
    continue;
   }

   if (VAR_8->compare(VAR_17, VAR_13) == 1)
    goto leave;
  }
  VAR_20 = FUNC_3(VAR_9, VAR_20, VAR_21);
 }
leave:
 if (VAR_21 > VAR_15) {
  VAR_20 = -1;
 } else {
  *VAR_14 = VAR_17;
 }

 if (VAR_19 == -1)
  *VAR_10 = VAR_21;

 *VAR_11 = VAR_19;
 return VAR_20;
}
