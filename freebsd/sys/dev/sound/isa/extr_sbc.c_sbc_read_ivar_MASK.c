
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {uintptr_t func; } ;
struct sbc_softc {uintptr_t bd_ver; } ;
typedef int device_t ;


 int VAR_0 ;
 struct sndcard_func* FUNC_0 (int ) ;
 struct sbc_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t * VAR_4)
{
 struct sbc_softc *VAR_5 = FUNC_1(VAR_1);
 struct sndcard_func *VAR_6 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 0:
  *VAR_4 = VAR_6->func;
  break;

 case 1:
  *VAR_4 = VAR_5->bd_ver;
        break;

 default:
  return VAR_0;
 }

 return 0;
}
