
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int clr; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gpio_tx_clr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(uint32_t VAR_1)
{
    cvmx_gpio_tx_clr_t VAR_2;
    VAR_2.u64 = 0;
    VAR_2.s.clr = VAR_1;
    FUNC_0(VAR_0, VAR_2.u64);
}
