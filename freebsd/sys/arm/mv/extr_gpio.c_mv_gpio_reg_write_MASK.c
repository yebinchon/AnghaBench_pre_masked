
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ offset; int bsh; int bst; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct mv_gpio_softc *VAR_3;
 VAR_3 = (struct mv_gpio_softc *)FUNC_1(VAR_0);

 FUNC_0(VAR_3->bst, VAR_3->bsh, VAR_3->offset + VAR_1, VAR_2);
}
