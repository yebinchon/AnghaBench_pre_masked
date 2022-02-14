
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hda_vendor_id {scalar_t__ id; char* name; } ;
struct hda_codec {int vendor_id; void* chip_name; TYPE_1__* preset; void* vendor_name; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_vendor_id* VAR_2 ;
 void* FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_3)
{
 const struct hda_vendor_id *VAR_4;
 const char *VAR_5 = ((void*)0);
 u16 VAR_6 = VAR_3->vendor_id >> 16;
 char VAR_7[16];

 if (VAR_3->vendor_name)
  goto get_chip_name;

 for (VAR_4 = VAR_2; VAR_4->id; VAR_4++) {
  if (VAR_4->id == VAR_6) {
   VAR_5 = VAR_4->name;
   break;
  }
 }
 if (!VAR_5) {
  FUNC_1(VAR_7, "Generic %04x", VAR_6);
  VAR_5 = VAR_7;
 }
 VAR_3->vendor_name = FUNC_0(VAR_5, VAR_1);
 if (!VAR_3->vendor_name)
  return -VAR_0;

 get_chip_name:
 if (VAR_3->chip_name)
  return 0;

 if (VAR_3->preset && VAR_3->preset->name)
  VAR_3->chip_name = FUNC_0(VAR_3->preset->name, VAR_1);
 else {
  FUNC_1(VAR_7, "ID %x", VAR_3->vendor_id & 0xffff);
  VAR_3->chip_name = FUNC_0(VAR_7, VAR_1);
 }
 if (!VAR_3->chip_name)
  return -VAR_0;
 return 0;
}
