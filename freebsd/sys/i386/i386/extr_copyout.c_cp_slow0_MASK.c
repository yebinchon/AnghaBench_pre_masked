
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct pcpu {int pc_copyout_mlock; int pc_copyout_slock; scalar_t__ pc_copyout_saddr; scalar_t__ pc_copyout_maddr; } ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {scalar_t__ td_vslock_sz; int td_pflags; } ;
struct TYPE_4__ {int vm_map; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 struct pcpu* FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,scalar_t__,size_t,int,int *,int) ;
 int FUNC_14 (int *,int) ;

int
FUNC_15(vm_offset_t VAR_8, size_t VAR_9, bool VAR_10,
    void (*VAR_11)(vm_offset_t, void *), void *VAR_12)
{
 struct pcpu *VAR_13;
 vm_page_t VAR_14[2];
 vm_offset_t VAR_15;
 int VAR_16, VAR_17, VAR_18;
 bool VAR_19;

 VAR_18 = FUNC_3(VAR_8 - FUNC_12(VAR_8) + VAR_9, VAR_1);
 FUNC_0(VAR_18 <= FUNC_6(VAR_14));
 VAR_16 = 0;
 VAR_17 = FUNC_13(&VAR_6->p_vmspace->vm_map, VAR_8, VAR_9,
     (VAR_10 ? VAR_5 : VAR_4) | VAR_3,
     VAR_14, FUNC_6(VAR_14));
 if (VAR_17 != VAR_18)
  return (VAR_0);
 FUNC_8();
 VAR_13 = FUNC_2();
 if (!FUNC_1() || VAR_7->td_vslock_sz > 0 ||
     (VAR_7->td_pflags & VAR_2) != 0) {
  VAR_19 = 0;
  FUNC_4(&VAR_13->pc_copyout_mlock);
  VAR_15 = VAR_13->pc_copyout_maddr;
 } else {
  VAR_19 = 1;
  FUNC_10(&VAR_13->pc_copyout_slock);
  VAR_15 = VAR_13->pc_copyout_saddr;
 }
 FUNC_7(VAR_15, VAR_18, VAR_14);
 VAR_15 += VAR_8 - FUNC_12(VAR_8);
 VAR_11(VAR_15, VAR_12);
 FUNC_9();
 if (VAR_19)
  FUNC_11(&VAR_13->pc_copyout_slock);
 else
  FUNC_5(&VAR_13->pc_copyout_mlock);
 FUNC_14(VAR_14, VAR_18);
 return (VAR_16);
}
