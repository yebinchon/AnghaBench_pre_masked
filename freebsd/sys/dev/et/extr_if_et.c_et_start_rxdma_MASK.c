
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct et_softc {int ifp; TYPE_1__* sc_rx_data; } ;
struct TYPE_2__ {int rbd_bufsize; } ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct et_softc *VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = (VAR_7->sc_rx_data[0].rbd_bufsize & VAR_4) |
     VAR_3;
 VAR_8 |= (VAR_7->sc_rx_data[1].rbd_bufsize & VAR_6) |
     VAR_5;

 FUNC_1(VAR_7, VAR_1, VAR_8);

 FUNC_2(5);

 if (FUNC_0(VAR_7, VAR_1) & VAR_2) {
  FUNC_3(VAR_7->ifp, "can't start RX DMA engine\n");
  return (VAR_0);
 }
 return (0);
}
