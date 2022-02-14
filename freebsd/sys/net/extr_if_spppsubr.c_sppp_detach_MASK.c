
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ifq_mtx; } ;
struct TYPE_3__ {int ifq_mtx; } ;
struct sppp {int mtx; TYPE_2__ pp_fastq; TYPE_1__ pp_cpq; int pap_my_to_ch; int * ch; int keepalive_callout; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct sppp* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct ifnet *VAR_1)
{
 struct sppp *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_1(FUNC_4(&VAR_2->mtx), ("sppp mutex is not initialized"));


  FUNC_2(&VAR_2->keepalive_callout);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(&VAR_2->ch[VAR_3]);
 }
 FUNC_2(&VAR_2->pap_my_to_ch);

 FUNC_3(&VAR_2->pp_cpq.ifq_mtx);
 FUNC_3(&VAR_2->pp_fastq.ifq_mtx);
 FUNC_3(&VAR_2->mtx);
}
