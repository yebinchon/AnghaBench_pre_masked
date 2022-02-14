
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upd ;
typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct chipc_gpio_update {int dummy; } ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct chipc_gpio_softc*,int ) ;
 int FUNC_2 (struct chipc_gpio_softc*) ;
 int FUNC_3 (struct chipc_gpio_update*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (struct chipc_gpio_softc*,struct chipc_gpio_update*) ;
 struct chipc_gpio_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct chipc_gpio_update*,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, uint32_t *VAR_9)
{
 struct chipc_gpio_softc *VAR_10;
 struct chipc_gpio_update VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_10 = FUNC_7(VAR_5);

 if (VAR_6 >= VAR_0)
  return (VAR_4);


 if (VAR_7 == 0 && VAR_8 == 0) {
  VAR_15 = VAR_0 - VAR_6;
 } else {
  int VAR_17, VAR_18;

  VAR_17 = FUNC_8((u_long)VAR_7);
  VAR_18 = FUNC_8((u_long)VAR_8);
  VAR_15 = FUNC_5(VAR_17, VAR_18);
 }


 if (!FUNC_4(VAR_6, VAR_15))
  return (VAR_4);



 FUNC_0(VAR_10);
 FUNC_9(&VAR_11, 0, sizeof(VAR_11));

 VAR_12 = FUNC_1(VAR_10, VAR_2);
 VAR_13 = FUNC_1(VAR_10, VAR_3);
 VAR_14 = FUNC_1(VAR_10, VAR_1);

 for (uint32_t VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  uint32_t VAR_20;
  bool VAR_21;

  VAR_20 = VAR_6 + VAR_19;


  if ((VAR_13 & (1 << VAR_20)) == 0) {
   FUNC_2(VAR_10);
   return (VAR_4);
  }


  if ((VAR_14 & (1 << VAR_20)) != 0) {
   FUNC_2(VAR_10);
   return (VAR_4);
  }


  if (VAR_12 & (1 << VAR_20)) {
   VAR_21 = 1;
  } else {
   VAR_21 = 0;
  }


  if (VAR_7 & (1 << VAR_20))
   VAR_21 = 0;

  if (VAR_8 & (1 << VAR_20))
   VAR_21 = !VAR_21;


  FUNC_3(&VAR_11, VAR_20, VAR_12, VAR_21);
 }


 VAR_16 = FUNC_6(VAR_10, &VAR_11);
 FUNC_2(VAR_10);

 return (VAR_16);
}
