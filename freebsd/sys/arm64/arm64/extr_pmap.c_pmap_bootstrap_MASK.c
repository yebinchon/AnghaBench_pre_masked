
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef size_t u_int ;
typedef scalar_t__ pt_entry_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int pm_cookie; scalar_t__ pm_l0_paddr; } ;
struct TYPE_4__ {int * pm_l0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (void*,int ) ;
 TYPE_2__* VAR_17 ;
 TYPE_1__ VAR_18 ;
 scalar_t__ VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__* VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* FUNC_13 (scalar_t__,scalar_t__,size_t*,size_t*) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 void* VAR_24 ;
 int FUNC_15 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_16 (int ) ;
 void* FUNC_17 (scalar_t__,scalar_t__) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;

void
FUNC_18(vm_offset_t VAR_28, vm_offset_t VAR_29, vm_paddr_t VAR_30,
    vm_size_t VAR_31)
{
 u_int VAR_32, VAR_33;
 pt_entry_t *VAR_34;
 vm_offset_t VAR_35, VAR_36;
 vm_offset_t VAR_37, VAR_38;
 vm_paddr_t VAR_39, VAR_40, VAR_41;
 uint64_t VAR_42;
 int VAR_43;


 FUNC_1((FUNC_3(VAR_25) & VAR_15) == 0,
     ("pmap_bootstrap: TCR_EL1.A1 != 0"));

 VAR_42 = VAR_5 - VAR_30;

 FUNC_15("pmap_bootstrap %lx %lx %lx\n", VAR_29, VAR_30, VAR_31);
 FUNC_15("%lx\n", VAR_29);
 FUNC_15("%lx\n", (VAR_5 >> VAR_6) & VAR_10);


 VAR_18.pm_l0 = (pd_entry_t *)VAR_28;
 FUNC_2(VAR_17);
 VAR_17->pm_l0_paddr = VAR_28 - VAR_42;
 VAR_17->pm_cookie = FUNC_0(-1, VAR_4);


 VAR_41 = VAR_5 - VAR_42;

 VAR_23 = FUNC_5(VAR_22, FUNC_9(VAR_22));
 VAR_23 /= 2;





 for (VAR_43 = 0; VAR_43 < (VAR_23 * 2); VAR_43 += 2) {
  if (VAR_22[VAR_43] == VAR_22[VAR_43 + 1])
   continue;
  if (VAR_22[VAR_43] <= VAR_41)
   VAR_41 = VAR_22[VAR_43];
 }

 VAR_36 = VAR_5 + VAR_31;
 VAR_36 = FUNC_17(VAR_36, VAR_12);


 VAR_36 = FUNC_10(VAR_29, VAR_41, VAR_36);

 VAR_35 = VAR_5;
 VAR_39 = VAR_40 = VAR_5 - VAR_42;






 VAR_34 = FUNC_13(VAR_29, VAR_5, &VAR_32, &VAR_33);


 FUNC_1(VAR_33 == 0, ("The L2 index is non-zero"));


 for (; VAR_33 < VAR_11; VAR_33++) {
  if ((VAR_34[VAR_33] & VAR_0) == 0)
   break;


  FUNC_1((VAR_34[VAR_33] & VAR_0) == VAR_8,
      ("Invalid bootstrap L2 table"));
  FUNC_1((VAR_34[VAR_33] & ~VAR_1) == VAR_40,
      ("Incorrect PA in L2 table"));

  VAR_35 += VAR_9;
  VAR_40 += VAR_9;
 }

 VAR_35 = FUNC_17(VAR_35, VAR_7);


 VAR_36 = FUNC_11(VAR_29, VAR_35, VAR_36);

 VAR_36 = FUNC_12(VAR_29,
     VAR_16 - (VAR_13), VAR_36);

 FUNC_7();







 (VAR_37) = VAR_36; VAR_36 += (VAR_2 / VAR_12 * VAR_12); memset((char *)(VAR_37), 0, ((VAR_2 / VAR_12) * VAR_12));;
 FUNC_8((void *)VAR_37, 0);


 (VAR_38) = VAR_36; VAR_36 += (FUNC_16(VAR_21) / VAR_12 * VAR_12); FUNC_0((char *)(VAR_38), 0, ((FUNC_16(VAR_21) / VAR_12) * VAR_12));;
 VAR_20 = (void *)VAR_38;


 VAR_24 = FUNC_17(VAR_36, VAR_9);

 VAR_26 = VAR_24 + VAR_14;
 VAR_26 = FUNC_17(VAR_26, VAR_7);
 VAR_27 = VAR_16 - (VAR_13);
 VAR_19 = VAR_26;

 VAR_40 = FUNC_14(VAR_29, VAR_36);

 FUNC_6(VAR_39, VAR_40 - VAR_39, VAR_3);

 FUNC_7();
}
