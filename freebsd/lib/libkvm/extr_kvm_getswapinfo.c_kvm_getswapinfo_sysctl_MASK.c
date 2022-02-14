
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xsd ;
typedef int tot ;
typedef scalar_t__ swblk_t ;
typedef int swap_ary ;
struct xswdev {scalar_t__ xsw_version; scalar_t__ xsw_used; int xsw_dev; int xsw_flags; scalar_t__ xsw_nblks; } ;
struct kvm_swap {scalar_t__ ksw_used; scalar_t__ ksw_total; int ksw_devname; int ksw_flags; } ;
struct TYPE_5__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (struct kvm_swap*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,size_t,struct xswdev*,size_t*,int *,int ) ;
 int FUNC_6 (char*,int*,size_t*) ;
 int VAR_5 ;

int
FUNC_7(kvm_t *VAR_6, struct kvm_swap *VAR_7, int VAR_8,
    int VAR_9)
{
 int VAR_10;
 swblk_t VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14[VAR_1];
 struct xswdev VAR_15;
 struct kvm_swap VAR_16;

 if (!FUNC_1(VAR_6, "vm.dmmax", VAR_3))
  return -1;

 VAR_12 = VAR_1 - 1;
 if (FUNC_6("vm.swap_info", VAR_14, &VAR_12) == -1) {
  FUNC_2(VAR_6, VAR_6->program, "sysctlnametomib failed: %s",
      FUNC_4(VAR_4));
  return -1;
 }
 FUNC_3(&VAR_16, sizeof(VAR_16));
 for (VAR_5 = 0;; VAR_5++) {
  VAR_14[VAR_12] = VAR_5;
  VAR_13 = sizeof(VAR_15);
  if (FUNC_5(VAR_14, VAR_12 + 1, &VAR_15, &VAR_13, ((void*)0), 0) == -1) {
   if (VAR_4 == VAR_0)
    break;
   FUNC_2(VAR_6, VAR_6->program, "cannot read sysctl: %s.",
       FUNC_4(VAR_4));
   return -1;
  }
  if (VAR_13 != sizeof(VAR_15)) {
   FUNC_2(VAR_6, VAR_6->program, "struct xswdev has unexpected "
       "size;  kernel and libkvm out of sync?");
   return -1;
  }
  if (VAR_15.xsw_version != VAR_2) {
   FUNC_2(VAR_6, VAR_6->program, "struct xswdev version "
       "mismatch; kernel and libkvm out of sync?");
   return -1;
  }

  VAR_11 = VAR_15.xsw_nblks - VAR_3;
  if (VAR_5 < VAR_8 - 1) {
   FUNC_3(&VAR_7[VAR_5], sizeof(VAR_7[VAR_5]));
   VAR_7[VAR_5].ksw_total = VAR_11;
   VAR_7[VAR_5].ksw_used = VAR_15.xsw_used;
   VAR_7[VAR_5].ksw_flags = VAR_15.xsw_flags;
   FUNC_0(VAR_15.xsw_dev, VAR_7[VAR_5].ksw_devname,
        VAR_9);
  }
  VAR_16.ksw_total += VAR_11;
  VAR_16.ksw_used += VAR_15.xsw_used;
 }

 VAR_10 = VAR_5;
 if (VAR_10 >= VAR_8)
  VAR_10 = VAR_8 - 1;
 if (VAR_10 >= 0)
  VAR_7[VAR_10] = VAR_16;

        return(VAR_10);
}
