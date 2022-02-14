
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct umcs7840_softc {int sc_numports; int sc_intr_xfer; TYPE_2__* sc_ucom; TYPE_1__* sc_ports; int sc_super_ucom; } ;
typedef int device_t ;
struct TYPE_4__ {size_t sc_portno; } ;
struct TYPE_3__ {int * sc_xfer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct umcs7840_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (struct umcs7840_softc*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct umcs7840_softc *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_2(&VAR_2->sc_super_ucom, VAR_2->sc_ucom);

 for (VAR_3 = 0; VAR_3 < VAR_2->sc_numports; ++VAR_3)
  FUNC_4(VAR_2->sc_ports[VAR_2->sc_ucom[VAR_3].sc_portno].sc_xfer, VAR_0);
 FUNC_4(&VAR_2->sc_intr_xfer, 1);

 FUNC_0(VAR_1);

 FUNC_3(VAR_2);

 return (0);
}
