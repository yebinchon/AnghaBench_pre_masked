
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ums_softc {int sc_pollrate; int ** sc_xfer; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct ums_softc *VAR_1)
{
 int VAR_2;


 VAR_2 = VAR_1->sc_pollrate;

 if (VAR_2 > 1000)
  VAR_2 = 1000;

 if ((VAR_2 > 0) && (VAR_1->sc_xfer[VAR_0] != ((void*)0))) {
  FUNC_0("Setting pollrate = %d\n", VAR_2);

  FUNC_2(VAR_1->sc_xfer[VAR_0]);

  FUNC_3(VAR_1->sc_xfer[VAR_0], 1000 / VAR_2);

  VAR_1->sc_pollrate = 0;
 }

 FUNC_1(VAR_1->sc_xfer[VAR_0]);
}
