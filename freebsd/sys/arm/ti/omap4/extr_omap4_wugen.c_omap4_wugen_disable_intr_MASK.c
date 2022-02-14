
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_wugen_sc {int sc_parent; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct intr_irqsrc*) ;
 struct omap4_wugen_sc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct intr_irqsrc *VAR_1)
{
 struct omap4_wugen_sc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->sc_parent, VAR_1);
}
