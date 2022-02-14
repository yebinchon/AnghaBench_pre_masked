
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbphy_softc {int xcvr_setup_use_fuses; int xcvr_setup; int hsdiscon_level; int hssquelch_level; int xcvr_hsslew; int xcvr_lsrslew; int xcvr_lsfslew; int term_range_adj; int idle_wait_delay; int elastic_limit; int hssync_start_delay; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct usbphy_softc *VAR_1, phandle_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, "nvidia,hssync-start-delay",
     &VAR_1->hssync_start_delay, sizeof (VAR_1->hssync_start_delay));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,elastic-limit",
     &VAR_1->elastic_limit, sizeof (VAR_1->elastic_limit));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,idle-wait-delay",
     &VAR_1->idle_wait_delay, sizeof (VAR_1->idle_wait_delay));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,term-range-adj",
     &VAR_1->term_range_adj, sizeof (VAR_1->term_range_adj));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,xcvr-lsfslew",
     &VAR_1->xcvr_lsfslew, sizeof (VAR_1->xcvr_lsfslew));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,xcvr-lsrslew",
     &VAR_1->xcvr_lsrslew, sizeof (VAR_1->xcvr_lsrslew));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,xcvr-hsslew",
     &VAR_1->xcvr_hsslew, sizeof (VAR_1->xcvr_hsslew));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,hssquelch-level",
     &VAR_1->hssquelch_level, sizeof (VAR_1->hssquelch_level));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2, "nvidia,hsdiscon-level",
     &VAR_1->hsdiscon_level, sizeof (VAR_1->hsdiscon_level));
 if (VAR_3 <= 0)
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_2, "nvidia,xcvr-setup-use-fuses");
 if (VAR_3 >= 1) {
  VAR_1->xcvr_setup_use_fuses = 1;
 } else {
  VAR_3 = FUNC_0(VAR_2, "nvidia,xcvr-setup",
      &VAR_1->xcvr_setup, sizeof (VAR_1->xcvr_setup));
  if (VAR_3 <= 0)
   return (VAR_0);
 }

 return (0);
}
