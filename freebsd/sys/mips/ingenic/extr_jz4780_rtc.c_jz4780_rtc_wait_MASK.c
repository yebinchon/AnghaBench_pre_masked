
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_rtc_softc {int dummy; } ;


 int FUNC_0 (struct jz4780_rtc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct jz4780_rtc_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3;
 while (VAR_5-- > 0) {
  if (FUNC_0(VAR_4, VAR_1) & VAR_2)
   return (0);
 }
 return (VAR_0);
}
