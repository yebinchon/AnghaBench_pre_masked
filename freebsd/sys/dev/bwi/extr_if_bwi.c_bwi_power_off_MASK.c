
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct bwi_softc *VAR_5, int VAR_6)
{
 uint32_t VAR_7, VAR_8;

 FUNC_0(VAR_5->sc_dev, VAR_3, 4);
 VAR_7 = FUNC_0(VAR_5->sc_dev, VAR_4, 4);
 VAR_8 = FUNC_0(VAR_5->sc_dev, VAR_2, 4);

 VAR_7 &= ~VAR_1;
 VAR_8 |= VAR_1;
 if (VAR_6) {
  VAR_7 |= VAR_0;
  VAR_8 |= VAR_0;
 }

 FUNC_1(VAR_5->sc_dev, VAR_4, VAR_7, 4);
 FUNC_1(VAR_5->sc_dev, VAR_2, VAR_8, 4);
 return 0;
}
