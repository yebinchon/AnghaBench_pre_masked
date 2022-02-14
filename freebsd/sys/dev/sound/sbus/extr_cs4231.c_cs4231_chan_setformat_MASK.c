
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct cs4231_softc {int dummy; } ;
struct cs4231_channel {int format; scalar_t__ dir; struct cs4231_softc* parent; } ;
typedef int kobj_t ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int FUNC_2 (struct cs4231_softc*) ;
 int FUNC_3 (struct cs4231_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (struct cs4231_softc*,scalar_t__,int ) ;
 int FUNC_6 (struct cs4231_softc*,int ) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_10, void *VAR_11, u_int32_t VAR_12)
{
 struct cs4231_softc *VAR_13;
 struct cs4231_channel *VAR_14;
 u_int32_t VAR_15;
 u_int8_t VAR_16, VAR_17;

 VAR_14 = VAR_11;
 VAR_13 = VAR_14->parent;

 FUNC_2(VAR_13);
 if (VAR_14->format == VAR_12) {
  FUNC_3(VAR_13);
  return (0);
 }

 VAR_15 = FUNC_1(VAR_12);
 VAR_16 = 0;
 switch (VAR_15) {
 case 128:
  VAR_16 = VAR_6;
  break;
 case 131:
  VAR_16 = VAR_2;
  break;
 case 129:
  VAR_16 = VAR_4;
  break;
 case 133:
  VAR_16 = VAR_0;
  break;
 case 132:
  VAR_16 = VAR_1;
  break;
 case 130:
  VAR_16 = VAR_3;
  break;
 default:
  VAR_16 = VAR_6;
  VAR_12 = 128;
  break;
 }

 if (FUNC_0(VAR_12) > 1)
  VAR_16 |= VAR_5;

 FUNC_4(("FORMAT: %s : 0x%x\n", VAR_14->dir == VAR_9 ? "playback" :
     "capture", VAR_12));
 VAR_17 = FUNC_6(VAR_13, VAR_7);
 VAR_17 &= VAR_8;
 VAR_16 |= VAR_17;
 FUNC_5(VAR_13, VAR_14->dir, VAR_16);
 VAR_14->format = VAR_12;
 FUNC_3(VAR_13);

 return (0);
}
