
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct seeprom_descriptor {int sd_MS; int sd_CS; int sd_chip; int sd_DO; int sd_CK; int sd_DI; int sd_RDY; } ;


 int FUNC_0 (struct seeprom_descriptor*,int ) ;
 int FUNC_1 (struct seeprom_descriptor*) ;
 int FUNC_2 (struct seeprom_descriptor*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct seeprom_descriptor*) ;
 int VAR_0 ;
 int FUNC_5 (struct seeprom_descriptor*,int *) ;

int
FUNC_6(struct seeprom_descriptor *VAR_1, uint16_t *VAR_2,
   u_int VAR_3, u_int VAR_4)
{
 int VAR_5 = 0;
 u_int VAR_6 = 0;
 uint16_t VAR_7;
 uint8_t VAR_8;





 for (VAR_6 = VAR_3; VAR_6 < VAR_4 + VAR_3; VAR_6++) {




  FUNC_5(VAR_1, &VAR_0);


  VAR_8 = VAR_1->sd_MS ^ VAR_1->sd_CS;
  for (VAR_5 = (VAR_1->sd_chip - 1); VAR_5 >= 0; VAR_5--) {
   if ((VAR_6 & (1 << VAR_5)) != 0)
    VAR_8 ^= VAR_1->sd_DO;
   FUNC_2(VAR_1, VAR_8);
   FUNC_0(VAR_1, VAR_1->sd_RDY);
   FUNC_2(VAR_1, VAR_8 ^ VAR_1->sd_CK);
   FUNC_0(VAR_1, VAR_1->sd_RDY);
   if ((VAR_6 & (1 << VAR_5)) != 0)
    VAR_8 ^= VAR_1->sd_DO;
  }







  VAR_7 = 0;
  for (VAR_5 = 16; VAR_5 >= 0; VAR_5--) {
   FUNC_2(VAR_1, VAR_8);
   FUNC_0(VAR_1, VAR_1->sd_RDY);
   VAR_7 <<= 1;
   if (FUNC_1(VAR_1) & VAR_1->sd_DI)
    VAR_7 |= 1;
   FUNC_2(VAR_1, VAR_8 ^ VAR_1->sd_CK);
   FUNC_0(VAR_1, VAR_1->sd_RDY);
  }

  VAR_2[VAR_6 - VAR_3] = VAR_7;


  FUNC_4(VAR_1);
 }
 return (1);
}
