
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {size_t isrc_irq; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct intr_irqsrc** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (struct intr_irqsrc**) ;

__attribute__((used)) static inline int
FUNC_2(struct intr_irqsrc *VAR_5)
{

 FUNC_0(&VAR_4, VAR_2);

 if (VAR_5->isrc_irq >= FUNC_1(VAR_3))
  return (VAR_0);
 if (VAR_3[VAR_5->isrc_irq] != VAR_5)
  return (VAR_0);

 VAR_3[VAR_5->isrc_irq] = ((void*)0);
 VAR_5->isrc_irq = VAR_1;
 return (0);
}
