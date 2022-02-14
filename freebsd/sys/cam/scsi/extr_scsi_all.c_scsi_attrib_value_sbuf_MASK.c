
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_mam_attribute_header {int byte2; int length; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sbuf*,struct scsi_mam_attribute_header*,int ,int ,int ,char*,size_t) ;
 int FUNC_3 (struct sbuf*,struct scsi_mam_attribute_header*,int ,int ,int ,char*,size_t) ;
 int FUNC_4 (struct sbuf*,struct scsi_mam_attribute_header*,int ,int ,int ,char*,size_t) ;
 int FUNC_5 (struct sbuf*,struct scsi_mam_attribute_header*,int ,int ,int ,char*,size_t) ;
 int FUNC_6 (char*,size_t,char*,int) ;

int
FUNC_7(struct sbuf *VAR_2, uint32_t VAR_3,
   struct scsi_mam_attribute_header *VAR_4, uint32_t VAR_5,
   char *VAR_6, size_t VAR_7)
{
 int VAR_8;

 switch (VAR_4->byte2 & VAR_1) {
 case 130:
  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_3,
      VAR_0, VAR_5, VAR_6,VAR_7);
  break;
 case 129:
  if (FUNC_1(VAR_4->length) <= 8)
   VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_3,
       VAR_0, VAR_5, VAR_6,
       VAR_7);
  else
   VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_3,
       VAR_0, VAR_5, VAR_6,
       VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_3,
      VAR_0, VAR_5, VAR_6,
      VAR_7);
  break;
 default:
  if (VAR_6 != ((void*)0)) {
   FUNC_6(VAR_6, VAR_7, "Unknown attribute "
       "format 0x%x", VAR_4->byte2 & VAR_1);
  }
  VAR_8 = 1;
  goto bailout;
  break;
 }

 FUNC_0(VAR_2);

bailout:

 return (VAR_8);
}
