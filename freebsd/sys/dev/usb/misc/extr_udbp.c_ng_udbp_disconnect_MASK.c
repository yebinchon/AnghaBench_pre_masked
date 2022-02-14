
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udbp_softc {int sc_mtx; int * sc_hook; int * sc_bulk_in_buffer; int sc_xmitq_hipri; int sc_xmitq; int * sc_xfer; } ;
typedef int * hook_p ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct udbp_softc* FUNC_4 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(hook_p VAR_5)
{
 struct udbp_softc *VAR_6 = FUNC_4(FUNC_1(VAR_5));
 int VAR_7 = 0;

 if (VAR_6 != ((void*)0)) {

  FUNC_6(&VAR_6->sc_mtx);

  if (VAR_5 != VAR_6->sc_hook) {
   VAR_7 = VAR_0;
  } else {


   FUNC_9(VAR_6->sc_xfer[VAR_2]);
   FUNC_9(VAR_6->sc_xfer[VAR_1]);


   FUNC_9(VAR_6->sc_xfer[VAR_4]);
   FUNC_9(VAR_6->sc_xfer[VAR_3]);


   FUNC_0(&VAR_6->sc_xmitq);
   FUNC_0(&VAR_6->sc_xmitq_hipri);

   if (VAR_6->sc_bulk_in_buffer) {
    FUNC_5(VAR_6->sc_bulk_in_buffer);
    VAR_6->sc_bulk_in_buffer = ((void*)0);
   }
   VAR_6->sc_hook = ((void*)0);
  }

  FUNC_7(&VAR_6->sc_mtx);
 }
 if ((FUNC_3(FUNC_1(VAR_5)) == 0)
     && (FUNC_2(FUNC_1(VAR_5))))
  FUNC_8(FUNC_1(VAR_5));

 return (VAR_7);
}
