
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct intr_irqsrc {size_t isrc_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct intr_irqsrc** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (struct intr_irqsrc**) ;

__attribute__((used)) static inline int
FUNC_2(struct intr_irqsrc *VAR_5)
{
 u_int VAR_6, VAR_7;

 FUNC_0(&VAR_4, VAR_1);

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_2 >= VAR_6)
  return (VAR_0);

 for (VAR_7 = VAR_2; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_3[VAR_7] == ((void*)0))
   goto found;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3[VAR_7] == ((void*)0))
   goto found;
 }

 VAR_2 = VAR_6;
 return (VAR_0);

found:
 VAR_5->isrc_irq = VAR_7;
 VAR_3[VAR_7] = VAR_5;

 VAR_2 = VAR_7 + 1;
 if (VAR_2 >= VAR_6)
  VAR_2 = 0;
 return (0);
}
