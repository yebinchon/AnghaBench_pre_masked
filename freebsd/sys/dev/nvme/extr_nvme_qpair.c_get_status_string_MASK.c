
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvme_status_string {int sc; char const* str; } ;







 struct nvme_status_string* VAR_0 ;
 struct nvme_status_string* VAR_1 ;
 struct nvme_status_string* VAR_2 ;
 struct nvme_status_string* VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(uint16_t VAR_4, uint16_t VAR_5)
{
 struct nvme_status_string *VAR_6;

 switch (VAR_4) {
 case 131:
  VAR_6 = VAR_1;
  break;
 case 132:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_3;
  break;
 case 128:
  return ("VENDOR SPECIFIC");
 default:
  return ("RESERVED");
 }

 while (VAR_6->sc != 0xFFFF) {
  if (VAR_6->sc == VAR_5)
   return (VAR_6->str);
  VAR_6++;
 }
 return (VAR_6->str);
}
