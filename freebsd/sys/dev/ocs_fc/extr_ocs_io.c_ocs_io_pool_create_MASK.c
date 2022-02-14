
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_15__ {scalar_t__ enable_ini; int instance_index; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_16__ {int els_rsp; int els_req; scalar_t__ sgl_count; scalar_t__ sgl_allocated; int * sgl; int rspbuf; int cmdbuf; TYPE_1__* ocs; scalar_t__ instance_index; scalar_t__ tag; } ;
typedef TYPE_2__ ocs_io_t ;
struct TYPE_17__ {scalar_t__ io_num_ios; int pool; int lock; TYPE_1__* ocs; } ;
typedef TYPE_3__ ocs_io_pool_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int *,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__,int ) ;
 TYPE_2__* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

ocs_io_pool_t *
FUNC_9(ocs_t *VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11 = 0;
 int32_t VAR_12 = -1;
 ocs_io_pool_t *VAR_13;


 VAR_13 = FUNC_4(VAR_8, sizeof(*VAR_13), VAR_5 | VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_8, "allocate of IO pool failed\n");
  return ((void*)0);;
 }

 VAR_13->ocs = VAR_8;
 VAR_13->io_num_ios = VAR_9;


 FUNC_2(VAR_8, &VAR_13->lock, "io_pool lock[%d]", VAR_8->instance_index);

 VAR_13->pool = FUNC_5(VAR_8, sizeof(ocs_io_t), VAR_13->io_num_ios, VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_13->io_num_ios; VAR_11++) {
  ocs_io_t *VAR_14 = FUNC_6(VAR_13->pool, VAR_11);

  VAR_14->tag = VAR_11;
  VAR_14->instance_index = VAR_11;
  VAR_14->ocs = VAR_8;


  if (VAR_8->enable_ini) {
   VAR_12 = FUNC_0(VAR_8, &VAR_14->cmdbuf, VAR_6, VAR_3);
   if (VAR_12) {
    FUNC_3(VAR_8, "ocs_dma_alloc cmdbuf failed\n");
    FUNC_1(VAR_13);
    return ((void*)0);
   }
  }


  VAR_12 = FUNC_0(VAR_8, &VAR_14->rspbuf, VAR_7, VAR_3);
  if (VAR_12) {
   FUNC_3(VAR_8, "ocs_dma_alloc cmdbuf failed\n");
   FUNC_1(VAR_13);
   return ((void*)0);
  }


  VAR_14->sgl = FUNC_4(VAR_8, sizeof(*VAR_14->sgl) * VAR_10, VAR_4 | VAR_5);
  if (VAR_14->sgl == ((void*)0)) {
   FUNC_3(VAR_8, "malloc sgl's failed\n");
   FUNC_1(VAR_13);
   return ((void*)0);
  }
  VAR_14->sgl_allocated = VAR_10;
  VAR_14->sgl_count = 0;


  FUNC_8(VAR_14);
  FUNC_7(VAR_14);

  VAR_12 = FUNC_0(VAR_8, &VAR_14->els_req, VAR_2, VAR_3);
  if (VAR_12) {
   FUNC_3(VAR_8, "ocs_dma_alloc els_req failed\n");
   FUNC_1(VAR_13);
   return ((void*)0);
   }

  VAR_12 = FUNC_0(VAR_8, &VAR_14->els_rsp, VAR_1, VAR_3);
  if (VAR_12) {
   FUNC_3(VAR_8, "ocs_dma_alloc els_rsp failed\n");
   FUNC_1(VAR_13);
   return ((void*)0);
   }
 }

 return VAR_13;
}
