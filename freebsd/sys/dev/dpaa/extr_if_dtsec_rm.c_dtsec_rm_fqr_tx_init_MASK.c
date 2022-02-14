
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * t_Handle ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {int sc_dev; int sc_tx_conf_fqid; int * sc_tx_conf_fqr; int * sc_tx_fqr; int sc_port_tx_qman_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct dtsec_softc*) ;
 int * FUNC_2 (int,int ,int ,int,int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,struct dtsec_softc*) ;

int
FUNC_5(struct dtsec_softc *VAR_6)
{
 t_Error VAR_7;
 t_Handle VAR_8;


 VAR_8 = FUNC_2(1, VAR_6->sc_port_tx_qman_chan,
     VAR_2, 0, 0, 0, 0, 1, 0, 0, 0, 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6->sc_dev, "could not create default TX queue"
      "\n");
  return (VAR_3);
 }

 VAR_6->sc_tx_fqr = VAR_8;


 VAR_8 = FUNC_2(1, VAR_0,
     VAR_1, 0, 0, 0, 0, 1, 0, 0, 0,
     0);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6->sc_dev, "could not create TX confirmation "
      "queue\n");
  FUNC_1(VAR_6);
  return (VAR_3);
 }

 VAR_6->sc_tx_conf_fqr = VAR_8;
 VAR_6->sc_tx_conf_fqid = FUNC_3(VAR_8);

 VAR_7 = FUNC_4(VAR_8, VAR_5, VAR_6);
 if (VAR_7 != VAR_4) {
  FUNC_0(VAR_6->sc_dev, "could not register TX confirmation "
      "callback\n");
  FUNC_1(VAR_6);
  return (VAR_3);
 }

 return (0);
}
