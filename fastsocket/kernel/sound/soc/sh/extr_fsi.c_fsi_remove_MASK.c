
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int base; int irq; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 FUNC_6(VAR_0, FUNC_0(VAR_0));
 FUNC_7(&VAR_1);

 FUNC_1(VAR_2->clk);

 FUNC_3();

 FUNC_2(VAR_2->irq, VAR_2);

 FUNC_4(VAR_2->base);
 FUNC_5(VAR_2);
 VAR_2 = ((void*)0);
 return 0;
}
