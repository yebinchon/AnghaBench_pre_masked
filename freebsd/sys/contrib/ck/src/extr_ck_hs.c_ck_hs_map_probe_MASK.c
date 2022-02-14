
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {unsigned long mask; int * entries; } ;
struct ck_hs {int mode; int (* compare ) (void const*,void const*) ;} ;
typedef enum ck_hs_probe_behavior { ____Placeholder_ck_hs_probe_behavior } ck_hs_probe_behavior ;


 void const* VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 void const* VAR_6 ;
 void* FUNC_0 (void const*) ;
 int VAR_7 ;
 uintptr_t VAR_8 ;
 unsigned long FUNC_1 (struct ck_hs_map*,unsigned long) ;
 unsigned long FUNC_2 (struct ck_hs_map*,unsigned long,unsigned long,int ,unsigned long) ;
 void* FUNC_3 (void const**) ;
 int FUNC_4 (void const*,void const*) ;

__attribute__((used)) static const void **
FUNC_5(struct ck_hs *VAR_9,
    struct ck_hs_map *VAR_10,
    unsigned long *VAR_11,
    const void ***VAR_12,
    unsigned long VAR_13,
    const void *VAR_14,
    const void **VAR_15,
    unsigned long VAR_16,
    enum ck_hs_probe_behavior VAR_17)
{
 const void **VAR_18, **VAR_19, *VAR_20, *VAR_21;
 const void **VAR_22 = ((void*)0);
 unsigned long VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 VAR_21 = VAR_14;


 VAR_23 = VAR_13 & VAR_10->mask;
 *VAR_15 = ((void*)0);
 VAR_25 = VAR_26 = 0;

 VAR_27 = VAR_16;
 if (VAR_17 == VAR_3)
  VAR_16 = FUNC_1(VAR_10, VAR_13);

 for (;;) {
  VAR_18 = (const void **)((uintptr_t)&VAR_10->entries[VAR_23] & ~(VAR_7 - 1));

  for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++) {
   VAR_19 = VAR_18 + ((VAR_24 + VAR_23) & (VAR_4 - 1));

   if (VAR_26++ == VAR_16) {
    if (VAR_16 == VAR_27 || VAR_22 != ((void*)0)) {
     VAR_20 = VAR_0;
     goto leave;
    }





    VAR_16 = VAR_27;
   }

   VAR_20 = FUNC_3(VAR_19);
   if (VAR_20 == VAR_0)
    goto leave;

   if (VAR_20 == VAR_6) {
    if (VAR_22 == ((void*)0)) {
     VAR_22 = VAR_19;
     *VAR_11 = VAR_26;

     if (VAR_17 == VAR_5) {
      VAR_20 = VAR_0;
      goto leave;
     }
    }

    continue;
   }
   if (VAR_20 == VAR_21)
    goto leave;

   if (VAR_9->compare == ((void*)0))
    continue;

   if (VAR_9->compare(VAR_20, VAR_14) == 1)
    goto leave;
  }

  VAR_23 = FUNC_2(VAR_10, VAR_23, VAR_13, VAR_25++, VAR_26);
 }

leave:
 if (VAR_26 > VAR_16) {
  VAR_19 = ((void*)0);
 } else {
  *VAR_15 = VAR_20;
 }

 if (VAR_22 == ((void*)0))
  *VAR_11 = VAR_26;

 *VAR_12 = VAR_22;
 return VAR_19;
}
