
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct seeprom_descriptor {scalar_t__ sd_chip; int sd_MS; int sd_CS; int sd_DO; int sd_CK; int sd_DI; int sd_RDY; } ;
struct seeprom_cmd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seeprom_descriptor*,int ) ;
 int FUNC_1 (struct seeprom_descriptor*) ;
 int FUNC_2 (struct seeprom_descriptor*,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct seeprom_descriptor*) ;
 struct seeprom_cmd VAR_2 ;
 struct seeprom_cmd VAR_3 ;
 struct seeprom_cmd VAR_4 ;
 struct seeprom_cmd VAR_5 ;
 struct seeprom_cmd VAR_6 ;
 int FUNC_5 (struct seeprom_descriptor*,struct seeprom_cmd*) ;

int
FUNC_6(struct seeprom_descriptor *VAR_7, uint16_t *VAR_8,
    u_int VAR_9, u_int VAR_10)
{
 struct seeprom_cmd *VAR_11, *VAR_12;
 uint16_t VAR_13;
 uint8_t VAR_14;
 int VAR_15, VAR_16;


 if (VAR_7->sd_chip == VAR_0) {
  VAR_11 = &VAR_3;
  VAR_12 = &VAR_2;
 } else if (VAR_7->sd_chip == VAR_1) {
  VAR_11 = &VAR_5;
  VAR_12 = &VAR_4;
 } else {
  FUNC_3("ahc_write_seeprom: unsupported seeprom type %d\n",
         VAR_7->sd_chip);
  return (0);
 }

 FUNC_5(VAR_7, VAR_11);
 FUNC_4(VAR_7);


 VAR_14 = VAR_7->sd_MS ^ VAR_7->sd_CS;
 for (VAR_16 = VAR_9; VAR_16 < VAR_10 + VAR_9; VAR_16++) {

  FUNC_5(VAR_7, &VAR_6);


  for (VAR_15 = (VAR_7->sd_chip - 1); VAR_15 >= 0; VAR_15--) {
   if ((VAR_16 & (1 << VAR_15)) != 0)
    VAR_14 ^= VAR_7->sd_DO;
   FUNC_2(VAR_7, VAR_14);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
   FUNC_2(VAR_7, VAR_14 ^ VAR_7->sd_CK);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
   if ((VAR_16 & (1 << VAR_15)) != 0)
    VAR_14 ^= VAR_7->sd_DO;
  }


  VAR_13 = VAR_8[VAR_16 - VAR_9];
  for (VAR_15 = 15; VAR_15 >= 0; VAR_15--) {
   if ((VAR_13 & (1 << VAR_15)) != 0)
    VAR_14 ^= VAR_7->sd_DO;
   FUNC_2(VAR_7, VAR_14);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
   FUNC_2(VAR_7, VAR_14 ^ VAR_7->sd_CK);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
   if ((VAR_13 & (1 << VAR_15)) != 0)
    VAR_14 ^= VAR_7->sd_DO;
  }


  VAR_14 = VAR_7->sd_MS;
  FUNC_2(VAR_7, VAR_14);
  FUNC_0(VAR_7, VAR_7->sd_RDY);
  VAR_14 = VAR_7->sd_MS ^ VAR_7->sd_CS;
  do {
   FUNC_2(VAR_7, VAR_14);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
   FUNC_2(VAR_7, VAR_14 ^ VAR_7->sd_CK);
   FUNC_0(VAR_7, VAR_7->sd_RDY);
  } while ((FUNC_1(VAR_7) & VAR_7->sd_DI) == 0);

  FUNC_4(VAR_7);
 }


 FUNC_5(VAR_7, VAR_12);
 FUNC_4(VAR_7);

 return (1);
}
