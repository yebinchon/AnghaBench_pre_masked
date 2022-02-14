
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int sc_mtx; int * sc_if_xfer; int sc_if_sync_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usie_softc*,int ,int ) ;
 int FUNC_5 (struct usie_softc*,int ) ;

__attribute__((used)) static void
FUNC_6(struct usie_softc *VAR_6)
{
 FUNC_2(&VAR_6->sc_if_sync_ch);

 FUNC_0(&VAR_6->sc_mtx);


 FUNC_4(VAR_6, VAR_0, VAR_1);

 FUNC_3(VAR_6->sc_if_xfer[VAR_5]);
 FUNC_3(VAR_6->sc_if_xfer[VAR_3]);
 FUNC_3(VAR_6->sc_if_xfer[VAR_4]);


 FUNC_5(VAR_6, VAR_2);

 FUNC_1(&VAR_6->sc_mtx);
}
