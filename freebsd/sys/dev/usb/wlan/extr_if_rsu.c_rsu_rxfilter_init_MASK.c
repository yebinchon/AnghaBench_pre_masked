
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rsu_softc {scalar_t__ sc_rx_checksum_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*,int ) ;
 int FUNC_2 (struct rsu_softc*) ;
 int FUNC_3 (struct rsu_softc*) ;
 int FUNC_4 (struct rsu_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct rsu_softc *VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(VAR_4);


 FUNC_3(VAR_4);


 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_2;
 if (VAR_4->sc_rx_checksum_enable)
  VAR_5 |= VAR_3;
 FUNC_4(VAR_4, VAR_0, VAR_5);


 FUNC_2(VAR_4);
}
