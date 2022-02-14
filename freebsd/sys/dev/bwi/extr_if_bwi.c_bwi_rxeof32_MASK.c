
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ rdata_txrx_ctrl; } ;
struct bwi_softc {TYPE_1__ sc_rx_rdata; } ;
struct bwi_desc32 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bwi_softc*,scalar_t__) ;
 int FUNC_1 (struct bwi_softc*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct bwi_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_3->sc_rx_rdata.rdata_txrx_ctrl;

 VAR_4 = FUNC_0(VAR_3, VAR_5 + VAR_1);
 VAR_6 = FUNC_2(VAR_4, VAR_2) /
    sizeof(struct bwi_desc32);

 VAR_7 = FUNC_3(VAR_3, VAR_6);
 if (VAR_7 >= 0) {
  FUNC_1(VAR_3, VAR_5 + VAR_0,
       VAR_6 * sizeof(struct bwi_desc32));
 }
 return VAR_7;
}
