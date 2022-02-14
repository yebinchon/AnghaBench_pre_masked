
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {struct iser_conn* context; } ;
struct TYPE_2__ {int (* ic_error ) (TYPE_1__*) ;} ;
struct iser_conn {TYPE_1__ icl_conn; } ;


 scalar_t__ FUNC_0 (struct iser_conn*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct rdma_cm_id *VAR_0, bool VAR_1)
{
 struct iser_conn *VAR_2 = VAR_0->context;

 if (FUNC_0(VAR_2))
  VAR_2->icl_conn.ic_error(&VAR_2->icl_conn);

}
