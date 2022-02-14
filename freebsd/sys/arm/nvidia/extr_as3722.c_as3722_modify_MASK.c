
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct as3722_softc {int dummy; } ;


 int FUNC_0 (struct as3722_softc*,int ,int *) ;
 int FUNC_1 (struct as3722_softc*,int ,int ) ;

int
FUNC_2(struct as3722_softc *VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 return (0);
}
