
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int endarc; int vol_no; int volume; } ;
struct TYPE_5__ {int expected_vol_no; } ;
struct TYPE_4__ {int split_after; int split_before; int size; int last_header_id; } ;
struct rar5 {TYPE_3__ main; TYPE_2__ vol; TYPE_1__ generic; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 scalar_t__ FUNC_2 (int ,int const*,int) ;
 struct rar5* FUNC_3 (struct archive_read*) ;
 int FUNC_4 (struct archive_read*,struct rar5*,struct archive_entry*,size_t) ;
 int FUNC_5 (struct archive_read*,struct rar5*,struct archive_entry*,size_t) ;
 int FUNC_6 (struct archive_read*,struct rar5*,struct archive_entry*,size_t) ;
 int FUNC_7 (struct archive_read*,size_t,int const**) ;
 int FUNC_8 (struct archive_read*,scalar_t__*) ;
 int FUNC_9 (struct archive_read*,size_t*,size_t*) ;
 int FUNC_10 (struct archive_read*) ;
 int FUNC_11 (struct archive_read*) ;

__attribute__((used)) static int FUNC_12(struct archive_read* VAR_10,
    struct archive_entry* VAR_11)
{
 struct rar5* VAR_12 = FUNC_3(VAR_10);
 uint32_t VAR_13, VAR_14;
 size_t VAR_15 = 0, VAR_16, VAR_17;
 size_t VAR_18 = 0;
 size_t VAR_19 = 0;
 const uint8_t* VAR_20;
 int VAR_21;


 VAR_21 = FUNC_11(VAR_10);
 if(VAR_21 != VAR_4)
  return VAR_21;


 if(!FUNC_8(VAR_10, &VAR_13)) {
  return VAR_0;
 }


 if(!FUNC_9(VAR_10, &VAR_15, &VAR_16)) {
  return VAR_0;
 }


 if(VAR_15 > (2 * 1024 * 1024)) {
  FUNC_0(&VAR_10->archive, VAR_1,
      "Base block header is too large");

  return VAR_3;
 }

 VAR_17 = VAR_15 + VAR_16;



 if(!FUNC_7(VAR_10, VAR_17, &VAR_20)) {
  return VAR_0;
 }


 VAR_14 = (uint32_t) FUNC_2(0, VAR_20, (int) VAR_17);
 if(VAR_14 != VAR_13) {
  FUNC_0(&VAR_10->archive, VAR_1,
      "Header CRC error");

  return VAR_3;
 }


 if(VAR_4 != FUNC_1(VAR_10, VAR_16)) {
  return VAR_0;
 }

 if(!FUNC_9(VAR_10, &VAR_18, ((void*)0)))
  return VAR_0;

 if(!FUNC_9(VAR_10, &VAR_19, ((void*)0)))
  return VAR_0;

 VAR_12->generic.split_after = (VAR_19 & VAR_7) > 0;
 VAR_12->generic.split_before = (VAR_19 & VAR_8) > 0;
 VAR_12->generic.size = (int)VAR_17;
 VAR_12->generic.last_header_id = (int)VAR_18;
 VAR_12->main.endarc = 0;


 enum HEADER_TYPE {
  HEAD_MARK = 0x00, HEAD_MAIN = 0x01, HEAD_FILE = 0x02,
  HEAD_SERVICE = 0x03, HEAD_CRYPT = 0x04, HEAD_ENDARC = 0x05,
  HEAD_UNKNOWN = 0xff,
 };

 switch(VAR_18) {
  case HEAD_MAIN:
   VAR_21 = FUNC_5(VAR_10, VAR_12, VAR_11, VAR_19);




   if(VAR_21 == VAR_4)
    return VAR_5;

   return VAR_21;
  case HEAD_SERVICE:
   VAR_21 = FUNC_6(VAR_10, VAR_12, VAR_11, VAR_19);
   return VAR_21;
  case HEAD_FILE:
   VAR_21 = FUNC_4(VAR_10, VAR_12, VAR_11, VAR_19);
   return VAR_21;
  case HEAD_CRYPT:
   FUNC_0(&VAR_10->archive,
       VAR_1,
       "Encryption is not supported");
   return VAR_3;
  case HEAD_ENDARC:
   VAR_12->main.endarc = 1;





   if(VAR_12->main.volume) {



    VAR_21 = FUNC_10(VAR_10);
    if(VAR_21 == VAR_3) {
     return VAR_0;
    } else {
     if(VAR_12->vol.expected_vol_no ==
         VAR_9) {
      FUNC_0(&VAR_10->archive,
          VAR_1,
          "Header error");
       return VAR_3;
     }

     VAR_12->vol.expected_vol_no =
         VAR_12->main.vol_no + 1;
     return VAR_4;
    }
   } else {
    return VAR_0;
   }
  case HEAD_MARK:
   return VAR_0;
  default:
   if((VAR_19 & VAR_6) == 0) {
    FUNC_0(&VAR_10->archive,
        VAR_1,
        "Header type error");
    return VAR_3;
   } else {



    return VAR_5;
   }
 }



 FUNC_0(&VAR_10->archive, VAR_2,
     "Internal unpacker error");
 return VAR_3;

}
