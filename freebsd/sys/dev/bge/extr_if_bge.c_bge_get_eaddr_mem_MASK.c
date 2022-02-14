
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bge_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bge_softc *VAR_2, uint8_t VAR_3[])
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if ((VAR_4 >> 16) == 0x484b) {
  VAR_3[0] = (uint8_t)(VAR_4 >> 8);
  VAR_3[1] = (uint8_t)VAR_4;
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  VAR_3[2] = (uint8_t)(VAR_4 >> 24);
  VAR_3[3] = (uint8_t)(VAR_4 >> 16);
  VAR_3[4] = (uint8_t)(VAR_4 >> 8);
  VAR_3[5] = (uint8_t)VAR_4;
  return (0);
 }
 return (1);
}
