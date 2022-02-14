
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_list_entry {scalar_t__ start; int count; scalar_t__ end; } ;
struct resource_list {int dummy; } ;
struct dpaa_portals_softc {int* sc_rrid; TYPE_1__* sc_dp; scalar_t__ sc_dp_pa; int ** sc_rres; } ;
struct dpaa_portals_devinfo {int di_intr_pol; int di_intr_trig; struct resource_list di_res; } ;
typedef int device_t ;
struct TYPE_2__ {int dp_regs_mapped; int dp_irid; int * dp_ires; scalar_t__ dp_intr_num; int dp_ci_size; scalar_t__ dp_ci_pa; int dp_ce_size; scalar_t__ dp_ce_pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (uintptr_t,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int ,int*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *) ;
 struct dpaa_portals_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 struct resource_list_entry* FUNC_7 (struct resource_list*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__,int ,int ) ;

int
FUNC_10(device_t VAR_7, struct dpaa_portals_devinfo *VAR_8, int VAR_9)
{
 struct dpaa_portals_softc *VAR_10 = FUNC_5(VAR_7);
 struct resource_list_entry *VAR_11;
 int VAR_12;
 struct resource_list *VAR_13;


 if (FUNC_0() != VAR_1)
  return (VAR_0);

 VAR_13 = &VAR_8->di_res;






 if (VAR_10->sc_rres[0] == ((void*)0)) {

  VAR_11 = FUNC_7(VAR_13, VAR_4, 0);
  VAR_10->sc_rrid[0] = 0;
  VAR_10->sc_rres[0] = FUNC_2(VAR_7,
      VAR_4, &VAR_10->sc_rrid[0], VAR_11->start + VAR_10->sc_dp_pa,
      VAR_11->end + VAR_10->sc_dp_pa, VAR_11->count, VAR_2);
  if (VAR_10->sc_rres[0] == ((void*)0)) {
   FUNC_6(VAR_7,
       "Could not allocate cache enabled memory.\n");
   return (VAR_0);
  }
  FUNC_9(FUNC_8(VAR_10->sc_rres[0]),
      VAR_11->start + VAR_10->sc_dp_pa, VAR_11->count, VAR_6);

  VAR_11 = FUNC_7(VAR_13, VAR_4, 1);
  VAR_10->sc_rrid[1] = 1;
  VAR_10->sc_rres[1] = FUNC_2(VAR_7,
      VAR_4, &VAR_10->sc_rrid[1], VAR_11->start + VAR_10->sc_dp_pa,
      VAR_11->end + VAR_10->sc_dp_pa, VAR_11->count, VAR_2);
  if (VAR_10->sc_rres[1] == ((void*)0)) {
   FUNC_6(VAR_7,
       "Could not allocate cache inhibited memory.\n");
   FUNC_4(VAR_7, VAR_4,
       VAR_10->sc_rrid[0], VAR_10->sc_rres[0]);
   return (VAR_0);
  }
  FUNC_9(FUNC_8(VAR_10->sc_rres[1]),
      VAR_11->start + VAR_10->sc_dp_pa, VAR_11->count, VAR_5);
  VAR_10->sc_dp[VAR_9].dp_regs_mapped = 1;
 }

 VAR_11 = FUNC_7(VAR_13, VAR_4, 0);
 VAR_10->sc_dp[VAR_9].dp_ce_pa = VAR_11->start + VAR_10->sc_dp_pa;
 VAR_10->sc_dp[VAR_9].dp_ce_size = VAR_11->count;
 VAR_11 = FUNC_7(VAR_13, VAR_4, 1);
 VAR_10->sc_dp[VAR_9].dp_ci_pa = VAR_11->start + VAR_10->sc_dp_pa;
 VAR_10->sc_dp[VAR_9].dp_ci_size = VAR_11->count;


 VAR_11 = FUNC_7(VAR_13, VAR_3, 0);
 VAR_10->sc_dp[VAR_9].dp_irid = 0;
 VAR_10->sc_dp[VAR_9].dp_ires = FUNC_2(VAR_7,
     VAR_3, &VAR_10->sc_dp[VAR_9].dp_irid, VAR_11->start, VAR_11->end,
     VAR_11->count, VAR_2);

 VAR_10->sc_dp[VAR_9].dp_intr_num = VAR_11->start;

 if (VAR_10->sc_dp[VAR_9].dp_ires == ((void*)0)) {
  FUNC_6(VAR_7, "Could not allocate irq.\n");
  return (VAR_0);
 }

 VAR_12 = FUNC_1((uintptr_t)VAR_10->sc_dp[VAR_9].dp_ires, VAR_9);

 if (VAR_12 != VAR_1) {
  FUNC_6(VAR_7, "Could not prealloc and bind interrupt\n");
  FUNC_4(VAR_7, VAR_3,
      VAR_10->sc_dp[VAR_9].dp_irid, VAR_10->sc_dp[VAR_9].dp_ires);
  VAR_10->sc_dp[VAR_9].dp_ires = ((void*)0);
  return (VAR_0);
 }
 return (0);
}
