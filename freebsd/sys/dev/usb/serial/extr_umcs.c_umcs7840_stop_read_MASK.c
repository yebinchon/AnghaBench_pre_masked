
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct umcs7840_softc {TYPE_1__* sc_ports; } ;
struct ucom_softc {size_t sc_portno; struct umcs7840_softc* sc_parent; } ;
struct TYPE_2__ {int * sc_xfer; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ucom_softc *VAR_1)
{
 struct umcs7840_softc *VAR_2 = VAR_1->sc_parent;
 uint8_t VAR_3 = VAR_1->sc_portno;


 FUNC_0(VAR_2->sc_ports[VAR_3].sc_xfer[VAR_0]);
}
