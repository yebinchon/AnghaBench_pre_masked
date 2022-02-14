
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {scalar_t__ link; } ;
typedef int device_t ;


 struct ntb_plx_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->link ? 1 : 0);
}
