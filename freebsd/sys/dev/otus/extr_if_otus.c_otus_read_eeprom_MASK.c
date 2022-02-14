
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct otus_softc {int eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct otus_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct otus_softc*,int ,int*,int,int *,int) ;

int
FUNC_3(struct otus_softc *VAR_2)
{
 uint32_t VAR_3[8], VAR_4;
 uint8_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_2);


 VAR_5 = (uint8_t *)&VAR_2->eeprom;
 VAR_4 = VAR_1;
 for (VAR_6 = 0; VAR_6 < sizeof (VAR_2->eeprom) / 32; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++, VAR_4 += 4)
   VAR_3[VAR_7] = FUNC_1(VAR_4);
  VAR_8 = FUNC_2(VAR_2, VAR_0, VAR_3, sizeof VAR_3, VAR_5, 32);
  if (VAR_8 != 0)
   break;
  VAR_5 += 32;
 }
 return VAR_8;
}
