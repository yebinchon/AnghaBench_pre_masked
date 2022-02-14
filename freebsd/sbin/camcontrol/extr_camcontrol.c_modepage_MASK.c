
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (struct cam_device*,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct cam_device*,int,int,int,int,int,int,int) ;
 char* VAR_1 ;
 int FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,int *,int ) ;

void
FUNC_6(struct cam_device *VAR_2, int VAR_3, char **VAR_4, char *VAR_5,
  int VAR_6, int VAR_7, int VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11 = -1, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 0, VAR_16 = 10, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

 while ((VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5)) != -1) {
  switch(VAR_10) {
  case '6':
   VAR_16 = 6;
   break;
  case 'b':
   VAR_15 = 1;
   break;
  case 'd':
   VAR_17 = 1;
   break;
  case 'e':
   VAR_19 = 1;
   break;
  case 'l':
   VAR_20++;
   break;
  case 'm':
   VAR_9 = VAR_1;
   FUNC_4(&VAR_9, ",");
   VAR_11 = FUNC_5(VAR_1, ((void*)0), 0);
   if (VAR_9)
       VAR_12 = FUNC_5(VAR_9, ((void*)0), 0);
   if (VAR_11 < 0 || VAR_11 > 0x3f)
    FUNC_0(1, "invalid mode page %d", VAR_11);
   if (VAR_12 < 0 || VAR_12 > 0xff)
    FUNC_0(1, "invalid mode subpage %d", VAR_12);
   break;
  case 'D':
   VAR_18 = 1;
   break;
  case 'L':
   VAR_14 = 1;
   break;
  case 'P':
   VAR_13 = FUNC_5(VAR_1, ((void*)0), 0);
   if ((VAR_13 < 0) || (VAR_13 > 3))
    FUNC_0(1, "invalid page control field %d", VAR_13);
   break;
  default:
   break;
  }
 }

 if (VAR_18 && VAR_11 == -1)
  VAR_11 = VAR_0;

 if (VAR_11 == -1 && VAR_20 == 0)
  FUNC_0(1, "you must specify a mode page!");

 if (VAR_17 && VAR_18)
  FUNC_0(1, "-d and -D are incompatible!");

 if (VAR_14 && VAR_16 != 10)
  FUNC_0(1, "LLBAA bit is not present in MODE SENSE(6)!");

 if (VAR_20 != 0) {
  FUNC_3(VAR_2, VAR_16, VAR_17, VAR_13, VAR_20 > 1, VAR_6,
      VAR_7, VAR_8);
 } else {
  FUNC_2(VAR_2, VAR_16, VAR_18, VAR_17, VAR_14, VAR_13, VAR_11, VAR_12,
      VAR_19, VAR_15, VAR_6, VAR_7, VAR_8);
 }
}
