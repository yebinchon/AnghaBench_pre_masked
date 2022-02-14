
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ntb_plx_softc {int split; scalar_t__ b2b_mw; scalar_t__ b2b_off; scalar_t__ mw_count; } ;
typedef int device_t ;


 struct ntb_plx_softc* FUNC_0 (int ) ;

__attribute__((used)) static uint8_t
FUNC_1(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_0(VAR_0);
 uint8_t VAR_2;

 VAR_2 = VAR_1->mw_count;
 VAR_2 += (1 << VAR_1->split) - 1;
 if (VAR_1->b2b_mw >= 0 && VAR_1->b2b_off == 0)
  VAR_2--;
 return (VAR_2);
}
