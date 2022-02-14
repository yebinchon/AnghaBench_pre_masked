
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct umcs7840_softc {int dummy; } ;
struct ucom_softc {size_t sc_portno; struct umcs7840_softc* sc_parent; } ;
struct TYPE_2__ {int reg_control; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct umcs7840_softc*,int ,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct umcs7840_softc*,size_t,int ,int ) ;
 scalar_t__ FUNC_3 (struct umcs7840_softc*,int ,int ) ;
 int FUNC_4 (struct ucom_softc*) ;
 int FUNC_5 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ucom_softc *VAR_4)
{
 struct umcs7840_softc *VAR_5 = VAR_4->sc_parent;
 uint16_t VAR_6 = VAR_4->sc_portno;
 uint8_t VAR_7;

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

 FUNC_2(VAR_5, VAR_6, VAR_2, 0);
 FUNC_2(VAR_5, VAR_6, VAR_1, 0);


 if (FUNC_1(VAR_5, VAR_3[VAR_6].reg_control, &VAR_7))
  return;
 VAR_7 |= VAR_0;
 if (FUNC_3(VAR_5, VAR_3[VAR_6].reg_control, VAR_7))
  return;
 FUNC_0("Port %d has been closed\n", VAR_6);
}
