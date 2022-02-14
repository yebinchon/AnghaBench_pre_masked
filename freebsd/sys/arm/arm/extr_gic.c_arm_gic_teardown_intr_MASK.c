
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {scalar_t__ isrc_handlers; } ;
struct gic_irqsrc {int gi_flags; int gi_trig; int gi_pol; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_3, struct intr_irqsrc *VAR_4,
    struct resource *VAR_5, struct intr_map_data *VAR_6)
{
 struct gic_irqsrc *VAR_7 = (struct gic_irqsrc *)VAR_4;

 if (VAR_4->isrc_handlers == 0 && (VAR_7->gi_flags & VAR_0) == 0) {
  VAR_7->gi_pol = VAR_1;
  VAR_7->gi_trig = VAR_2;
 }
 return (0);
}
