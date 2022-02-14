
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char const*,int*,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, const char *VAR_1)
{
 uint8_t VAR_2[2];




 if (FUNC_0(VAR_0, VAR_1, VAR_2, sizeof VAR_2) < 0)
  return (-1);

 return (VAR_2[0]);
}
