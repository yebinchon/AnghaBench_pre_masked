
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_softc {int sc_state; int sc_mutex; int sc_xfer; int sc_fifo; int sc_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atp_softc*) ;
 int FUNC_1 (struct atp_softc*,int ) ;
 int FUNC_2 (int *) ;
 struct atp_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct atp_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_4, VAR_2);

 FUNC_5(&VAR_4->sc_mutex);
 FUNC_2(&VAR_4->sc_callout);
 if (VAR_4->sc_state & VAR_0)
  FUNC_0(VAR_4);
 FUNC_6(&VAR_4->sc_mutex);

 FUNC_7(&VAR_4->sc_fifo);

 FUNC_8(VAR_4->sc_xfer, VAR_1);

 FUNC_4(&VAR_4->sc_mutex);

 return (0);
}
