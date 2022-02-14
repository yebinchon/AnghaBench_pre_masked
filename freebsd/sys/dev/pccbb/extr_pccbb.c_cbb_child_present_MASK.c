
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cbb_softc {scalar_t__ cardok; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cbb_softc*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2)
{
 struct cbb_softc *VAR_3 = (struct cbb_softc *)FUNC_2(VAR_1);
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 return (FUNC_0(VAR_4) && VAR_3->cardok);
}
