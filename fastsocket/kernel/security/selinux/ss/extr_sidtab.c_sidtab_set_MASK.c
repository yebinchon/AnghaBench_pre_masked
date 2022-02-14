
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sidtab {int lock; scalar_t__ shutdown; int next_sid; int nel; int htable; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct sidtab *VAR_0, struct sidtab *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_0->htable = VAR_1->htable;
 VAR_0->nel = VAR_1->nel;
 VAR_0->next_sid = VAR_1->next_sid;
 VAR_0->shutdown = 0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
