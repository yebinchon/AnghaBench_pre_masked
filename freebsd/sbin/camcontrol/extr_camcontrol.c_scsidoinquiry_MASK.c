
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cam_device*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (struct cam_device*,int,int,int) ;
 int FUNC_3 (struct cam_device*,int,int,int) ;

int
FUNC_4(struct cam_device *VAR_5, int VAR_6, char **VAR_7,
       char *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;

 while ((VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8)) != -1) {
  switch(VAR_12) {
  case 'D':
   VAR_4 |= VAR_1;
   break;
  case 'R':
   VAR_4 |= VAR_2;
   break;
  case 'S':
   VAR_4 |= VAR_0;
   break;
  default:
   break;
  }
 }





 if ((VAR_4 & VAR_3) == 0)
  VAR_4 |= VAR_3;

 if (VAR_4 & VAR_1)
  VAR_13 = FUNC_2(VAR_5, VAR_9, VAR_10, VAR_11);

 if (VAR_13 != 0)
  return (VAR_13);

 if (VAR_4 & VAR_0)
  FUNC_3(VAR_5, VAR_9, VAR_10, VAR_11);

 if (VAR_4 & VAR_2)
  VAR_13 = FUNC_0(VAR_5);

 return (VAR_13);
}
