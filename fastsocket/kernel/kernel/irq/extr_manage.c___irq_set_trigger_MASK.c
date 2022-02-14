
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned long status; struct irq_chip* chip; } ;
struct irq_chip {int (* set_type ) (unsigned int,unsigned long) ;scalar_t__ name; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,unsigned int,char*) ;
 int FUNC_1 (char*,int,unsigned int,int (*) (unsigned int,unsigned long)) ;
 int FUNC_2 (unsigned int,unsigned long) ;

int FUNC_3(struct irq_desc *VAR_4, unsigned int VAR_5,
  unsigned long VAR_6)
{
 int VAR_7;
 struct irq_chip *VAR_8 = VAR_4->chip;

 if (!VAR_8 || !VAR_8->set_type) {




  FUNC_0("No set_type function for IRQ %d (%s)\n", VAR_5,
    VAR_8 ? (VAR_8->name ? : "unknown") : "unknown");
  return 0;
 }


 VAR_7 = VAR_8->set_type(VAR_5, VAR_6);

 if (VAR_7)
  FUNC_1("setting trigger mode %d for irq %u failed (%pF)\n",
    (int)VAR_6, VAR_5, VAR_8->set_type);
 else {
  if (VAR_6 & (VAR_2 | VAR_1))
   VAR_6 |= VAR_0;

  VAR_4->status &= ~(VAR_0 | VAR_3);
  VAR_4->status |= VAR_6;
 }

 return VAR_7;
}
