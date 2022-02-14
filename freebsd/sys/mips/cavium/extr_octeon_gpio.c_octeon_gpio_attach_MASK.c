
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_gpio_softc {int gpio_npins; int * busdev; TYPE_3__* gpio_pins; int dev; int * gpio_ih; struct octeon_gpio_softc** gpio_intr_cookies; int ** gpio_irq_res; int * gpio_irq_rid; int gpio_mtx; } ;
struct octeon_gpio_pin {int flags; int pin; scalar_t__ name; } ;
typedef int device_t ;
struct TYPE_4__ {int int_en; scalar_t__ int_type; int rx_xor; int tx_oe; } ;
struct TYPE_5__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_2__ cvmx_gpio_bit_cfgx_t ;
struct TYPE_6__ {scalar_t__ gp_flags; int gp_caps; int gp_pin; int gp_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * FUNC_2 (int ,int ,int *,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int ,struct octeon_gpio_softc**,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ) ;
 struct octeon_gpio_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int FUNC_12 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct octeon_gpio_softc*,TYPE_3__*,int ) ;
 struct octeon_gpio_pin* VAR_14 ;
 int FUNC_14 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_15)
{
 struct octeon_gpio_softc *VAR_16 = FUNC_7(VAR_15);
 struct octeon_gpio_pin *VAR_17;
 cvmx_gpio_bit_cfgx_t VAR_18;

 int VAR_19;

 FUNC_1((FUNC_8(VAR_15) == 0),
     ("octeon_gpio: Only one gpio module supported"));

 FUNC_11(&VAR_16->gpio_mtx, FUNC_6(VAR_15), ((void*)0), VAR_4);

 for ( VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  if ((VAR_16->gpio_irq_res[VAR_19] = FUNC_2(VAR_15,
      VAR_10, &VAR_16->gpio_irq_rid[VAR_19],
      VAR_7 + VAR_19, VAR_7 + VAR_19, 1,
      VAR_9 | VAR_8)) == ((void*)0)) {
   FUNC_9(VAR_15, "unable to allocate IRQ resource\n");
   FUNC_12(VAR_15);
   return (VAR_1);
  }

  VAR_16->gpio_intr_cookies[VAR_19] = VAR_16;
  if ((FUNC_3(VAR_15, VAR_16->gpio_irq_res[VAR_19], VAR_3,
          VAR_12, VAR_13,
      &(VAR_16->gpio_intr_cookies[VAR_19]), &VAR_16->gpio_ih[VAR_19]))) {
   FUNC_9(VAR_15,
       "WARNING: unable to register interrupt handler\n");
   FUNC_12(VAR_15);
   return (VAR_1);
  }
 }

 VAR_16->dev = VAR_15;


 VAR_17 = VAR_14;
 VAR_19 = 0;
 while (VAR_17->name) {
  FUNC_14(VAR_16->gpio_pins[VAR_19].gp_name, VAR_17->name, VAR_2);
  VAR_16->gpio_pins[VAR_19].gp_pin = VAR_17->pin;
  VAR_16->gpio_pins[VAR_19].gp_caps = VAR_0;
  VAR_16->gpio_pins[VAR_19].gp_flags = 0;
  FUNC_13(VAR_16, &VAR_16->gpio_pins[VAR_19], VAR_17->flags);
  VAR_17++;
  VAR_19++;
 }

 VAR_16->gpio_npins = VAR_19;
 if (VAR_11) {
  for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
   VAR_18.u64 = FUNC_4(FUNC_0(VAR_19));
   FUNC_9(VAR_15, "[pin%d] output=%d, invinput=%d, intr=%d, intr_type=%s\n",
       VAR_19, VAR_18.s.tx_oe, VAR_18.s.rx_xor,
       VAR_18.s.int_en, VAR_18.s.int_type ? "rising edge" : "level");
  }
 }
 VAR_16->busdev = FUNC_10(VAR_15);
 if (VAR_16->busdev == ((void*)0)) {
  FUNC_12(VAR_15);
  return (VAR_1);
 }

 return (0);
}
