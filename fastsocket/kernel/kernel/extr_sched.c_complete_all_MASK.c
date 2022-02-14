
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct completion {int done; TYPE_1__ wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct completion *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->wait.lock, VAR_3);
 VAR_2->done += VAR_1/2;
 FUNC_0(&VAR_2->wait, VAR_0, 0, 0, ((void*)0));
 FUNC_2(&VAR_2->wait.lock, VAR_3);
}
