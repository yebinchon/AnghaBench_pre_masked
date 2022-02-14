
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct umcs7840_softc {TYPE_1__* sc_ports; } ;
struct ucom_softc {size_t sc_portno; struct umcs7840_softc* sc_parent; } ;
struct TYPE_2__ {int sc_lcr; } ;


 int FUNC_0 (char*,size_t,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct umcs7840_softc*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_2, uint8_t VAR_3)
{
 struct umcs7840_softc *VAR_4 = VAR_2->sc_parent;
 uint8_t VAR_5 = VAR_2->sc_portno;

 if (VAR_3)
  VAR_4->sc_ports[VAR_5].sc_lcr |= VAR_0;
 else
  VAR_4->sc_ports[VAR_5].sc_lcr &= ~VAR_0;

 FUNC_1(VAR_4, VAR_5, VAR_1, VAR_4->sc_ports[VAR_5].sc_lcr);
 FUNC_0("Port %d BREAK set to: %s\n", VAR_5, VAR_3 ? "on" : "off");
}
