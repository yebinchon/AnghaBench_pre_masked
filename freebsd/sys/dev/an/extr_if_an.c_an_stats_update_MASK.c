
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_4__ {int an_len; int an_type; } ;
struct TYPE_3__ {int an_len; int an_opmode; int an_type; } ;
struct an_softc {scalar_t__ an_timer; int an_associated; int an_stat_ch; TYPE_2__ an_stats; TYPE_1__ an_status; struct ifnet* an_ifp; } ;
struct an_ltv_status {int dummy; } ;
struct an_ltv_stats {int dummy; } ;
struct an_ltv_gen {int dummy; } ;


 int FUNC_0 (struct an_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_2 (struct an_softc*) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct an_softc*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct an_softc *VAR_6;
 struct ifnet *VAR_7;

 VAR_6 = VAR_5;
 FUNC_0(VAR_6);
 VAR_7 = VAR_6->an_ifp;
 if (VAR_6->an_timer > 0 && --VAR_6->an_timer == 0)
  FUNC_2(VAR_6);

 VAR_6->an_status.an_type = VAR_1;
 VAR_6->an_status.an_len = sizeof(struct an_ltv_status);
 if (FUNC_1(VAR_6, (struct an_ltv_gen *)&VAR_6->an_status))
  return;

 if (VAR_6->an_status.an_opmode & VAR_2)
  VAR_6->an_associated = 1;
 else
  VAR_6->an_associated = 0;


 if (VAR_7->if_drv_flags & VAR_3) {
  FUNC_3(&VAR_6->an_stat_ch, VAR_4, FUNC_4, VAR_6);
  return;
 }

 VAR_6->an_stats.an_len = sizeof(struct an_ltv_stats);
 VAR_6->an_stats.an_type = VAR_0;
 if (FUNC_1(VAR_6, (struct an_ltv_gen *)&VAR_6->an_stats.an_len))
  return;

 FUNC_3(&VAR_6->an_stat_ch, VAR_4, FUNC_4, VAR_6);

 return;
}
