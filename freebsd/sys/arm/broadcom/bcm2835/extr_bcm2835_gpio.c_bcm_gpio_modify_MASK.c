
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_gpio_softc {int dummy; } ;


 int FUNC_0 (struct bcm_gpio_softc*,int ,int ) ;
 int FUNC_1 (struct bcm_gpio_softc*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct bcm_gpio_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    bool VAR_3)
{

 if (VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
