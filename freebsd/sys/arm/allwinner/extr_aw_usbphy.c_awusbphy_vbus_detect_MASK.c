
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct awusbphy_softc {int vbus_det_pin; scalar_t__ vbus_det_valid; } ;
typedef int device_t ;


 struct awusbphy_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, int *VAR_1)
{
 struct awusbphy_softc *VAR_2;
 bool VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->vbus_det_valid) {
  VAR_4 = FUNC_2(VAR_2->vbus_det_pin, &VAR_3);
  if (VAR_4 != 0) {
   FUNC_1(VAR_0, "Cannot get status of id pin %d\n",
       VAR_4);
   return (VAR_4);
  }
  *VAR_1 = VAR_3;
  return (0);
 }

 *VAR_1 = 0;
 return (0);
}
