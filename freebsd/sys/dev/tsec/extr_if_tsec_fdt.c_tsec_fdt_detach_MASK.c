
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int ic_lock; int transmit_lock; int receive_lock; scalar_t__ sc_rres; int sc_rrid; int sc_error_irid; int sc_error_ihand; int sc_error_ires; int sc_receive_irid; int sc_receive_ihand; int sc_receive_ires; int sc_transmit_irid; int sc_transmit_ihand; int sc_transmit_ires; int tsec_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 struct tsec_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tsec_softc*) ;
 int FUNC_6 (struct tsec_softc*,int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct tsec_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);


 FUNC_1(&VAR_2->tsec_callout);


 FUNC_6(VAR_2, VAR_2->sc_transmit_ires, VAR_2->sc_transmit_ihand,
     VAR_2->sc_transmit_irid, "TX");
 FUNC_6(VAR_2, VAR_2->sc_receive_ires, VAR_2->sc_receive_ihand,
     VAR_2->sc_receive_irid, "RX");
 FUNC_6(VAR_2, VAR_2->sc_error_ires, VAR_2->sc_error_ihand,
     VAR_2->sc_error_irid, "ERR");


 FUNC_5(VAR_2);


 if (VAR_2->sc_rres) {
  VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2->sc_rrid,
      VAR_2->sc_rres);
  if (VAR_3)
   FUNC_3(VAR_1, "bus_release_resource() failed for"
       " IO memory, error %d\n", VAR_3);
 }


 FUNC_4(&VAR_2->receive_lock);
 FUNC_4(&VAR_2->transmit_lock);
 FUNC_4(&VAR_2->ic_lock);
 return (0);
}
