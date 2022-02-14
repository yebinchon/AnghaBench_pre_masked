
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_gpio_softc {void** gpio_intr_cookies; } ;
struct TYPE_3__ {scalar_t__ int_type; scalar_t__ int_en; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gpio_bit_cfgx_t ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 cvmx_gpio_bit_cfgx_t VAR_5;
 void **VAR_6 = VAR_4;
 struct octeon_gpio_softc *VAR_7 = *VAR_6;
 long int VAR_8 = (VAR_6 - VAR_7->gpio_intr_cookies);

 if ((VAR_8 < 0) || (VAR_8 >= VAR_2))
  return (VAR_1);

 VAR_5.u64 = FUNC_2(FUNC_0(VAR_8));

 if (VAR_5.s.int_type == VAR_3)
  FUNC_1(1 << VAR_8);

 VAR_5.s.int_en = 0;
 FUNC_3(FUNC_0(VAR_8), VAR_5.u64);

 return (VAR_0);
}
