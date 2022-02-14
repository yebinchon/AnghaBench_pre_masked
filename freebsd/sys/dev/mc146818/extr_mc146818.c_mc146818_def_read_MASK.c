
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mc146818_softc {int sc_bsh; int sc_bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct mc146818_softc* FUNC_2 (int ) ;

u_int
FUNC_3(device_t VAR_2, u_int VAR_3)
{
 struct mc146818_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 FUNC_1(VAR_4->sc_bst, VAR_4->sc_bsh, VAR_0, VAR_3);
 return (FUNC_0(VAR_4->sc_bst, VAR_4->sc_bsh, VAR_1));
}
