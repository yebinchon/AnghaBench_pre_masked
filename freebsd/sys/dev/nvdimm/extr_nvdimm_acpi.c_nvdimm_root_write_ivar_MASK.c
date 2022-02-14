
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4,
    uintptr_t VAR_5)
{

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return (VAR_0);
 ((uintptr_t *)FUNC_0(VAR_3))[VAR_4] = VAR_5;
 return (0);
}
