
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;
 scalar_t__ FUNC_3 (int*,char const**,int*,char*,char const*) ;
 int FUNC_4 (char const*,int,char*,int*) ;

int
FUNC_5(device_t VAR_0)
{
 const char *VAR_1, *VAR_2;
 int VAR_3, VAR_4, VAR_5;





 VAR_1 = FUNC_1(VAR_0);
 VAR_3 = 0;
 while ((FUNC_3(&VAR_3, &VAR_2, &VAR_5, "at", VAR_1)) == 0) {
  FUNC_4(VAR_2, VAR_5, "drive", &VAR_5);
  FUNC_2(VAR_0, VAR_2, VAR_5);
 }

 if ((VAR_4 = FUNC_0(VAR_0)) != 0)
  return (VAR_4);
 return (0);
}
