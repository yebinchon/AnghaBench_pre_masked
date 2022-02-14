
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int isrc_dev; } ;


 int FUNC_0 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct intr_irqsrc *VAR_1 = VAR_0;

 FUNC_0(VAR_1->isrc_dev, VAR_1);
}
