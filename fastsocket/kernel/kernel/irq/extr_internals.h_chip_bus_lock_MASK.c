
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* bus_lock ) (unsigned int) ;} ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int (*) (unsigned int)) ;

__attribute__((used)) static inline void FUNC_2(unsigned int VAR_0, struct irq_desc *VAR_1)
{
 if (FUNC_1(VAR_1->chip->bus_lock))
  VAR_1->chip->bus_lock(VAR_0);
}
