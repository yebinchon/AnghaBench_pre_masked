
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int dummy; } ;
typedef int dev_name ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int,int*) ;
 struct cam_device* FUNC_1 (char*,int,int,char const*,int *) ;

struct cam_device *
FUNC_2(const char *VAR_1, int VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0 + 1];





 if (FUNC_0(VAR_1, VAR_4, sizeof(VAR_4), &VAR_3) == -1)
  return(((void*)0));

 return(FUNC_1(VAR_4, VAR_3, VAR_2, VAR_1, ((void*)0)));
}
