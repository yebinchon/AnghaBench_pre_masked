
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_plx_softc {scalar_t__ link; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*,int) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint64_t
FUNC_2(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_1, VAR_1->link ? 0xc5c : 0xc4c));
}
