
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
struct gic_v3_irqsrc {int gi_trig; int gi_pol; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_2, struct intr_irqsrc *VAR_3,
    struct resource *VAR_4, struct intr_map_data *VAR_5)
{
 struct gic_v3_irqsrc *VAR_6 = (struct gic_v3_irqsrc *)VAR_3;

 if (VAR_3->isrc_handlers == 0) {
  VAR_6->gi_pol = VAR_0;
  VAR_6->gi_trig = VAR_1;
 }

 return (0);
}
