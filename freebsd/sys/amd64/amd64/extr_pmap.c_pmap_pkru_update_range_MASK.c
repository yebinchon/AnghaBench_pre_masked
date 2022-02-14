
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ u_int ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_7__ {scalar_t__ pm_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int* FUNC_5 (int*,int) ;
 int* FUNC_6 (int*,int) ;
 int* FUNC_7 (TYPE_1__*,int) ;
 int* FUNC_8 (int*,int) ;

__attribute__((used)) static void
FUNC_9(pmap_t VAR_13, vm_offset_t VAR_14, vm_offset_t VAR_15,
    u_int VAR_16)
{
 pml4_entry_t *VAR_17;
 pdp_entry_t *VAR_18;
 pd_entry_t VAR_19, VAR_20, *VAR_21;
 pt_entry_t VAR_22, *VAR_23, VAR_24;
 vm_offset_t VAR_25, VAR_26;
 bool VAR_27;

 FUNC_1(VAR_13, VAR_0);
 FUNC_0(VAR_13->pm_type == VAR_10);
 FUNC_0(VAR_16 <= VAR_8);

 for (VAR_27 = 0, VAR_25 = VAR_14; VAR_25 < VAR_15; VAR_25 = VAR_26) {
  VAR_17 = FUNC_7(VAR_13, VAR_25);
  if ((*VAR_17 & VAR_12) == 0) {
   VAR_26 = (VAR_25 + VAR_3) & ~VAR_9;
   if (VAR_26 < VAR_25)
    VAR_26 = VAR_15;
   continue;
  }

  VAR_18 = FUNC_8(VAR_17, VAR_25);
  if ((*VAR_18 & VAR_12) == 0) {
   VAR_26 = (VAR_25 + VAR_1) & ~VAR_5;
   if (VAR_26 < VAR_25)
    VAR_26 = VAR_15;
   continue;
  }

  VAR_26 = (VAR_25 + VAR_2) & ~VAR_6;
  if (VAR_26 < VAR_25)
   VAR_26 = VAR_15;

  VAR_21 = FUNC_6(VAR_18, VAR_25);
  VAR_20 = *VAR_21;
  if (VAR_20 == 0)
   continue;

  FUNC_0((VAR_20 & VAR_12) != 0);
  if ((VAR_20 & VAR_7) != 0) {
   if (VAR_25 + VAR_2 == VAR_26 && VAR_15 >= VAR_26) {
    VAR_19 = (VAR_20 & ~VAR_11) |
        FUNC_2(VAR_16);
    if (VAR_19 != VAR_20) {
     *VAR_21 = VAR_19;
     VAR_27 = 1;
    }
    continue;
   } else if (!FUNC_3(VAR_13, VAR_21, VAR_25)) {
    continue;
   }
  }

  if (VAR_26 > VAR_15)
   VAR_26 = VAR_15;

  for (VAR_23 = FUNC_5(VAR_21, VAR_25); VAR_25 != VAR_26;
      VAR_23++, VAR_25 += VAR_4) {
   VAR_24 = *VAR_23;
   if ((VAR_24 & VAR_12) == 0)
    continue;
   VAR_22 = (VAR_24 & ~VAR_11) | FUNC_2(VAR_16);
   if (VAR_22 != VAR_24) {
    *VAR_23 = VAR_22;
    VAR_27 = 1;
   }
  }
 }
 if (VAR_27)
  FUNC_4(VAR_13, VAR_14, VAR_15);
}
