
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ nwaiters; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 sem_t *VAR_1 = VAR_0;

 FUNC_1(&(*VAR_1)->nwaiters, -1);
 if ((*VAR_1)->nwaiters && (*VAR_1)->count)
  FUNC_0(&(*VAR_1)->count);
}
