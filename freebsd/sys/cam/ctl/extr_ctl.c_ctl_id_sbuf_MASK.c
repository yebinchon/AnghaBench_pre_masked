
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_vpd_id_descriptor {int id_type; int proto_codeset; int length; char** identifier; } ;
struct sbuf {int dummy; } ;
struct ctl_devid {int len; scalar_t__ data; } ;




 int VAR_0 ;


 int VAR_1 ;



 int FUNC_0 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct ctl_devid *VAR_2, struct sbuf *VAR_3)
{
 struct scsi_vpd_id_descriptor *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0) || VAR_2->len < 4)
  return;
 VAR_4 = (struct scsi_vpd_id_descriptor *)VAR_2->data;
 switch (VAR_4->id_type & VAR_1) {
 case 128:
  FUNC_0(VAR_3, "t10.");
  break;
 case 131:
  FUNC_0(VAR_3, "eui.");
  break;
 case 130:
  FUNC_0(VAR_3, "naa.");
  break;
 case 129:
  break;
 }
 switch (VAR_4->proto_codeset & VAR_0) {
 case 133:
  for (VAR_5 = 0; VAR_5 < VAR_4->length; VAR_5++)
   FUNC_0(VAR_3, "%02x", VAR_4->identifier[VAR_5]);
  break;
 case 134:
  FUNC_0(VAR_3, "%.*s", (int)VAR_4->length,
      (char *)VAR_4->identifier);
  break;
 case 132:
  FUNC_0(VAR_3, "%s", (char *)VAR_4->identifier);
  break;
 }
}
