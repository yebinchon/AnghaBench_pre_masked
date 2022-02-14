
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int isrc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct intr_irqsrc*) ;
 int FUNC_1 (struct intr_irqsrc*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct intr_irqsrc *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1);
 if ((VAR_2->isrc_flags & VAR_0) == 0)
  FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(&VAR_1);
 return (VAR_3);
}
