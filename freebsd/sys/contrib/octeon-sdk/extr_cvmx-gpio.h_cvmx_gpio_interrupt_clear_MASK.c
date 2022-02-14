
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ en; } ;
struct TYPE_13__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_5__ cvmx_gpio_multi_cast_t ;
struct TYPE_12__ {int type; } ;
struct TYPE_14__ {int u64; TYPE_4__ s; } ;
typedef TYPE_6__ cvmx_gpio_int_clr_t ;
struct TYPE_10__ {scalar_t__ int_type; scalar_t__ int_en; } ;
struct TYPE_15__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_7__ cvmx_gpio_bit_cfgx_t ;
struct TYPE_11__ {int gpio; } ;
struct TYPE_16__ {int u64; TYPE_3__ s; } ;
typedef TYPE_8__ cvmx_ciu_intx_sum0_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static inline void FUNC_6(uint16_t VAR_3)
{
    if (FUNC_2(VAR_2))
    {
        cvmx_gpio_multi_cast_t VAR_4;
        cvmx_gpio_bit_cfgx_t VAR_5;
        int VAR_6 = FUNC_3();

        VAR_4.u64 = FUNC_4(VAR_1);
        VAR_5.u64 = FUNC_4(FUNC_1(VAR_6));



        if (VAR_4.s.en && VAR_5.s.int_en && VAR_5.s.int_type)
        {

            cvmx_ciu_intx_sum0_t VAR_7;
            VAR_7 = FUNC_4(FUNC_0(VAR_6 * 2));
            VAR_7 = VAR_3 & 0xf0;
            FUNC_5(FUNC_0(VAR_6 * 2), VAR_7);


            FUNC_5(VAR_0, (VAR_3 & ~0xf0));
            return;
        }
    }

    cvmx_gpio_int_clr_t VAR_8;
    VAR_8.u64 = 0;
    VAR_8.s.type = VAR_3;
    FUNC_5(VAR_0, VAR_8.u64);
}
