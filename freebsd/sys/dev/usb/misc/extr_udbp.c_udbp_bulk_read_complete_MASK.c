
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udbp_softc {int sc_mtx; int * sc_xfer; int * sc_hook; int sc_packets_in; struct mbuf* sc_bulk_in_buffer; } ;
struct mbuf {int dummy; } ;
typedef int node_p ;
typedef int hook_p ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct udbp_softc* FUNC_2 (int ) ;
 int FUNC_3 (int,int *,struct mbuf*) ;
 size_t VAR_0 ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(node_p VAR_1, hook_p VAR_2, void *VAR_3, int VAR_4)
{
 struct udbp_softc *VAR_5 = FUNC_2(VAR_1);
 struct mbuf *VAR_6;
 int VAR_7;

 if (VAR_5 == ((void*)0)) {
  return;
 }
 FUNC_5(&VAR_5->sc_mtx);

 VAR_6 = VAR_5->sc_bulk_in_buffer;

 if (VAR_6) {

  VAR_5->sc_bulk_in_buffer = ((void*)0);

  if ((VAR_5->sc_hook == ((void*)0)) ||
      FUNC_1(VAR_5->sc_hook)) {
   FUNC_0("No upstream hook\n");
   goto done;
  }
  VAR_5->sc_packets_in++;

  FUNC_3(VAR_7, VAR_5->sc_hook, VAR_6);

  VAR_6 = ((void*)0);
 }
done:
 if (VAR_6) {
  FUNC_4(VAR_6);
 }


 FUNC_7(VAR_5->sc_xfer[VAR_0]);

 FUNC_6(&VAR_5->sc_mtx);
}
