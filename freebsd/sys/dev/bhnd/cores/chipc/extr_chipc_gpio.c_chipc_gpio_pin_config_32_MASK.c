
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upd ;
typedef size_t uint32_t ;
struct chipc_gpio_update {int dummy; } ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;
 int FUNC_1 (struct chipc_gpio_softc*) ;
 int FUNC_2 (size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct chipc_gpio_softc*,struct chipc_gpio_update*) ;
 int FUNC_4 (struct chipc_gpio_softc*,struct chipc_gpio_update*,size_t,size_t) ;
 struct chipc_gpio_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct chipc_gpio_update*,int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
    uint32_t *VAR_6)
{
 struct chipc_gpio_softc *VAR_7;
 struct chipc_gpio_update VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(VAR_3);

 if (!FUNC_2(VAR_4, VAR_5))
  return (VAR_0);


 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 for (uint32_t VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  uint32_t VAR_11, VAR_12;

  VAR_11 = VAR_4 + VAR_10;
  VAR_12 = VAR_6[VAR_10];




  if ((VAR_12 & (VAR_2|VAR_1)) == 0)
   continue;

  if ((VAR_9 = FUNC_4(VAR_7, &VAR_8, VAR_11, VAR_12)))
   return (VAR_9);
 }


 FUNC_0(VAR_7);
 VAR_9 = FUNC_3(VAR_7, &VAR_8);
 FUNC_1(VAR_7);

 return (VAR_9);
}
