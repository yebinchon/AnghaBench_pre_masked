
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int dummy; } ;
typedef size_t camcontrol_devtype ;


 unsigned int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct cam_device*,int,int ,int ,size_t*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct cam_device *VAR_3)
{
 camcontrol_devtype VAR_4;
 int VAR_5;




 VAR_5 = FUNC_1(VAR_3, -1, 0, 0, &VAR_4);
 if (VAR_5 != 0 || (unsigned)VAR_4 > VAR_0) {
  FUNC_0(VAR_2, "illegal\n");
  return (1);
 }
 FUNC_0(VAR_2, "%s\n", VAR_1[VAR_4]);
 return (0);
}
