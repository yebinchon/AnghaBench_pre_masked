
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct TYPE_3__ {int intr_status; } ;
struct TYPE_4__ {TYPE_1__ hlt; } ;
struct vm_exit {scalar_t__ exitcode; TYPE_2__ u; } ;
struct vlapic_vtx {int pending_prio; struct pir_desc* pir_desc; } ;
struct vlapic {int vcpuid; int vm; struct LAPIC* apic_page; } ;
struct pir_desc {scalar_t__* pir; int pending; } ;
struct LAPIC {int ppr; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 struct vm_exit* FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vlapic *VAR_2, int *VAR_3)
{
 struct vlapic_vtx *VAR_4;
 struct pir_desc *VAR_5;
 struct LAPIC *VAR_6;
 uint64_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11;





 FUNC_0(VAR_3 == ((void*)0), ("vmx_pending_intr: vecptr must be NULL"));

 VAR_4 = (struct vlapic_vtx *)VAR_2;
 VAR_5 = VAR_4->pir_desc;

 VAR_7 = FUNC_3(&VAR_5->pending);
 if (!VAR_7) {







  struct vm_exit *VAR_12;
  uint8_t VAR_13, VAR_14;

  VAR_12 = FUNC_5(VAR_2->vm, VAR_2->vcpuid);
  FUNC_0(VAR_12->exitcode == VAR_1,
      ("vmx_pending_intr: exitcode not 'HLT'"));
  VAR_13 = VAR_12->u.hlt.intr_status & VAR_0;
  VAR_6 = VAR_2->apic_page;
  VAR_14 = VAR_6->ppr & VAR_0;
  if (VAR_13 > VAR_14) {
   return (1);
  }

  return (0);
 }
 VAR_6 = VAR_2->apic_page;
 VAR_9 = VAR_6->ppr & VAR_0;
 if (VAR_9 == 0)
  return (1);

 FUNC_1(VAR_2->vm, VAR_2->vcpuid, "HLT with non-zero PPR %d",
     VAR_6->ppr);

 VAR_10 = 0;
 for (VAR_11 = 3; VAR_11 >= 0; VAR_11--) {
  VAR_8 = VAR_5->pir[VAR_11];
  if (VAR_8 != 0) {
   VAR_10 = (VAR_11 * 64 + FUNC_4(VAR_8) - 1) & VAR_0;
   break;
  }
 }







 if (VAR_10 <= VAR_9) {
  const u_int VAR_15 = FUNC_2(VAR_10);
  const u_int VAR_16 = VAR_4->pending_prio;

  if (VAR_16 > VAR_15 && (VAR_16 & VAR_15) == 0) {
   VAR_4->pending_prio = VAR_15;
  }
  return (0);
 }
 return (1);
}
