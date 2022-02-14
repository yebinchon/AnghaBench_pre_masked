
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ valid; scalar_t__ ref_count; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__,int*,int,struct rwlock**) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ) ;
 int VAR_18 ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,scalar_t__,int,struct rwlock**) ;
 TYPE_1__* FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,scalar_t__,int*,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,scalar_t__,struct rwlock**) ;
 TYPE_1__* FUNC_25 (int *,int ,int) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static boolean_t
FUNC_27(pmap_t VAR_20, pd_entry_t *VAR_21, vm_offset_t VAR_22,
    struct rwlock **VAR_23)
{
 pd_entry_t VAR_24, VAR_25;
 pt_entry_t *VAR_26, VAR_27;
 pt_entry_t VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 vm_paddr_t VAR_34;
 vm_page_t VAR_35;
 int VAR_36;
 bool VAR_37;

 VAR_28 = FUNC_7(VAR_20);
 VAR_29 = FUNC_12(VAR_20);
 VAR_30 = FUNC_14(VAR_20);
 VAR_32 = FUNC_20(VAR_20);
 VAR_33 = FUNC_23(VAR_20);
 VAR_36 = FUNC_8(VAR_20, 0);
 VAR_31 = FUNC_16(VAR_20);

 FUNC_3(VAR_20, VAR_4);
 VAR_37 = VAR_22 >= VAR_17;
 VAR_25 = *VAR_21;
 FUNC_1((VAR_25 & (VAR_7 | VAR_33)) == (VAR_7 | VAR_33),
     ("pmap_demote_pde: oldpde is missing PG_PS and/or PG_V"));





 if ((VAR_25 & VAR_28) == 0) {
  FUNC_1((VAR_25 & VAR_11) == 0,
      ("pmap_demote_pde: a wired mapping is missing PG_A"));
  FUNC_9(VAR_20, VAR_22, VAR_21, VAR_25, VAR_23);
  return (VAR_2);
 }

 VAR_35 = FUNC_18(VAR_20, VAR_22);
 if (VAR_35 == ((void*)0)) {
  FUNC_1((VAR_25 & VAR_11) == 0,
      ("pmap_demote_pde: page table page for a wired mapping"
      " is missing"));
  FUNC_1(!VAR_37 || (VAR_22 >= VAR_1 &&
      VAR_22 < VAR_0),
      ("pmap_demote_pde: No saved mpte for va %#lx", VAR_22));
  VAR_35 = FUNC_25(((void*)0), FUNC_15(VAR_22),
      (VAR_37 ? VAR_13 : VAR_15) |
      VAR_14 | VAR_16);





  if (VAR_35 == ((void*)0)) {
   FUNC_9(VAR_20, VAR_22, VAR_21, VAR_25, VAR_23);
   return (VAR_2);
  }

  if (!VAR_37) {
   VAR_35->ref_count = VAR_5;
   FUNC_19(VAR_20, 1);
  }
 }
 VAR_34 = FUNC_4(VAR_35);
 VAR_26 = (pt_entry_t *)FUNC_2(VAR_34);
 VAR_24 = VAR_34 | VAR_30 | VAR_28 | (VAR_25 & VAR_10) | VAR_32 | VAR_33;
 FUNC_1((VAR_25 & (VAR_30 | VAR_32)) != VAR_32,
     ("pmap_demote_pde: oldpde is missing PG_M"));
 VAR_27 = VAR_25 & ~VAR_7;
 VAR_27 = FUNC_21(VAR_20, VAR_27);





 if (VAR_35->valid == 0)
  FUNC_11(VAR_26, VAR_27);

 FUNC_10(VAR_26, VAR_27);





 if ((*VAR_26 & VAR_9) != (VAR_27 & VAR_9))
  FUNC_11(VAR_26, VAR_27);
 if ((VAR_25 & VAR_6) != 0)
  FUNC_24(VAR_20, VAR_5 - 1, VAR_23);
 if (VAR_19)
  FUNC_22(VAR_20, VAR_22, VAR_21, VAR_24);
 else
  FUNC_6(VAR_21, VAR_24);




 if (VAR_37)
  FUNC_13(VAR_20, (vm_offset_t)FUNC_26(VAR_22));




 if ((VAR_25 & VAR_6) != 0)
  FUNC_17(VAR_20, VAR_22, VAR_25 & VAR_8, VAR_23);

 FUNC_5(&VAR_18, 1);
 FUNC_0(VAR_3, "pmap_demote_pde: success for va %#lx in pmap %p",
     VAR_22, VAR_20);
 return (VAR_12);
}
