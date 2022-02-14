
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cbb_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct cbb_softc*,int ) ;
 struct cbb_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_6)
{
 struct cbb_softc *VAR_7 = FUNC_1(VAR_6);
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_4);
 switch (VAR_8 & VAR_5) {
 case 130:
  return VAR_1;
 case 131:
  return VAR_0;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 }
 return 0;
}
