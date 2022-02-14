
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {TYPE_1__* xport; } ;
typedef TYPE_2__ ocs_t ;
struct TYPE_14__ {int sgl_allocated; int els_rsp; int els_req; int rspbuf; int cmdbuf; TYPE_4__* sgl; } ;
typedef TYPE_3__ ocs_io_t ;
struct TYPE_15__ {scalar_t__ io_num_ios; int lock; int * pool; TYPE_2__* ocs; } ;
typedef TYPE_4__ ocs_io_pool_t ;
typedef int int32_t ;
struct TYPE_12__ {int * io_pool; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

int32_t
FUNC_7(ocs_io_pool_t *VAR_0)
{
 ocs_t *VAR_1;
 uint32_t VAR_2;
 ocs_io_t *VAR_3;

 if (VAR_0 != ((void*)0)) {
  VAR_1 = VAR_0->ocs;
  for (VAR_2 = 0; VAR_2 < VAR_0->io_num_ios; VAR_2++) {
   VAR_3 = FUNC_4(VAR_0->pool, VAR_2);
   if (!VAR_3)
    continue;
   FUNC_6(VAR_3);
   FUNC_5(VAR_3);
   if (VAR_3->sgl) {
    FUNC_1(VAR_1, VAR_3->sgl, sizeof(*VAR_3->sgl) * VAR_3->sgl_allocated);
   }
   FUNC_0(VAR_1, &VAR_3->cmdbuf);
   FUNC_0(VAR_1, &VAR_3->rspbuf);
   FUNC_0(VAR_1, &VAR_3->els_req);
   FUNC_0(VAR_1, &VAR_3->els_rsp);
  }

  if (VAR_0->pool != ((void*)0)) {
   FUNC_3(VAR_0->pool);
  }
  FUNC_2(&VAR_0->lock);
  FUNC_1(VAR_1, VAR_0, sizeof(*VAR_0));
  VAR_1->xport->io_pool = ((void*)0);
 }

 return 0;
}
