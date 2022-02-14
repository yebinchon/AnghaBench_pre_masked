
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_gpio_softc {int mem_res; int mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct chipc_gpio_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct chipc_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct chipc_gpio_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2);

 if ((VAR_4 = FUNC_3(VAR_2)))
  return (VAR_4);

 if ((VAR_4 = FUNC_1(VAR_2, VAR_0)))
  return (VAR_4);

 FUNC_2(VAR_2, VAR_1, VAR_3->mem_rid, VAR_3->mem_res);
 FUNC_0(VAR_3);

 return (0);
}
