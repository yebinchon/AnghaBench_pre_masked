
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intr_map_data_msi {scalar_t__ isrc; } ;
struct gic_irqsrc {int gi_irq; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_3, struct intr_map_data_msi *VAR_4, u_int *VAR_5,
    enum intr_polarity *VAR_6, enum intr_trigger *VAR_7)
{
 struct gic_irqsrc *VAR_8;


 VAR_8 = (struct gic_irqsrc *)VAR_4->isrc;
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 *VAR_5 = VAR_8->gi_irq;


 *VAR_6 = VAR_1;
 *VAR_7 = VAR_2;

 return (0);
}
