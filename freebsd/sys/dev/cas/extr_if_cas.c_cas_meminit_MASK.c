
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cas_softc {scalar_t__ sc_rxdptr; scalar_t__ sc_rxcptr; int * sc_rxcomps; scalar_t__ sc_txwin; scalar_t__ sc_txnext; int sc_txfree; TYPE_1__* sc_txdescs; } ;
struct TYPE_2__ {scalar_t__ cd_buf_ptr; scalar_t__ cd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int) ;
 int FUNC_1 (struct cas_softc*,int,int) ;
 int FUNC_2 (struct cas_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct cas_softc *VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_7, VAR_6);




 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7->sc_txdescs[VAR_8].cd_flags = 0;
  VAR_7->sc_txdescs[VAR_8].cd_buf_ptr = 0;
 }
 VAR_7->sc_txfree = VAR_2;
 VAR_7->sc_txnext = 0;
 VAR_7->sc_txwin = 0;




 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_3(&VAR_7->sc_rxcomps[VAR_8]);
 VAR_7->sc_rxcptr = 0;





 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_1(VAR_7, VAR_8, VAR_8);
 VAR_7->sc_rxdptr = 0;

 FUNC_0(VAR_7, VAR_0 | VAR_1);
}
