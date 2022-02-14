
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upd ;
typedef int uint32_t ;
struct chipc_gpio_update {int dummy; } ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;
 int FUNC_1 (struct chipc_gpio_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct chipc_gpio_softc*,struct chipc_gpio_update*) ;
 int FUNC_4 (struct chipc_gpio_softc*,struct chipc_gpio_update*,int ,int ) ;
 struct chipc_gpio_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct chipc_gpio_update*,int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct chipc_gpio_softc *VAR_4;
 struct chipc_gpio_update VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1);

 if (!FUNC_2(VAR_2))
  return (VAR_0);


 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 if ((VAR_6 = FUNC_4(VAR_4, &VAR_5, VAR_2, VAR_3)))
  return (VAR_6);


 FUNC_0(VAR_4);
 VAR_6 = FUNC_3(VAR_4, &VAR_5);
 FUNC_1(VAR_4);

 return (VAR_6);
}
