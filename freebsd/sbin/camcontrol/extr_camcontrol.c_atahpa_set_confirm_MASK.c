
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct cam_device {int given_unit_number; int given_dev_name; int dev_unit_num; int device_name; } ;
struct ata_params {int dummy; } ;
typedef int str ;


 int FUNC_0 (struct ata_params*) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct cam_device *VAR_1, struct ata_params* VAR_2,
     u_int64_t VAR_3, int VAR_4)
{
 FUNC_2("\nYou are about to configure HPA to limit the user accessible\n"
        "sectors to %ju %s on the device:\n%s%d,%s%d: ", VAR_3,
        VAR_4 ? "persistently" : "temporarily",
        VAR_1->device_name, VAR_1->dev_unit_num,
        VAR_1->given_dev_name, VAR_1->given_unit_number);
 FUNC_0(VAR_2);

 for(;;) {
  char VAR_5[50];
  FUNC_2("\nAre you SURE you want to configure HPA? (yes/no) ");

  if (((void*)0) != FUNC_1(VAR_5, sizeof(VAR_5), VAR_0)) {
   if (0 == FUNC_3(VAR_5, "yes", 3)) {
    return (1);
   } else if (0 == FUNC_3(VAR_5, "no", 2)) {
    return (0);
   } else {
    FUNC_2("Please answer \"yes\" or "
           "\"no\"\n");
   }
  }
 }


 return (0);
}
