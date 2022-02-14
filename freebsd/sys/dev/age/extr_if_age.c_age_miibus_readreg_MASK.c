
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct age_softc {int age_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct age_softc*,int ) ;
 int FUNC_1 (struct age_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 struct age_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_9, int VAR_10, int VAR_11)
{
 struct age_softc *VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(VAR_9);

 FUNC_1(VAR_12, VAR_0, VAR_6 | VAR_7 |
     VAR_8 | VAR_2 | FUNC_3(VAR_11));
 for (VAR_14 = VAR_1; VAR_14 > 0; VAR_14--) {
  FUNC_2(1);
  VAR_13 = FUNC_0(VAR_12, VAR_0);
  if ((VAR_13 & (VAR_6 | VAR_5)) == 0)
   break;
 }

 if (VAR_14 == 0) {
  FUNC_5(VAR_12->age_dev, "phy read timeout : %d\n", VAR_11);
  return (0);
 }

 return ((VAR_13 & VAR_3) >> VAR_4);
}
