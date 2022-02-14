
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rk_i2c_softc {int sclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct rk_i2c_softc *VAR_3, uint32_t VAR_4)
{
 uint64_t VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->sclk, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_6 = (VAR_5 / VAR_4 / VAR_2 / 2) - 1;
 VAR_6 &= VAR_1;

 VAR_6 = VAR_6 << VAR_0 | VAR_6;

 return (VAR_6);
}
