
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct fw_vendor {int type; int dev_type; } ;
struct cam_device {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (struct cam_device*,int,int,int,char*,char const*,int) ;
 int FUNC_5 (int,int,int ) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (int,char*,int) ;
 int VAR_3 ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_12(struct cam_device *VAR_4, int VAR_5, int VAR_6, int VAR_7,
     const char *VAR_8, struct fw_vendor *VAR_9, int *VAR_10)
{
 int VAR_11;
 struct stat VAR_12;
 char *VAR_13;
 off_t VAR_14;
 int VAR_15 = 0;

 if ((VAR_11 = FUNC_7(VAR_8, VAR_0)) < 0) {
  FUNC_10("Could not open image file %s", VAR_8);
  return (((void*)0));
 }
 if (FUNC_3(VAR_11, &VAR_12) < 0) {
  FUNC_10("Could not stat image file %s", VAR_8);
  goto bailout1;
 }
 if ((VAR_14 = VAR_12.st_size) == 0) {
  FUNC_11("Zero length image file %s", VAR_8);
  goto bailout1;
 }
 if ((VAR_13 = FUNC_6(VAR_14)) == ((void*)0)) {
  FUNC_11("Could not allocate buffer to read image file %s",
      VAR_8);
  goto bailout1;
 }

 switch (VAR_9->type) {
 case 128:
  if (FUNC_8(VAR_11, VAR_13, 16) != 16) {
   FUNC_10("Could not read image file %s", VAR_8);
   goto bailout;
  }
  if (FUNC_5(VAR_11, 0, VAR_1) == -1) {
   FUNC_10("Unable to lseek");
   goto bailout;
  }
  if ((FUNC_9(VAR_13, "SEAGATE,SEAGATE ", 16) == 0) ||
      (VAR_14 % 512 == 80))
   VAR_15 = 80;
  break;
 case 129:
  VAR_15 = VAR_14 % 1030;
  break;
 case 130: {
  if (VAR_9->dev_type != VAR_2)
   break;
  if (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_11, VAR_13,
        VAR_8, VAR_7) != 0)
   goto bailout;
  break;
 }
 default:
  break;
 }
 if (VAR_15 != 0) {
  FUNC_1(VAR_3, "Skipping %d byte header.\n", VAR_15);
  if (FUNC_5(VAR_11, VAR_15, VAR_1) == -1) {
   FUNC_10("Could not lseek");
   goto bailout;
  }
  VAR_14 -= VAR_15;
 }

 if (FUNC_8(VAR_11, VAR_13, VAR_14) != VAR_14) {
  FUNC_10("Could not read image file %s", VAR_8);
  goto bailout;
 }
 *VAR_10 = VAR_14;
 FUNC_0(VAR_11);
 return (VAR_13);
bailout:
 FUNC_2(VAR_13);
bailout1:
 FUNC_0(VAR_11);
 *VAR_10 = 0;
 return (((void*)0));
}
