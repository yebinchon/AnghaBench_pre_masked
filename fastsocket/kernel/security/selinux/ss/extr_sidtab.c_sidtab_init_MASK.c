
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sidtab {int next_sid; int lock; scalar_t__ shutdown; scalar_t__ nel; int ** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct sidtab *VAR_3)
{
 int VAR_4;

 VAR_3->htable = FUNC_0(sizeof(*(VAR_3->htable)) * VAR_2, VAR_1);
 if (!VAR_3->htable)
  return -VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->htable[VAR_4] = ((void*)0);
 VAR_3->nel = 0;
 VAR_3->next_sid = 1;
 VAR_3->shutdown = 0;
 FUNC_1(&VAR_3->lock);
 return 0;
}
