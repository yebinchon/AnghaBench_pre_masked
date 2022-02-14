
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rds_incoming {TYPE_2__* i_conn; int i_item; int i_refcount; } ;
struct TYPE_4__ {TYPE_1__* c_trans; } ;
struct TYPE_3__ {int (* inc_free ) (struct rds_incoming*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct rds_incoming*,int ) ;
 int FUNC_5 (struct rds_incoming*) ;

void FUNC_6(struct rds_incoming *VAR_0)
{
 FUNC_4("put inc %p ref %d\n", VAR_0, FUNC_2(&VAR_0->i_refcount));
 if (FUNC_1(&VAR_0->i_refcount)) {
  FUNC_0(!FUNC_3(&VAR_0->i_item));

  VAR_0->i_conn->c_trans->inc_free(VAR_0);
 }
}
