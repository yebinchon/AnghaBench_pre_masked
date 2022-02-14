
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbns_rq {scalar_t__ nr_fd; int nr_rp; int nr_rq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nbns_rq*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nbns_rq *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->nr_fd >= 0)
  FUNC_0(VAR_0->nr_fd);
 FUNC_2(&VAR_0->nr_rq);
 FUNC_2(&VAR_0->nr_rp);
 FUNC_1(VAR_0);
}
