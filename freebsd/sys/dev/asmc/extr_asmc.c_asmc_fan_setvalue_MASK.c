
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int fankey ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (char*,int,char const*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
 uint8_t VAR_4[2];
 char VAR_5[5];

 VAR_3 *= 4;

 VAR_4[0] = VAR_3>>8;
 VAR_4[1] = VAR_3;

 FUNC_1(VAR_5, sizeof(VAR_5), VAR_1, VAR_2);
 if (FUNC_0(VAR_0, VAR_5, VAR_4, sizeof VAR_4) < 0)
  return (-1);

 return (0);
}
