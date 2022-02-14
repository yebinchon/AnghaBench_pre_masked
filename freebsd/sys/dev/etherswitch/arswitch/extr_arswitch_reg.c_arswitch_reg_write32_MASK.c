
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct arswitch_softc {scalar_t__ mii_lo_first; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 struct arswitch_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, int VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct arswitch_softc *VAR_4;
 int VAR_5;
 uint16_t VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_0);
 VAR_6 = VAR_3 & 0xffff;
 VAR_7 = (uint16_t) (VAR_3 >> 16);

 if (VAR_4->mii_lo_first) {
  VAR_5 = FUNC_0(FUNC_1(VAR_0),
      VAR_1, VAR_2, VAR_6);
  VAR_5 |= FUNC_0(FUNC_1(VAR_0),
      VAR_1, VAR_2 + 1, VAR_7);
 } else {
  VAR_5 = FUNC_0(FUNC_1(VAR_0),
      VAR_1, VAR_2 + 1, VAR_7);
  VAR_5 |= FUNC_0(FUNC_1(VAR_0),
      VAR_1, VAR_2, VAR_6);
 }

 return VAR_5;
}
