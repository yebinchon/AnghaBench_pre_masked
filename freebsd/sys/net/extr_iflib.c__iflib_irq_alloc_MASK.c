
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef TYPE_1__* if_irq_t ;
typedef TYPE_2__* if_ctx_t ;
typedef int * driver_intr_t ;
typedef int * driver_filter_t ;
typedef int device_t ;
struct TYPE_6__ {int ifc_flags; int ifc_dev; } ;
struct TYPE_5__ {void* ii_tag; struct resource* ii_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,struct resource*,void*,char*,char const*) ;
 int FUNC_4 (int ,struct resource*,int,int *,int *,void*,void**) ;
 int FUNC_5 (int ,char*,int,char const*,...) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_7, if_irq_t VAR_8, int VAR_9,
   driver_filter_t VAR_10, driver_intr_t VAR_11, void *VAR_12,
   const char *VAR_13)
{
 struct resource *VAR_14;
 void *VAR_15 = ((void*)0);
 device_t VAR_16 = VAR_7->ifc_dev;
 int VAR_17, VAR_18, VAR_19;

 VAR_17 = VAR_4;
 if (VAR_7->ifc_flags & VAR_1)
  VAR_17 |= VAR_5;
 FUNC_1(VAR_9 < 512);
 VAR_18 = VAR_9;
 VAR_14 = FUNC_2(VAR_16, VAR_6, &VAR_18, VAR_17);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_16,
      "failed to allocate IRQ for rid %d, name %s.\n", VAR_9, VAR_13);
  return (VAR_0);
 }
 VAR_8->ii_res = VAR_14;
 FUNC_0(VAR_10 == ((void*)0) || VAR_11 == ((void*)0), ("filter and handler can't both be non-NULL"));
 VAR_19 = FUNC_4(VAR_16, VAR_14, VAR_2 | VAR_3,
      VAR_10, VAR_11, VAR_12, &VAR_15);
 if (VAR_19 != 0) {
  FUNC_5(VAR_16,
      "failed to setup interrupt for rid %d, name %s: %d\n",
       VAR_9, VAR_13 ? VAR_13 : "unknown", VAR_19);
  return (VAR_19);
 } else if (VAR_13)
  FUNC_3(VAR_16, VAR_14, VAR_15, "%s", VAR_13);

 VAR_8->ii_tag = VAR_15;
 return (0);
}
