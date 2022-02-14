
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct completion {TYPE_1__ wait; int done; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct completion *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->wait.lock, VAR_2);
 VAR_1->done++;
 FUNC_0(&VAR_1->wait, VAR_0, 1, 0, ((void*)0));
 FUNC_2(&VAR_1->wait.lock, VAR_2);
}
