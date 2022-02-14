
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_gpio_irqsrc {scalar_t__ tgi_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct ti_gpio_irqsrc *VAR_2)
{

 return (VAR_2->tgi_mode == VAR_1 ||
     VAR_2->tgi_mode == VAR_0);
}
