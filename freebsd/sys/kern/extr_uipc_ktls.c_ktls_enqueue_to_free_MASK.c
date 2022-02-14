
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf_ext_pgs {TYPE_1__* tls; int * mbuf; } ;
struct ktls_wq {int running; int mtx; int head; } ;
struct TYPE_2__ {size_t wq_index; } ;


 int FUNC_0 (int *,struct mbuf_ext_pgs*,int ) ;
 struct ktls_wq* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct ktls_wq*) ;

void
FUNC_4(struct mbuf_ext_pgs *VAR_2)
{
 struct ktls_wq *VAR_3;
 bool VAR_4;


 VAR_2->mbuf = ((void*)0);
 VAR_3 = &VAR_0[VAR_2->tls->wq_index];
 FUNC_1(&VAR_3->mtx);
 FUNC_0(&VAR_3->head, VAR_2, VAR_1);
 VAR_4 = VAR_3->running;
 FUNC_2(&VAR_3->mtx);
 if (!VAR_4)
  FUNC_3(VAR_3);
}
