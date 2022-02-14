
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_work {scalar_t__ next; } ;



__attribute__((used)) static inline bool FUNC_0(struct irq_work *VAR_0, int VAR_1)
{
 return (unsigned long)VAR_0->next & VAR_1;
}
