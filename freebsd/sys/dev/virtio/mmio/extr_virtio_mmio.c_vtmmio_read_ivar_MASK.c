
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtmmio_softc {scalar_t__ vtmmio_child_dev; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 struct vtmmio_softc* FUNC_0 (scalar_t__) ;
 uintptr_t FUNC_1 (struct vtmmio_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
 struct vtmmio_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->vtmmio_child_dev != VAR_4)
  return (VAR_0);

 switch (VAR_5) {
 case 131:
 case 130:
  *VAR_6 = FUNC_1(VAR_7, VAR_1);
  break;
 case 128:
  *VAR_6 = FUNC_1(VAR_7, VAR_2);
  break;
 case 129:
 case 132:




  *VAR_6 = 0;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
