
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subchildname ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 const char *VAR_2;
 phandle_t VAR_3;
 char VAR_4[255];

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return (VAR_0);

 if (FUNC_5(VAR_2, "i2s") != 0)
  return (VAR_0);






 VAR_3 = FUNC_0(FUNC_0(FUNC_4(VAR_1)));
 if (VAR_3 != 0 && FUNC_1(VAR_3, "name", VAR_4,
     sizeof(VAR_4)) > 0 && FUNC_5(VAR_4, "lightshow") == 0)
  return (VAR_0);

 FUNC_2(VAR_1, "Apple I2S Audio Controller");

 return (0);
}
