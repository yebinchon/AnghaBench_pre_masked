
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct isl12xx_softc {int dev; int init_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct isl12xx_softc*,int ,int*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct isl12xx_softc *VAR_4 = VAR_3;
 uint8_t VAR_5;

 FUNC_2(&VAR_4->init_hook);





 FUNC_4(VAR_4, VAR_1, &VAR_5);
 if (VAR_5 & VAR_2) {
  FUNC_3(VAR_4->dev,
      "RTC clock stopped; check battery\n");
 }




 FUNC_0(VAR_4->dev, 1000000, VAR_0);
 FUNC_1(VAR_4->dev, 1);
}
