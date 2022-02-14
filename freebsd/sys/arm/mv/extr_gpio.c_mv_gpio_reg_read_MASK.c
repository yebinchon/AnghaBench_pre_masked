
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ offset; int bsh; int bst; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_0, uint32_t VAR_1)
{
 struct mv_gpio_softc *VAR_2;
 VAR_2 = (struct mv_gpio_softc *)FUNC_1(VAR_0);

 return (FUNC_0(VAR_2->bst, VAR_2->bsh, VAR_2->offset + VAR_1));
}
