
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct ugensa_softc {size_t sc_nports; TYPE_1__* sc_sub; int sc_ucom; int sc_super_ucom; } ;
typedef int device_t ;
struct TYPE_2__ {int sc_xfer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ugensa_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ugensa_softc*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct ugensa_softc *VAR_2 = FUNC_1(VAR_1);
 uint8_t VAR_3;

 FUNC_2(&VAR_2->sc_super_ucom, VAR_2->sc_ucom);

 for (VAR_3 = 0; VAR_3 < VAR_2->sc_nports; VAR_3++) {
  FUNC_4(VAR_2->sc_sub[VAR_3].sc_xfer, VAR_0);
 }

 FUNC_0(VAR_1);

 FUNC_3(VAR_2);

 return (0);
}
