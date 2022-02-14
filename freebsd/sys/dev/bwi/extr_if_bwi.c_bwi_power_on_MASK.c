
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bwi_softc *VAR_7, int VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11;
 uint16_t VAR_12;

 VAR_9 = FUNC_1(VAR_7->sc_dev, VAR_3, 4);
 if (VAR_9 & VAR_1)
  goto back;

 VAR_10 = FUNC_1(VAR_7->sc_dev, VAR_4, 4);
 VAR_11 = FUNC_1(VAR_7->sc_dev, VAR_2, 4);

 VAR_10 |= VAR_1;
 VAR_11 |= VAR_1;
 if (VAR_8) {

  VAR_10 |= VAR_0;
  VAR_11 |= VAR_0;
 }

 FUNC_2(VAR_7->sc_dev, VAR_4, VAR_10, 4);
 FUNC_2(VAR_7->sc_dev, VAR_2, VAR_11, 4);
 FUNC_0(1000);

 if (VAR_8) {

  VAR_10 &= ~VAR_0;
  FUNC_2(VAR_7->sc_dev, VAR_4, VAR_10, 4);
  FUNC_0(5000);
 }

back:

 VAR_12 = FUNC_1(VAR_7->sc_dev, VAR_6, 2);
 VAR_12 &= ~VAR_5;
 FUNC_2(VAR_7->sc_dev, VAR_6, VAR_12, 2);
}
