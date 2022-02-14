
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dat; } ;
struct TYPE_4__ {TYPE_1__ s; int u64; } ;
typedef TYPE_2__ cvmx_gpio_rx_dat_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t FUNC_1(void)
{
    cvmx_gpio_rx_dat_t VAR_1;
    VAR_1.u64 = FUNC_0(VAR_0);
    return VAR_1.s.dat;
}
