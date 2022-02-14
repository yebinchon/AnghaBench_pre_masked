
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, const char *VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       void *VAR_6)
{
 int VAR_7;

 if (VAR_4 % VAR_5 || VAR_4 < VAR_5) {
  if (VAR_0 != 0)
   return;
  FUNC_0("%s: sizeof(struct %s_device_id)=%lu is not a modulo "
        "of the size of section __mod_%s_device_table=%lu.\n"
        "Fix definition of struct %s_device_id "
        "in mod_devicetable.h\n",
        VAR_2, VAR_3, VAR_5, VAR_3, VAR_4, VAR_3);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ ) {
  if (*(uint8_t*)(VAR_6+VAR_4-VAR_5+VAR_7)) {
   FUNC_1(VAR_1,"%s: struct %s_device_id is %lu bytes.  "
    "The last of %lu is:\n",
    VAR_2, VAR_3, VAR_5, VAR_4 / VAR_5);
   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
    FUNC_1(VAR_1,"0x%02x ",
     *(uint8_t*)(VAR_6+VAR_4-VAR_5+VAR_7) );
   FUNC_1(VAR_1,"\n");
   FUNC_0("%s: struct %s_device_id is not terminated "
    "with a NULL entry!\n", VAR_2, VAR_3);
  }
 }
}
