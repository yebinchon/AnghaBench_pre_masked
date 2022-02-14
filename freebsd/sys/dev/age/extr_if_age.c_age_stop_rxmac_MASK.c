
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct age_softc {int age_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct age_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct age_softc*,int ) ;
 int FUNC_2 (struct age_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct age_softc *VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_8);

 VAR_9 = FUNC_1(VAR_8, VAR_2);
 if ((VAR_9 & VAR_7) != 0) {
  VAR_9 &= ~VAR_7;
  FUNC_2(VAR_8, VAR_2, VAR_9);
 }

 VAR_9 = FUNC_1(VAR_8, VAR_0);
 if ((VAR_9 & VAR_4) != 0) {
  VAR_9 &= ~VAR_4;
  FUNC_2(VAR_8, VAR_0, VAR_9);
 }
 for (VAR_10 = VAR_3; VAR_10 > 0; VAR_10--) {
  if ((FUNC_1(VAR_8, VAR_1) &
      (VAR_6 | VAR_5)) == 0)
   break;
  FUNC_3(10);
 }
 if (VAR_10 == 0)
  FUNC_4(VAR_8->age_dev, "stopping RxMAC timeout!\n");
}
