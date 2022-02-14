
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_plx_softc {scalar_t__ b2b_mw; scalar_t__ link; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*,int,int ) ;
 int FUNC_1 (struct ntb_plx_softc*,int,int ) ;
 struct ntb_plx_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, uint64_t VAR_1)
{
 struct ntb_plx_softc *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->b2b_mw >= 0)
  FUNC_0(VAR_2, 0xc4c, VAR_1);
 else
  FUNC_1(VAR_2, VAR_2->link ? 0xc4c : 0xc5c, VAR_1);
}
