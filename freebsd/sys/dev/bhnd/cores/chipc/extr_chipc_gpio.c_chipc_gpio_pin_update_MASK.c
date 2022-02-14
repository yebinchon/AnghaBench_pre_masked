
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_update {int dummy; } ;
struct chipc_gpio_softc {int dev; } ;
typedef int chipc_gpio_pin_mode ;





 int FUNC_0 (struct chipc_gpio_update*,int,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct chipc_gpio_softc*,int,int,int*) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_4(struct chipc_gpio_softc *VAR_13,
    struct chipc_gpio_update *VAR_14, uint32_t VAR_15, uint32_t VAR_16)
{
 chipc_gpio_pin_mode VAR_17;
 int VAR_18;

 if (!FUNC_1(VAR_15))
  return (VAR_0);


 if ((VAR_18 = FUNC_2(VAR_13, VAR_15, VAR_16, &VAR_17)))
  return (VAR_18);


 switch (VAR_17) {
 case 130:
  FUNC_0(VAR_14, VAR_15, VAR_11, 0);
  FUNC_0(VAR_14, VAR_15, VAR_10, 0);
  FUNC_0(VAR_14, VAR_15, VAR_8, 0);
  FUNC_0(VAR_14, VAR_15, VAR_9, 0);
  FUNC_0(VAR_14, VAR_15, VAR_12, 0);
  FUNC_0(VAR_14, VAR_15, VAR_7, 0);

  if (VAR_16 & VAR_5) {
   FUNC_0(VAR_14, VAR_15, VAR_11, 1);
  } else if (VAR_16 & VAR_4) {
   FUNC_0(VAR_14, VAR_15, VAR_10, 1);
  }

  return (0);

 case 129:
  FUNC_0(VAR_14, VAR_15, VAR_11, 0);
  FUNC_0(VAR_14, VAR_15, VAR_10, 0);
  FUNC_0(VAR_14, VAR_15, VAR_9, 1);
  FUNC_0(VAR_14, VAR_15, VAR_12, 0);
  FUNC_0(VAR_14, VAR_15, VAR_7, 0);

  if (VAR_16 & VAR_2) {
   FUNC_0(VAR_14, VAR_15, VAR_8, 1);
  } else if (VAR_16 & VAR_3) {
   FUNC_0(VAR_14, VAR_15, VAR_8, 0);
  }

  if (VAR_16 & VAR_6)
   FUNC_0(VAR_14, VAR_15, VAR_12, 1);

  return (0);

 case 128:
  FUNC_0(VAR_14, VAR_15, VAR_11, 0);
  FUNC_0(VAR_14, VAR_15, VAR_10, 0);
  FUNC_0(VAR_14, VAR_15, VAR_8, 0);
  FUNC_0(VAR_14, VAR_15, VAR_9, 0);
  FUNC_0(VAR_14, VAR_15, VAR_12, 0);
  FUNC_0(VAR_14, VAR_15, VAR_7, 1);

  if (VAR_16 & VAR_1)
   FUNC_0(VAR_14, VAR_15, VAR_9, 1);

  return (0);
 }

 FUNC_3(VAR_13->dev, "unknown pin mode %d\n", VAR_17);
 return (VAR_0);
}
