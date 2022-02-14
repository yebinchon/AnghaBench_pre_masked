
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_irqsrc {int isrc_flags; int * isrc_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void
FUNC_1(struct intr_irqsrc *VAR_1)
{

 if (VAR_1->isrc_flags & VAR_0)
  FUNC_0(&VAR_1->isrc_count[0], 1);
 else
  VAR_1->isrc_count[0]++;
}
