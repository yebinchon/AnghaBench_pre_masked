
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expected_vol_no; } ;
struct TYPE_3__ {int volume; int solid; unsigned int vol_no; } ;
struct rar5 {TYPE_2__ vol; TYPE_1__ main; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (struct archive_read*,struct rar5*) ;
 int FUNC_2 (struct archive_read*,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_6, struct rar5* VAR_7,
    struct archive_entry* VAR_8, size_t VAR_9)
{
 (void) VAR_8;

 int VAR_10;
 size_t VAR_11 = 0;
 size_t VAR_12 = 0;
 size_t VAR_13 = 0;
 size_t VAR_14 = 0;

 if(VAR_9 & VAR_4) {
  if(!FUNC_2(VAR_6, &VAR_11, ((void*)0)))
   return VAR_0;
 } else {
  VAR_11 = 0;
 }

 if(!FUNC_2(VAR_6, &VAR_14, ((void*)0))) {
  return VAR_0;
 }

 enum MAIN_FLAGS {
  VOLUME = 0x0001,
  VOLUME_NUMBER = 0x0002,

  SOLID = 0x0004,
  PROTECT = 0x0008,
  LOCK = 0x0010,
 };

 VAR_7->main.volume = (VAR_14 & VOLUME) > 0;
 VAR_7->main.solid = (VAR_14 & SOLID) > 0;

 if(VAR_14 & VOLUME_NUMBER) {
  size_t VAR_15 = 0;
  if(!FUNC_2(VAR_6, &VAR_15, ((void*)0))) {
   return VAR_0;
  }

  if (VAR_15 > VAR_5) {
   FUNC_0(&VAR_6->archive,
       VAR_1,
       "Invalid volume number");
   return VAR_2;
  }

  VAR_7->main.vol_no = (unsigned int) VAR_15;
 } else {
  VAR_7->main.vol_no = 0;
 }

 if(VAR_7->vol.expected_vol_no > 0 &&
  VAR_7->main.vol_no != VAR_7->vol.expected_vol_no)
 {





  return VAR_0;
 }

 if(VAR_11 == 0) {

  return VAR_3;
 }

 if(!FUNC_2(VAR_6, &VAR_12, ((void*)0))) {
  return VAR_0;
 }

 if(!FUNC_2(VAR_6, &VAR_13, ((void*)0))) {
  return VAR_0;
 }

 if(VAR_12 == 0) {
  FUNC_0(&VAR_6->archive, VAR_1,
      "Invalid extra field size");
  return VAR_2;
 }

 enum MAIN_EXTRA {

  LOCATOR = 0x01,
 };

 switch(VAR_13) {
  case LOCATOR:
   VAR_10 = FUNC_1(VAR_6, VAR_7);
   if(VAR_10 != VAR_3) {


    return VAR_10;
   }

   break;
  default:
   FUNC_0(&VAR_6->archive,
       VAR_1,
       "Unsupported extra type (0x%x)",
       (int) VAR_13);
   return VAR_2;
 }

 return VAR_3;
}
