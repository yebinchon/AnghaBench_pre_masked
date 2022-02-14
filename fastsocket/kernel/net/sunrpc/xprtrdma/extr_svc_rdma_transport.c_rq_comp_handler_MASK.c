
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refcount; } ;
struct TYPE_4__ {TYPE_1__ xpt_ref; } ;
struct svcxprt_rdma {int sc_dto_q; TYPE_2__ sc_xprt; int sc_flags; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ib_cq *VAR_4, void *VAR_5)
{
 struct svcxprt_rdma *VAR_6 = VAR_5;
 unsigned long VAR_7;


 if (FUNC_0(&VAR_6->sc_xprt.xpt_ref.refcount)==0)
  return;






 FUNC_3(VAR_0, &VAR_6->sc_flags);





 FUNC_4(&VAR_1, VAR_7);
 if (FUNC_2(&VAR_6->sc_dto_q)) {
  FUNC_6(&VAR_6->sc_xprt);
  FUNC_1(&VAR_6->sc_dto_q, &VAR_3);
 }
 FUNC_5(&VAR_1, VAR_7);


 FUNC_7(&VAR_2);
}
