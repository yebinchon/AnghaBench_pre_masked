
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct uchcom_softc {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uchcom_softc*,int ,int,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(struct uchcom_softc *VAR_2,
    uint8_t VAR_3, uint8_t *VAR_4, uint8_t VAR_5, uint8_t *VAR_6)
{
 uint8_t VAR_7[VAR_0];

 FUNC_1(
     VAR_2, VAR_1,
     VAR_3 | ((uint16_t)VAR_5 << 8), 0, VAR_7, sizeof(VAR_7));

 FUNC_0("0x%02X->0x%02X, 0x%02X->0x%02X\n",
     (unsigned)VAR_3, (unsigned)VAR_7[0],
     (unsigned)VAR_5, (unsigned)VAR_7[1]);

 if (VAR_4)
  *VAR_4 = VAR_7[0];
 if (VAR_6)
  *VAR_6 = VAR_7[1];
}
