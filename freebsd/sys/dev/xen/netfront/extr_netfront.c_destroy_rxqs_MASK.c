
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int num_queues; int * rxq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct netfront_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++)
  FUNC_0(&VAR_1->rxq[VAR_2]);

 FUNC_1(VAR_1->rxq, VAR_0);
 VAR_1->rxq = ((void*)0);
}
