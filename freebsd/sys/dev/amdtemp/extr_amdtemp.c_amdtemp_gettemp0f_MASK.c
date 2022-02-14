
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdtemp_softc {int sc_flags; int sc_offset; } ;
typedef int int32_t ;
typedef int device_t ;
typedef int amdsensor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;






 struct amdtemp_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int32_t
FUNC_3(device_t VAR_7, amdsensor_t VAR_8)
{
 struct amdtemp_softc *VAR_9 = FUNC_0(VAR_7);
 uint32_t VAR_10, VAR_11, VAR_12;


 VAR_12 = FUNC_1(VAR_7, VAR_3, 1);
 VAR_12 &= ~(VAR_4 | VAR_5);
 switch (VAR_8) {
 case 131:
  VAR_12 |= VAR_5;

 case 132:
 case 133:
  if ((VAR_9->sc_flags & VAR_1) != 0)
   VAR_12 |= VAR_4;
  break;
 case 128:
  VAR_12 |= VAR_5;

 case 129:
 case 130:
  if ((VAR_9->sc_flags & VAR_1) == 0)
   VAR_12 |= VAR_4;
  break;
 }
 FUNC_2(VAR_7, VAR_3, VAR_12, 1);

 VAR_10 = (VAR_9->sc_flags & VAR_2) != 0 ? 0x3ff : 0x3fc;
 VAR_11 = (VAR_9->sc_flags & VAR_0) != 0 ? 28 : 49;
 VAR_12 = FUNC_1(VAR_7, VAR_3, 4);
 VAR_12 = ((VAR_12 >> 14) & VAR_10) * 5 / 2;
 VAR_12 += VAR_6 + (VAR_9->sc_offset - VAR_11) * 10;

 return (VAR_12);
}
