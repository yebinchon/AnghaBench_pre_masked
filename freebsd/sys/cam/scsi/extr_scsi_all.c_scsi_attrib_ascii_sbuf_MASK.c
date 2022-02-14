
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_mam_attribute_header {int id; int attribute; int length; } ;
struct sbuf {int dummy; } ;
typedef int cam_strvis_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int) ;

 int VAR_3 ;


 int FUNC_1 (struct sbuf*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int,size_t,int) ;

int
FUNC_4(struct sbuf *VAR_4, struct scsi_mam_attribute_header *VAR_5,
         uint32_t VAR_6, uint32_t VAR_7,
         uint32_t VAR_8, char *VAR_9,
         int VAR_10)
{
 size_t VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = VAR_6 - sizeof(*VAR_5);
 VAR_12 = FUNC_2(VAR_5->length);
 VAR_13 = FUNC_0(VAR_11, VAR_12);

 if (VAR_13 > 0) {
  cam_strvis_flags VAR_15;

  switch (VAR_8 & VAR_3) {
  case 128:
   VAR_15 = VAR_2;
   break;
  case 129:
   VAR_15 = VAR_1;
   break;
  case 130:
  default:
   VAR_15 = VAR_0;
   break;
  }
  FUNC_1(VAR_4, VAR_5->attribute, VAR_13, VAR_15);
 } else if (VAR_11 < VAR_12) {
  if (VAR_9 != ((void*)0)) {
   FUNC_3(VAR_9, VAR_10, "Available "
     "length of attribute ID 0x%.4x %zu < field "
     "length %u", FUNC_2(VAR_5->id), VAR_11,
     VAR_12);
  }
  VAR_14 = 1;
 }

 return (VAR_14);
}
