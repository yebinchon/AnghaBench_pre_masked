
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct taskqgroup {int dummy; } ;
struct grouptask {int dummy; } ;
typedef scalar_t__ iflib_intr_type_t ;
typedef TYPE_2__* if_irq_t ;
typedef TYPE_3__* if_ctx_t ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ isc_nrxqsets; } ;
struct TYPE_10__ {int ifc_sysctl_core_offset; int ifc_cpuid_highest; TYPE_1__ ifc_softc_ctx; scalar_t__ ifc_sysctl_separate_txrx; int ifc_dev; } ;
struct TYPE_9__ {int ii_res; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_4 (struct taskqgroup*,struct grouptask*,void*,int,int ,int ,char const*) ;

__attribute__((used)) static inline int
FUNC_5(if_ctx_t VAR_2, if_irq_t VAR_3, iflib_intr_type_t VAR_4,
    int VAR_5, struct grouptask *VAR_6, struct taskqgroup *VAR_7, void *VAR_8,
    const char *VAR_9)
{
 device_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_2->ifc_dev;
 VAR_11 = VAR_2->ifc_sysctl_core_offset;
 if (VAR_2->ifc_sysctl_separate_txrx && VAR_4 == VAR_1)
  VAR_11 += VAR_2->ifc_softc_ctx.isc_nrxqsets;
 VAR_12 = FUNC_2(VAR_2, VAR_5 + VAR_11);
 VAR_14 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (VAR_14 < 0) {
  FUNC_0(VAR_10, "get_core_offset failed\n");
  return (VAR_0);
 }
 VAR_12 = FUNC_1(VAR_12, VAR_14);
 VAR_13 = FUNC_4(VAR_7, VAR_6, VAR_8, VAR_12, VAR_10, VAR_3->ii_res,
     VAR_9);
 if (VAR_13) {
  FUNC_0(VAR_10, "taskqgroup_attach_cpu failed %d\n", VAR_13);
  return (VAR_13);
 }




 return (0);
}
