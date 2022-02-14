
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imx6_anatop_softc {int cpu_curmv; } ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct imx6_anatop_softc *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13;
 static boolean_t VAR_14 = 0;
 VAR_13 = FUNC_1(VAR_6);
 VAR_11 = VAR_13 & VAR_0;


 if (VAR_8 < 725)
  VAR_9 = 0x00;
 else if (VAR_8 > 1450)
  VAR_9 = 0x1F;
 else
  VAR_9 = (VAR_8 - 700) / 25;







 VAR_10 = (VAR_9 < 18) ? 18 : VAR_9;
 if (VAR_14) {
  if (VAR_9 == VAR_11)
   return;
  else if (VAR_9 > VAR_11)
   VAR_12 = (VAR_9 - VAR_11) * 6;
  else
   VAR_12 = 0;
 } else {
  VAR_12 = (700 / 25) * 6;
  VAR_14 = 1;
 }




 VAR_13 &= ~(VAR_0 |
     VAR_2 |
     VAR_4);

 VAR_13 |= VAR_9 << VAR_1;
 VAR_13 |= VAR_9 << VAR_3;
 VAR_13 |= VAR_10 << VAR_5;

 FUNC_2(VAR_6, VAR_13);
 FUNC_0(VAR_12);
 VAR_7->cpu_curmv = VAR_9 * 25 + 700;
}
