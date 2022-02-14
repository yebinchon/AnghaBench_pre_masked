
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udbp_softc {int * sc_bulk_in_buffer; int sc_xmitq_hipri; int sc_xmitq; int sc_mtx; int sc_xfer; int * sc_node; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 struct udbp_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct udbp_softc *VAR_2 = FUNC_2(VAR_1);



 if (VAR_2->sc_node != ((void*)0)) {
  FUNC_1(VAR_2->sc_node, ((void*)0));
  FUNC_5(VAR_2->sc_node);
  VAR_2->sc_node = ((void*)0);
 }


 FUNC_6(VAR_2->sc_xfer, VAR_0);

 FUNC_4(&VAR_2->sc_mtx);



 FUNC_0(&VAR_2->sc_xmitq);
 FUNC_0(&VAR_2->sc_xmitq_hipri);



 if (VAR_2->sc_bulk_in_buffer) {
  FUNC_3(VAR_2->sc_bulk_in_buffer);
  VAR_2->sc_bulk_in_buffer = ((void*)0);
 }
 return (0);
}
