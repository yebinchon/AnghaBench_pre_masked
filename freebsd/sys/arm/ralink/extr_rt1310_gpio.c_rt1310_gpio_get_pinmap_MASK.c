
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt1310_gpio_pinmap {int lp_start_idx; int lp_pin_count; } ;


 int FUNC_0 (char*,int) ;
 struct rt1310_gpio_pinmap* VAR_0 ;

__attribute__((used)) static const struct rt1310_gpio_pinmap *
FUNC_1(int VAR_1)
{
 const struct rt1310_gpio_pinmap *VAR_2;

 for (VAR_2 = &VAR_0[0]; VAR_2->lp_start_idx != -1; VAR_2++) {
  if (VAR_1 >= VAR_2->lp_start_idx &&
      VAR_1 < VAR_2->lp_start_idx + VAR_2->lp_pin_count)
   return VAR_2;
 }

 FUNC_0("pin number %d out of range", VAR_1);
}
