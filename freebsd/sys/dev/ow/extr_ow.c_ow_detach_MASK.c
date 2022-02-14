
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_softc {int dummy; } ;
struct ow_devinfo {int dummy; } ;
typedef struct ow_devinfo device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ow_softc*) ;
 int FUNC_1 (struct ow_devinfo) ;
 int FUNC_2 (struct ow_devinfo,struct ow_devinfo) ;
 scalar_t__ FUNC_3 (struct ow_devinfo,struct ow_devinfo**,int*) ;
 struct ow_devinfo* FUNC_4 (struct ow_devinfo) ;
 struct ow_softc* FUNC_5 (struct ow_devinfo) ;
 int FUNC_6 (struct ow_devinfo*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 device_t *VAR_4, VAR_5;
 int VAR_6, VAR_7;
 struct ow_devinfo *VAR_8;
 struct ow_softc *VAR_9;

 VAR_9 = FUNC_5(VAR_3);




 FUNC_1(VAR_3);




 if (FUNC_3(VAR_3, &VAR_4, &VAR_6) != 0)
  return VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = VAR_4[VAR_7];
  VAR_8 = FUNC_4(VAR_5);
  FUNC_6(VAR_8, VAR_1);
  FUNC_2(VAR_3, VAR_5);
 }
 FUNC_6(VAR_4, VAR_2);

 FUNC_0(VAR_9);
 return 0;
}
