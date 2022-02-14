
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rt1310_gpio_pinmap {scalar_t__ lp_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rt1310_gpio_pinmap* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 const struct rt1310_gpio_pinmap *VAR_5;

 if (VAR_3 > VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_3);

 *VAR_4 = VAR_5->lp_flags;
 return (0);
}
