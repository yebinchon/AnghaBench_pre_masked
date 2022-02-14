
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_devcfg_softc {int sc_mtx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct zy7_devcfg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct zy7_devcfg_softc*,int ) ;
 int FUNC_3 (struct zy7_devcfg_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct zy7_devcfg_softc*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct zy7_devcfg_softc *VAR_11)
{
 uint32_t VAR_12;
 int VAR_13, VAR_14;

 FUNC_1(VAR_11);

 VAR_12 = FUNC_2(VAR_11, VAR_2);


 FUNC_3(VAR_11, VAR_7, VAR_4);
 FUNC_3(VAR_11, VAR_5, ~VAR_6);


 VAR_12 |= VAR_3;
 FUNC_3(VAR_11, VAR_2, VAR_12);





 if ((FUNC_2(VAR_11, VAR_8) &
      VAR_9) != 0) {

  FUNC_3(VAR_11, VAR_5, ~0);
 }
 else {

  VAR_14 = FUNC_4(VAR_11, &VAR_11->sc_mtx, VAR_1, "zy7i1", VAR_10);
  if (VAR_14 != 0)
   return (VAR_14);
 }


 VAR_12 &= ~VAR_3;
 FUNC_3(VAR_11, VAR_2, VAR_12);


 VAR_13 = 0;
 while ((FUNC_2(VAR_11, VAR_8) &
  VAR_9) != 0) {
  if (++VAR_13 >= 100)
   return (VAR_0);
  FUNC_0(5);
 }


 FUNC_3(VAR_11, VAR_7, VAR_4);
 FUNC_3(VAR_11, VAR_5, ~VAR_6);


 VAR_12 |= VAR_3;
 FUNC_3(VAR_11, VAR_2, VAR_12);





 VAR_14 = FUNC_4(VAR_11, &VAR_11->sc_mtx, VAR_1, "zy7i2", VAR_10);
 if (VAR_14 != 0)
  return (VAR_14);


 FUNC_3(VAR_11, VAR_7, VAR_4);

 return (0);
}
