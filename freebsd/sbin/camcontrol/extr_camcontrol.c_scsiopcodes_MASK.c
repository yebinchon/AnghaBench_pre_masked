
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cam_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct cam_device*,int,int,int,int,int,int,int,int,int,int,int*,int **) ;
 int FUNC_3 (struct cam_device*,int,int,int,int *,int) ;
 int FUNC_4 (struct cam_device*,int,int *,int) ;
 int FUNC_5 (int ,char**,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(struct cam_device *VAR_1, int VAR_2, char **VAR_3,
     char *VAR_4, int VAR_5, int VAR_6, int VAR_7,
     int VAR_8)
{
 int VAR_9;
 uint32_t VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 1;
 uint32_t VAR_16 = 0;
 uint8_t *VAR_17 = ((void*)0);
 char *VAR_18;
 int VAR_19 = 0;

 while ((VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4)) != -1) {
  switch (VAR_9) {
  case 'N':
   VAR_15 = 0;
   break;
  case 'o':
   VAR_10 = FUNC_5(VAR_0, &VAR_18, 0);
   if (*VAR_18 != '\0') {
    FUNC_6("Invalid opcode \"%s\", must be a number",
          VAR_0);
    VAR_19 = 1;
    goto bailout;
   }
   if (VAR_10 > 0xff) {
    FUNC_6("Invalid opcode 0x%#x, must be between"
          "0 and 0xff inclusive", VAR_10);
    VAR_19 = 1;
    goto bailout;
   }
   VAR_13 = 1;
   break;
  case 's':
   VAR_11 = FUNC_5(VAR_0, &VAR_18, 0);
   if (*VAR_18 != '\0') {
    FUNC_6("Invalid service action \"%s\", must "
          "be a number", VAR_0);
    VAR_19 = 1;
    goto bailout;
   }
   if (VAR_11 > 0xffff) {
    FUNC_6("Invalid service action 0x%#x, must "
          "be between 0 and 0xffff inclusive",
          VAR_11);
    VAR_19 = 1;
   }
   VAR_14 = 1;
   break;
  case 'T':
   VAR_12 = 1;
   break;
  default:
   break;
  }
 }

 if ((VAR_14 != 0)
  && (VAR_13 == 0)) {
  FUNC_6("You must specify an opcode with -o if a service "
        "action is given");
  VAR_19 = 1;
  goto bailout;
 }
 VAR_19 = FUNC_2(VAR_1, VAR_13, VAR_10, VAR_15,
    VAR_14, VAR_11, VAR_12, VAR_5,
    VAR_6, VAR_7, VAR_8, &VAR_16,
    &VAR_17);
 if (VAR_19 != 0)
  goto bailout;

 if ((VAR_13 != 0)
  || (VAR_14 != 0)) {
  VAR_19 = FUNC_3(VAR_1, VAR_10, VAR_14,
         VAR_11, VAR_17, VAR_16);
 } else {
  VAR_19 = FUNC_4(VAR_1, VAR_12, VAR_17, VAR_16);
 }

bailout:
 FUNC_0(VAR_17);

 return (VAR_19);
}
