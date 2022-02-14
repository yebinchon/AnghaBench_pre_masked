
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ure_softc {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct ure_softc*,int,int,int**,int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct ure_softc *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4[4];
 uint8_t VAR_5;

 VAR_5 = (VAR_1 & 2) << 3;
 VAR_1 &= ~3;

 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4, 4);
 VAR_3 = FUNC_0(VAR_4);
 VAR_3 >>= VAR_5;

 return (VAR_3 & 0xffff);
}
