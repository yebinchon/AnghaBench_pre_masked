
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_pic_softc {scalar_t__ nirqs; } ;
struct intr_map_data_mips_pic {scalar_t__ irq; } ;
struct intr_map_data_fdt {int ncells; scalar_t__* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct intr_irqsrc* FUNC_0 (struct mips_pic_softc*,scalar_t__) ;
 struct mips_pic_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, struct intr_map_data *VAR_5,
    struct intr_irqsrc **VAR_6)
{
 struct mips_pic_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 VAR_8 = 0;
 if (VAR_5->type == VAR_3) {
  struct intr_map_data_mips_pic *VAR_9;

  VAR_9 = (struct intr_map_data_mips_pic *)VAR_5;

  if (VAR_9->irq < 0 || VAR_9->irq >= VAR_7->nirqs)
   return (VAR_0);

  *VAR_6 = FUNC_0(VAR_7, VAR_9->irq);
 } else {
  VAR_8 = VAR_1;
 }

 return (VAR_8);
}
