
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct smbios_structure_header {int length; } ;
typedef int (* smbios_callback_t ) (struct smbios_structure_header*,void*) ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, int VAR_1, smbios_callback_t VAR_2, void *VAR_3)
{
 struct smbios_structure_header *VAR_4;

 while (VAR_1--) {
  VAR_4 = (struct smbios_structure_header *)VAR_0;
  VAR_2(VAR_4, VAR_3);





  VAR_0 += VAR_4->length;
  while (!(VAR_0[0] == 0 && VAR_0[1] == 0))
   VAR_0++;





  VAR_0 += 2;
 }
}
