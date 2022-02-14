
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_irqsrc {scalar_t__ bgi_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct bcm_gpio_irqsrc *VAR_2)
{

 return (VAR_2->bgi_mode == VAR_1 ||
     VAR_2->bgi_mode == VAR_0);
}
