
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int dev; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct as3722_softc*,int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct as3722_softc *VAR_5, phandle_t VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_2,
     VAR_3 | VAR_0 | VAR_1,
     VAR_3 | VAR_0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5->dev, "Failed to initialize RTC controller\n");
  return (VAR_4);
 }
 FUNC_1(VAR_5->dev, 1000000);

 return (0);
}
