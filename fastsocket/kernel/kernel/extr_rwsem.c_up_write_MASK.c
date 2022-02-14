
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int dep_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct rw_semaphore*) ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(struct rw_semaphore *VAR_1)
{
 FUNC_1(&VAR_1->dep_map, 1, VAR_0);

 FUNC_0(VAR_1);
}
