
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct l2_bucket {int* l2b_kva; } ;
struct l1_ttable {int dummy; } ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int,int,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 size_t FUNC_3 (scalar_t__) ;
 struct l1_ttable* FUNC_4 (int,int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 struct l2_bucket* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct l1_ttable*,int *) ;
 int FUNC_8 (char*,int) ;
 int VAR_8 ;

void
FUNC_9(void)
{
 struct l2_bucket *VAR_9;
 struct l1_ttable *VAR_10;
 pd_entry_t *VAR_11;
 pt_entry_t *VAR_12, VAR_13;
 vm_offset_t VAR_14, VAR_15;
 u_int VAR_16, VAR_17;

 VAR_17 = (VAR_7 / VAR_5) + ((VAR_7 % VAR_5) ? 1 : 0);
 VAR_17 -= 1;
 VAR_10 = FUNC_4(sizeof(*VAR_10) * VAR_17, VAR_2, VAR_3);

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_10++) {

  VAR_14 = (vm_offset_t)FUNC_1(VAR_0, VAR_2, 0, 0x0,
      0xffffffff, VAR_0, 0);

  if (VAR_14 == 0)
   FUNC_5("Cannot allocate L1 KVM");

  VAR_15 = VAR_14 + VAR_0;
  VAR_11 = (pd_entry_t *)VAR_14;

  while (VAR_14 < VAR_15) {
    VAR_9 = FUNC_6(VAR_6, VAR_14);
    VAR_12 = &VAR_9->l2b_kva[FUNC_3(VAR_14)];
    VAR_13 = *VAR_12;
    VAR_13 = (VAR_13 & ~VAR_1) | VAR_8;
    *VAR_12 = VAR_13;
    FUNC_0(VAR_12);
    FUNC_2(VAR_14);

    VAR_14 += VAR_4;
  }
  FUNC_7(VAR_10, VAR_11);
 }






}
