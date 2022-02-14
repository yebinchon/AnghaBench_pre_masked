
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tunable ;
struct dtsec_softc {int sc_mode; int sc_dev; int sc_start_locked; int sc_port_tx_init; int sc_port_rx_init; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_4(struct dtsec_softc *VAR_7)
{
 char VAR_8[64];

 FUNC_3(VAR_8, sizeof(VAR_8), "%s.independent_mode",
     FUNC_1(VAR_7->sc_dev));

 VAR_7->sc_mode = VAR_0;
 FUNC_0(VAR_8, &VAR_7->sc_mode);

 if (VAR_7->sc_mode == VAR_0) {
  VAR_7->sc_port_rx_init = VAR_4;
  VAR_7->sc_port_tx_init = VAR_5;
  VAR_7->sc_start_locked = VAR_6;
 } else {
  VAR_7->sc_port_rx_init = VAR_1;
  VAR_7->sc_port_tx_init = VAR_2;
  VAR_7->sc_start_locked = VAR_3;
 }

 FUNC_2(VAR_7->sc_dev, "Configured for %s mode.\n",
     (VAR_7->sc_mode == VAR_0) ? "regular" : "independent");
}
