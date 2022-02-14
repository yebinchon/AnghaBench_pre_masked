
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_bearer {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ blocked; } ;
struct bearer {TYPE_1__ publ; int cong_links; int continue_count; } ;
typedef int Handler ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct tipc_bearer *VAR_1)
{
 struct bearer *VAR_2 = (struct bearer *)VAR_1;

 FUNC_1(&VAR_2->publ.lock);
 VAR_2->continue_count++;
 if (!FUNC_0(&VAR_2->cong_links))
  FUNC_3((Handler)VAR_0, (unsigned long)VAR_2);
 VAR_2->publ.blocked = 0;
 FUNC_2(&VAR_2->publ.lock);
}
