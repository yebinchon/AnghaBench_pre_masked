
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stge_rx_ring_map; int stge_rx_ring_tag; scalar_t__ stge_rx_cons; } ;
struct stge_ring_data {TYPE_2__* stge_rx_ring; } ;
struct stge_softc {TYPE_1__ sc_cdata; struct stge_ring_data sc_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {scalar_t__ rfd_status; int rfd_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stge_softc*) ;
 int FUNC_1 (struct stge_softc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct stge_softc*,int) ;

__attribute__((used)) static int
FUNC_6(struct stge_softc *VAR_5)
{
 struct stge_ring_data *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_5->sc_cdata.stge_rx_cons = 0;
 FUNC_0(VAR_5);

 VAR_6 = &VAR_5->sc_rdata;
 FUNC_3(VAR_6->stge_rx_ring, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_5(VAR_5, VAR_8) != 0)
   return (VAR_2);
  if (VAR_8 == (VAR_3 - 1))
   VAR_7 = FUNC_1(VAR_5, 0);
  else
   VAR_7 = FUNC_1(VAR_5, VAR_8 + 1);
  VAR_6->stge_rx_ring[VAR_8].rfd_next = FUNC_4(VAR_7);
  VAR_6->stge_rx_ring[VAR_8].rfd_status = 0;
 }

 FUNC_2(VAR_5->sc_cdata.stge_rx_ring_tag,
     VAR_5->sc_cdata.stge_rx_ring_map,
     VAR_0 | VAR_1);

 return (0);
}
