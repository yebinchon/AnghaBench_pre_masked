
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ,int ,int ) ;
 int FUNC_1 (struct bxe_softc*,int,int) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_0, uint8_t VAR_1,
          uint32_t VAR_2, uint32_t VAR_3)
{
 FUNC_0(VAR_0, "FW version 0x%x:0x%x for port %d\n",
   (uint16_t)(VAR_2>>16), (uint16_t)VAR_2, VAR_1);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_3, VAR_2);
}
