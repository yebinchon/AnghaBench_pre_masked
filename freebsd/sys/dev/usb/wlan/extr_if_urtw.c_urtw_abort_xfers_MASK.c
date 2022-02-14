
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int sc_flags; int * sc_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urtw_softc*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct urtw_softc *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(VAR_3);

 VAR_5 = (VAR_3->sc_flags & VAR_2) ? VAR_0 :
     VAR_1;


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(VAR_3->sc_xfer[VAR_4]);
}
