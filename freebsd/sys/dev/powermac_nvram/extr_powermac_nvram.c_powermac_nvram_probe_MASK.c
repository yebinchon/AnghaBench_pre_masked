
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 const char *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return VAR_0;

 if (FUNC_4(VAR_2, "nvram") != 0)
  return VAR_0;
 if (FUNC_4(VAR_3, "amd-0137") != 0 &&
     !FUNC_3(VAR_1, "nvram,flash"))
  return VAR_0;

 FUNC_0(VAR_1, "Apple NVRAM");
 return 0;
}
