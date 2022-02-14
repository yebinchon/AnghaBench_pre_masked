
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct seeprom_descriptor {int sd_MS; int sd_CK; int sd_RDY; } ;


 int FUNC_0 (struct seeprom_descriptor*,int ) ;
 int FUNC_1 (struct seeprom_descriptor*,int) ;

__attribute__((used)) static void
FUNC_2(struct seeprom_descriptor *VAR_0)
{
 uint8_t VAR_1;

 VAR_1 = VAR_0->sd_MS;
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_0->sd_RDY);
 FUNC_1(VAR_0, VAR_1 ^ VAR_0->sd_CK);
 FUNC_0(VAR_0, VAR_0->sd_RDY);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_0->sd_RDY);
}
