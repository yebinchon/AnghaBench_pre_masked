
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct amd_ntb_softc {TYPE_1__* hw_info; } ;
typedef int device_t ;
struct TYPE_2__ {int mw_count; } ;


 struct amd_ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static uint8_t
FUNC_1(device_t VAR_0)
{
 struct amd_ntb_softc *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->hw_info->mw_count);
}
