
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_devres {unsigned int member_0; void* member_1; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct irq_devres*) ;
 int FUNC_2 (unsigned int,void*) ;

void FUNC_3(struct device *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct irq_devres VAR_5 = { VAR_3, VAR_4 };

 FUNC_2(VAR_3, VAR_4);
 FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_0,
          &VAR_5));
}
