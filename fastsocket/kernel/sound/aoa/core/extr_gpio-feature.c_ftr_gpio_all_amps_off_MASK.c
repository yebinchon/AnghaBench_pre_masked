
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_runtime {int implementation_private; } ;
struct TYPE_2__ {scalar_t__ set_master; } ;


 int FUNC_0 (struct gpio_runtime*,int ) ;
 int FUNC_1 (struct gpio_runtime*,int ) ;
 int FUNC_2 (struct gpio_runtime*,int ) ;
 int FUNC_3 (struct gpio_runtime*,int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct gpio_runtime *VAR_1)
{
 int VAR_2;

 if (FUNC_4(!VAR_1)) return;
 VAR_2 = VAR_1->implementation_private;
 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1, 0);
 FUNC_2(VAR_1, 0);
 if (VAR_0.set_master)
  FUNC_3(VAR_1, 0);
 VAR_1->implementation_private = VAR_2;
}
