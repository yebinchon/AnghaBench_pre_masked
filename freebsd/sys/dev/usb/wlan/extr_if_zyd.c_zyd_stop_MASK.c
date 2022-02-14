
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zyd_softc {int sc_flags; int * sc_xfer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zyd_softc*) ;
 int FUNC_1 (struct zyd_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct zyd_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct zyd_softc*) ;
 int FUNC_5 (struct zyd_softc*,int ) ;
 int FUNC_6 (struct zyd_softc*) ;
 int FUNC_7 (struct zyd_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct zyd_softc *VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_7, VAR_0);

 VAR_7->sc_flags &= ~VAR_5;
 FUNC_4(VAR_7);




 FUNC_2(VAR_7);
 FUNC_3(VAR_7->sc_xfer[VAR_2]);
 FUNC_3(VAR_7->sc_xfer[VAR_1]);
 FUNC_0(VAR_7);

 FUNC_6(VAR_7);


 if (!(VAR_7->sc_flags & VAR_4))
  return;


 VAR_8 = FUNC_5(VAR_7, 0);
 if (VAR_8 != 0)
  goto fail;

 FUNC_7(VAR_7, VAR_6, 0);

 FUNC_7(VAR_7, VAR_3, 0);

fail:
 return;
}
