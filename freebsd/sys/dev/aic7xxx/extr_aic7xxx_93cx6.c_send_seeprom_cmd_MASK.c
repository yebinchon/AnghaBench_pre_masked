
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct seeprom_descriptor {int sd_MS; int sd_CS; int sd_CK; int sd_DO; int sd_RDY; } ;
struct seeprom_cmd {int len; scalar_t__* bits; } ;


 int FUNC_0 (struct seeprom_descriptor*,int ) ;
 int FUNC_1 (struct seeprom_descriptor*,int) ;

__attribute__((used)) static void
FUNC_2(struct seeprom_descriptor *VAR_0, struct seeprom_cmd *VAR_1)
{
 uint8_t VAR_2;
 int VAR_3 = 0;


 VAR_2 = VAR_0->sd_MS ^ VAR_0->sd_CS;
 FUNC_1(VAR_0, VAR_2 ^ VAR_0->sd_CK);
 FUNC_0(VAR_0, VAR_0->sd_RDY);

 for (VAR_3 = 0; VAR_3 < VAR_1->len; VAR_3++) {
  if (VAR_1->bits[VAR_3] != 0)
   VAR_2 ^= VAR_0->sd_DO;
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_0->sd_RDY);
  FUNC_1(VAR_0, VAR_2 ^ VAR_0->sd_CK);
  FUNC_0(VAR_0, VAR_0->sd_RDY);
  if (VAR_1->bits[VAR_3] != 0)
   VAR_2 ^= VAR_0->sd_DO;
 }
}
