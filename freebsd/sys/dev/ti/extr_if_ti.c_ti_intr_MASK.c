
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ti_status_map; int ti_status_tag; } ;
struct ti_softc {TYPE_1__ ti_cdata; struct ifnet* ti_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_softc*,int ) ;
 int FUNC_1 (struct ti_softc*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ti_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ti_softc*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct ti_softc*) ;
 int FUNC_7 (struct ti_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ti_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_6)
{
 struct ti_softc *VAR_7;
 struct ifnet *VAR_8;

 VAR_7 = VAR_6;
 FUNC_3(VAR_7);
 VAR_8 = VAR_7->ti_ifp;


 if (!(FUNC_0(VAR_7, VAR_5) & VAR_4)) {
  FUNC_4(VAR_7);
  return;
 }


 FUNC_1(VAR_7, VAR_3, 1);

 if (VAR_8->if_drv_flags & VAR_2) {
  FUNC_5(VAR_7->ti_cdata.ti_status_tag,
      VAR_7->ti_cdata.ti_status_map, VAR_0);

  FUNC_7(VAR_7);


  FUNC_9(VAR_7);
  FUNC_5(VAR_7->ti_cdata.ti_status_tag,
      VAR_7->ti_cdata.ti_status_map, VAR_1);
 }

 FUNC_6(VAR_7);

 if (VAR_8->if_drv_flags & VAR_2) {

  FUNC_1(VAR_7, VAR_3, 0);
  if (!FUNC_2(&VAR_8->if_snd))
   FUNC_8(VAR_8);
 }

 FUNC_4(VAR_7);
}
