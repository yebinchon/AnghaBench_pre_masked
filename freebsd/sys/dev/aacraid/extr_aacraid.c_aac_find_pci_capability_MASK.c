
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct aac_softc {int aac_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct aac_softc *VAR_8, int VAR_9)
{
 device_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;

 VAR_10 = VAR_8->aac_dev;

 VAR_11 = FUNC_0(VAR_10, VAR_7, 2);
 if (!(VAR_11 & VAR_3))
  return (0);

 VAR_11 = FUNC_0(VAR_10, VAR_6, 1);
 switch (VAR_11 & VAR_2) {
 case 0:
 case 1:
  VAR_12 = VAR_4;
  break;
 case 2:
  VAR_12 = VAR_5;
  break;
 default:
  return (0);
  break;
 }
 VAR_12 = FUNC_0(VAR_10, VAR_12, 1);

 while (VAR_12 != 0) {
  int VAR_13, VAR_14;
  VAR_13 = FUNC_0(VAR_10, VAR_12 + VAR_1, 1);
  VAR_14 = FUNC_0(VAR_10, VAR_12 + VAR_0, 1);
  if (VAR_14 == VAR_9)
   return (VAR_12);
  VAR_12 = VAR_13;
 }

 return (0);
}
