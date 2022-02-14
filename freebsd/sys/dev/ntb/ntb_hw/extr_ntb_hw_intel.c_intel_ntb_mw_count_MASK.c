
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ntb_softc {scalar_t__ b2b_mw_idx; scalar_t__ b2b_off; scalar_t__ msix_mw_idx; int mw_count; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static uint8_t
FUNC_1(device_t VAR_1)
{
 struct ntb_softc *VAR_2 = FUNC_0(VAR_1);
 uint8_t VAR_3;

 VAR_3 = VAR_2->mw_count;
 if (VAR_2->b2b_mw_idx != VAR_0 && VAR_2->b2b_off == 0)
  VAR_3--;
 if (VAR_2->msix_mw_idx != VAR_0)
  VAR_3--;
 return (VAR_3);
}
