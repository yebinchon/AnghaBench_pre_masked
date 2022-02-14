
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ntb_plx_softc {scalar_t__ spad_count2; scalar_t__ spad_count1; } ;
typedef int device_t ;


 struct ntb_plx_softc* FUNC_0 (int ) ;

__attribute__((used)) static uint8_t
FUNC_1(device_t VAR_0)
{
 struct ntb_plx_softc *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->spad_count1 + VAR_1->spad_count2);
}
