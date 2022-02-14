
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct omap_tll_softc {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct omap_tll_softc*,int ) ;
 struct omap_tll_softc* VAR_10 ;
 int FUNC_2 (struct omap_tll_softc*,int ,int) ;

void
FUNC_3(unsigned int VAR_11)
{
 struct omap_tll_softc *VAR_12;
 unsigned int VAR_13;
 uint32_t VAR_14;

 VAR_12 = VAR_10;
 if (VAR_12 == ((void*)0))
  return;




 for (VAR_13=0; VAR_13<3; VAR_13++) {
  VAR_14 = FUNC_1(VAR_12, FUNC_0(VAR_13));

  VAR_14 &= ~(VAR_4
     | VAR_3
     | VAR_2);

  FUNC_2(VAR_12, FUNC_0(VAR_13), VAR_14);
 }


 VAR_14 = FUNC_1(VAR_12, VAR_0);

 VAR_14 &= ~( VAR_7
   | VAR_9);
 VAR_14 |= ( VAR_5
   | VAR_8
   | VAR_6);

 FUNC_2(VAR_12, VAR_0, VAR_14);


 for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
  VAR_14 = FUNC_1(VAR_12, FUNC_0(VAR_13));


  if ((VAR_11 & (1 << VAR_13)) == 0)
   continue;

  VAR_14 |= VAR_1;
  FUNC_2(VAR_12, FUNC_0(VAR_13), VAR_14);
 }
}
