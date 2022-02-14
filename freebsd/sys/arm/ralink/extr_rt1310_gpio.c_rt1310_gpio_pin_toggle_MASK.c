
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt1310_gpio_pinmap {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct rt1310_gpio_pinmap* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t VAR_4)
{
 const struct rt1310_gpio_pinmap *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_3, VAR_4, &VAR_6))
  return (VAR_1);

 if ((VAR_6 & VAR_2) == 0)
  return (VAR_0);

 FUNC_0("not implemented yet");

 return (0);

}
