
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {char* device_name; char* dev_unit_num; int given_unit_number; int given_dev_name; } ;
struct ata_params {int dummy; } ;
typedef int str ;


 int FUNC_0 (struct ata_params*) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct cam_device *VAR_1,
     struct ata_params* VAR_2)
{

 FUNC_2("\nYou are about to ERASE ALL DATA from the following"
        " device:\n%s%d,%s%d: ", VAR_1->device_name,
        VAR_1->dev_unit_num, VAR_1->given_dev_name,
        VAR_1->given_unit_number);
 FUNC_0(VAR_2);

 for(;;) {
  char VAR_3[50];
  FUNC_2("\nAre you SURE you want to ERASE ALL DATA? (yes/no) ");

  if (FUNC_1(VAR_3, sizeof(VAR_3), VAR_0) != ((void*)0)) {
   if (FUNC_3(VAR_3, "yes", 3) == 0) {
    return (1);
   } else if (FUNC_3(VAR_3, "no", 2) == 0) {
    return (0);
   } else {
    FUNC_2("Please answer \"yes\" or "
           "\"no\"\n");
   }
  }
 }


 return (0);
}
