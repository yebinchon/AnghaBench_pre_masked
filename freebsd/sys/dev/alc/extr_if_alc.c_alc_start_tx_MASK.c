
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int alc_tx_prod; int alc_tx_ring_map; int alc_tx_ring_tag; } ;
struct alc_softc {int alc_flags; int alc_watchdog_timer; TYPE_1__ alc_cdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct alc_softc*,int ,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_7)
{


 FUNC_2(VAR_7->alc_cdata.alc_tx_ring_tag,
     VAR_7->alc_cdata.alc_tx_ring_map, VAR_4);

 if ((VAR_7->alc_flags & VAR_0) != 0)
  FUNC_0(VAR_7, VAR_1,
      (uint16_t)VAR_7->alc_cdata.alc_tx_prod);
 else
  FUNC_1(VAR_7, VAR_2,
      (VAR_7->alc_cdata.alc_tx_prod <<
      VAR_6) &
      VAR_5);

 VAR_7->alc_watchdog_timer = VAR_3;
}
