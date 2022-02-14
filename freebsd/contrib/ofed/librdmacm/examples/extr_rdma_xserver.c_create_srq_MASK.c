
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int max_wr; int max_sge; scalar_t__ srq_limit; } ;
struct ibv_srq_init_attr {TYPE_2__* srq_context; TYPE_1__ attr; } ;
struct TYPE_5__ {scalar_t__ srq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int *,struct ibv_srq_init_attr*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct ibv_srq_init_attr VAR_2;
 int VAR_3;
 uint32_t VAR_4;

 VAR_2.attr.max_wr = 1;
 VAR_2.attr.max_sge = 1;
 VAR_2.attr.srq_limit = 0;
 VAR_2.srq_context = VAR_0;

 VAR_3 = FUNC_3(VAR_0, ((void*)0), &VAR_2);
 if (VAR_3)
  FUNC_2("rdma_create_srq:");

 if (VAR_0->srq) {
  FUNC_1(VAR_0->srq, &VAR_4);
  VAR_1 = FUNC_0(VAR_4);
 }
 return VAR_3;
}
