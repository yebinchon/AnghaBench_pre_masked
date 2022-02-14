
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpssas_softc {int flags; int discovery_callout; struct mps_softc* sc; } ;
struct mps_softc {int device_check_callout; scalar_t__ track_mapping_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct mps_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ,struct mps_softc*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct mps_softc*,int,char*) ;
 int VAR_5 ;

void
FUNC_4(struct mpssas_softc *VAR_6)
{
 struct mps_softc *VAR_7 = VAR_6->sc;

 FUNC_0(VAR_7);

 if (VAR_6->flags & VAR_0)
  FUNC_2(&VAR_6->discovery_callout);
 if (VAR_7->track_mapping_events) {
  FUNC_3(VAR_7, VAR_3 | VAR_1, "Discovery has "
      "completed. Check for missing devices in the mapping "
      "table.\n");
  FUNC_1(&VAR_7->device_check_callout,
      VAR_2 * VAR_4, VAR_5,
      VAR_7);
 }
}
