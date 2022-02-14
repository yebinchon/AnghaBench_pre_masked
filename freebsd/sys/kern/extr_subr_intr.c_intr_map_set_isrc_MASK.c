
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct intr_irqsrc {int dummy; } ;
struct TYPE_2__ {struct intr_irqsrc* isrc; } ;


 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_3, struct intr_irqsrc *VAR_4)
{

 FUNC_0(&VAR_2);
 if ((VAR_3 >= VAR_1) || (VAR_0[VAR_3] == ((void*)0))) {
  FUNC_1(&VAR_2);
  return;
 }
 VAR_0[VAR_3]->isrc = VAR_4;
 FUNC_1(&VAR_2);
}
