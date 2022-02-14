
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_rtc_softc {int dummy; } ;


 int FUNC_0 (struct jz4780_rtc_softc*,int ) ;
 int FUNC_1 (struct jz4780_rtc_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct jz4780_rtc_softc*) ;

__attribute__((used)) static int
FUNC_3(struct jz4780_rtc_softc *VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_1(VAR_5, VAR_2, VAR_3);

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_9 = VAR_1;
 while (VAR_9-- > 0) {
  if (FUNC_0(VAR_5, VAR_2) & VAR_4)
   break;
 }
 if (VAR_9 < 0)
  return (VAR_0);

 FUNC_1(VAR_5, VAR_6, VAR_7);
 return 0;
}
