
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int raw_lock; } ;
typedef TYPE_1__ spinlock_t ;


 int FUNC_0 (int,TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(spinlock_t *VAR_0)
{
 int VAR_1 = FUNC_1(&VAR_0->raw_lock);

 if (VAR_1)
  FUNC_2(VAR_0);




 FUNC_0(!VAR_1, VAR_0, "trylock failure on UP");

 return VAR_1;
}
