
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * t_Handle ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {int sc_dev; int sc_rx_fqid; int * sc_rx_fqr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct dtsec_softc*) ;
 int * FUNC_2 (int,int ,int ,int,int ,int,int,int,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,struct dtsec_softc*) ;

int
FUNC_5(struct dtsec_softc *VAR_5)
{
 t_Error VAR_6;
 t_Handle VAR_7;


 VAR_7 = FUNC_2(1, VAR_0, VAR_1,
     0, 0, 0, 0, 1, 0, 0, 0, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_5->sc_dev, "could not create default RX queue"
      "\n");
  return (VAR_2);
 }

 VAR_5->sc_rx_fqr = VAR_7;
 VAR_5->sc_rx_fqid = FUNC_3(VAR_7);

 VAR_6 = FUNC_4(VAR_7, VAR_4, VAR_5);
 if (VAR_6 != VAR_3) {
  FUNC_0(VAR_5->sc_dev, "could not register RX callback\n");
  FUNC_1(VAR_5);
  return (VAR_2);
 }

 return (0);
}
