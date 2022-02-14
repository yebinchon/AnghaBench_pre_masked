
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct bearer {TYPE_1__ publ; } ;


 int FUNC_0 (struct bearer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct bearer *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->publ.lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->publ.lock);
 if (VAR_1)
  FUNC_3();
}
