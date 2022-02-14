
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct as3722_softc {int gpio_npins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct as3722_softc*) ;
 int FUNC_1 (struct as3722_softc*) ;
 int FUNC_2 (struct as3722_softc*,int ,int*) ;
 int FUNC_3 (struct as3722_softc*,int ,int,int) ;
 struct as3722_softc* FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_2, uint32_t VAR_3)
{
 struct as3722_softc *VAR_4;
 uint8_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_3 >= VAR_4->gpio_npins)
  return (VAR_1);

 FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_1(VAR_4);
  return (VAR_6);
 }
 VAR_5 ^= (1 <<VAR_3);
 VAR_6 = FUNC_3(VAR_4, VAR_0, (1 << VAR_3), VAR_5);
 FUNC_1(VAR_4);
 return (0);
}
