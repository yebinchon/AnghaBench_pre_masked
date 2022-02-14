
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct completion {TYPE_1__ wait; int done; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

bool FUNC_2(struct completion *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 1;

 FUNC_0(&VAR_0->wait.lock, VAR_1);
 if (!VAR_0->done)
  VAR_2 = 0;
 FUNC_1(&VAR_0->wait.lock, VAR_1);
 return VAR_2;
}
