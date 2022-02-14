
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct octeon_gpio_softc {int dummy; } ;
struct gpio_pin {int gp_pin; unsigned int gp_flags; } ;
struct TYPE_3__ {int tx_oe; int rx_xor; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gpio_bit_cfgx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_gpio_softc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct octeon_gpio_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct octeon_gpio_softc *VAR_3, struct gpio_pin *VAR_4,
    unsigned int VAR_5)
{
 uint32_t VAR_6;
 cvmx_gpio_bit_cfgx_t VAR_7;

 VAR_6 = 1 << VAR_4->gp_pin;
 FUNC_1(VAR_3);




 if (VAR_5 & (VAR_0|VAR_2)) {
  VAR_7.u64 = FUNC_3(FUNC_0(VAR_4->gp_pin));
  VAR_4->gp_flags &= ~(VAR_0|VAR_2);
  if (VAR_5 & VAR_2) {
   VAR_4->gp_flags |= VAR_2;
   VAR_7.s.tx_oe = 1;
  }
  else {
   VAR_4->gp_flags |= VAR_0;
   VAR_7.s.tx_oe = 0;
  }
  if (VAR_5 & VAR_1)
   VAR_7.s.rx_xor = 1;
  else
   VAR_7.s.rx_xor = 0;
  FUNC_4(FUNC_0(VAR_4->gp_pin), VAR_7.u64);
 }

 FUNC_2(VAR_3);
}
