
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct vmstate {int* l1pt; } ;
typedef int pte ;
typedef int off_t ;
struct TYPE_7__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
typedef int kvaddr_t ;
typedef int arm_pt_entry_t ;
typedef int arm_physaddr_t ;
typedef int arm_pd_entry_t ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int*,int,int) ;

__attribute__((used)) static int
FUNC_10(kvm_t *VAR_12, kvaddr_t VAR_13, off_t *VAR_14)
{
 struct vmstate *VAR_15 = VAR_12->vmst;
 arm_pd_entry_t VAR_16;
 arm_pt_entry_t VAR_17;
 arm_physaddr_t VAR_18;
 off_t VAR_19;

 if (VAR_15->l1pt == ((void*)0))
  return (FUNC_3(VAR_12, VAR_13, VAR_14, VAR_11));
 VAR_16 = FUNC_1(VAR_12, VAR_15->l1pt[FUNC_0(VAR_13)]);
 if (!FUNC_6(VAR_16))
  goto invalid;
 if (FUNC_5(VAR_16)) {

  *VAR_14 = (VAR_16 & VAR_1) + (VAR_13 & VAR_2);
  return (FUNC_3(VAR_12, *VAR_14, VAR_14, VAR_3));
 }
 VAR_18 = (VAR_16 & VAR_0) + FUNC_7(VAR_13) * sizeof(VAR_17);
 FUNC_3(VAR_12, VAR_18, &VAR_19, VAR_3);
 if (FUNC_9(VAR_12->pmfd, &VAR_17, sizeof(VAR_17), VAR_19) != sizeof(VAR_17)) {
  FUNC_4(VAR_12, VAR_12->program, "_arm_kvatop: pread");
  goto invalid;
 }
 VAR_17 = FUNC_1(VAR_12, VAR_17);
 if (!FUNC_8(VAR_17)) {
  goto invalid;
 }
 if ((VAR_17 & VAR_10) == VAR_9) {
  *VAR_14 = (VAR_17 & VAR_4) | (VAR_13 & VAR_5);
  return (FUNC_3(VAR_12, *VAR_14, VAR_14, VAR_6));
 }
 *VAR_14 = (VAR_17 & VAR_7) | (VAR_13 & VAR_8);
 return (FUNC_3(VAR_12, *VAR_14, VAR_14, VAR_11));
invalid:
 FUNC_2(VAR_12, 0, "Invalid address (%jx)", (uintmax_t)VAR_13);
 return 0;
}
