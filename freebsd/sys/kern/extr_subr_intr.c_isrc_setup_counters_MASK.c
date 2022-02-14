
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct intr_irqsrc {size_t isrc_index; int * isrc_count; } ;


 size_t FUNC_0 (int *,int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intr_irqsrc*,int *) ;

__attribute__((used)) static void
FUNC_2(struct intr_irqsrc *VAR_2)
{
 u_int VAR_3;





 VAR_3 = FUNC_0(&VAR_1, 2);
 VAR_2->isrc_index = VAR_3;
 VAR_2->isrc_count = &VAR_0[VAR_3];
 FUNC_1(VAR_2, ((void*)0));
}
