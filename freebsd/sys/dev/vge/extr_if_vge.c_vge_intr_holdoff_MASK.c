
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct vge_softc {scalar_t__ vge_tx_coal_pkt; scalar_t__ vge_rx_coal_pkt; scalar_t__ vge_int_holdoff; } ;


 scalar_t__ FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vge_softc*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_4(struct vge_softc *VAR_15)
{
 uint8_t VAR_16;

 FUNC_3(VAR_15);
 FUNC_1(VAR_15, VAR_0, VAR_12);
 FUNC_1(VAR_15, VAR_14, VAR_15->vge_tx_coal_pkt);


 FUNC_1(VAR_15, VAR_0, VAR_11);
 FUNC_1(VAR_15, VAR_13, VAR_15->vge_rx_coal_pkt);

 VAR_16 = FUNC_0(VAR_15, VAR_4);
 VAR_16 &= ~VAR_7;
 VAR_16 |= VAR_5;
 if (VAR_15->vge_tx_coal_pkt <= 0)
  VAR_16 |= VAR_8;
 else
  VAR_16 &= ~VAR_8;
 if (VAR_15->vge_rx_coal_pkt <= 0)
  VAR_16 |= VAR_6;
 else
  VAR_16 &= ~VAR_6;
 FUNC_1(VAR_15, VAR_4, VAR_16);
 FUNC_1(VAR_15, VAR_2, VAR_1);
 if (VAR_15->vge_int_holdoff > 0) {

  FUNC_1(VAR_15, VAR_0, VAR_10);
  FUNC_1(VAR_15, VAR_9,
      FUNC_2(VAR_15->vge_int_holdoff));

  FUNC_1(VAR_15, VAR_3, VAR_1);
 }
}
