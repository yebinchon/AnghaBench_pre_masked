
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int kill_takers; int signal; scalar_t__ flags; scalar_t__ rw; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *,int ) ;

void FUNC_1(struct ttm_lock *VAR_2)
{
 FUNC_0(&VAR_2->lock, "ttmlk", ((void*)0), VAR_0);
 VAR_2->rw = 0;
 VAR_2->flags = 0;
 VAR_2->kill_takers = 0;
 VAR_2->signal = VAR_1;
}
