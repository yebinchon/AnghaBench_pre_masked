
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uchcom_softc {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct uchcom_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct uchcom_softc *VAR_1,
    uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 FUNC_0("0x%02X<-0x%02X, 0x%02X<-0x%02X\n",
     (unsigned)VAR_2, (unsigned)VAR_3,
     (unsigned)VAR_4, (unsigned)VAR_5);
 FUNC_1(
     VAR_1, VAR_0,
     VAR_2 | ((uint16_t)VAR_4 << 8), VAR_3 | ((uint16_t)VAR_5 << 8));
}
