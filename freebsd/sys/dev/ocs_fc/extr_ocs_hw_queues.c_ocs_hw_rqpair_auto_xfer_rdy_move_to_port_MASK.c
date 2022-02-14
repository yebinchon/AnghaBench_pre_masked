
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int io_lock; int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_9__ {int indicator; int def_sgl; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int ocs_dma_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ,int,int **,int *,int *) ;
 int FUNC_8 (int *) ;

ocs_hw_rtn_e
FUNC_9(ocs_hw_t *VAR_7, ocs_hw_io_t *VAR_8)
{

 if (!FUNC_8(&VAR_7->sli)) {
  uint8_t *VAR_9;
  ocs_dma_t *VAR_10 = &VAR_8->def_sgl;
  ocs_dma_t **VAR_11 = &VAR_10;


  VAR_9 = FUNC_5(VAR_7->os, VAR_5, VAR_4);
  if (VAR_9 == ((void*)0)) {
   FUNC_4(VAR_7->os, "no buffer for command\n");
   return VAR_2;
  }
  if (FUNC_7(&VAR_7->sli, VAR_9, VAR_5,
      VAR_8->indicator, 1, VAR_11, ((void*)0), ((void*)0))) {
   if (FUNC_1(VAR_7, VAR_9, VAR_0,
         VAR_6, ((void*)0))) {
    FUNC_0(VAR_7->os, VAR_9, VAR_5);
    FUNC_4(VAR_7->os, "SGL post failed\n");
    return VAR_1;
   }
  }
 }

 FUNC_3(&VAR_7->io_lock);
 if (FUNC_2(VAR_7, VAR_8, 0) != 0) {
  FUNC_6(&VAR_7->io_lock);
  return VAR_1;
 }
 FUNC_6(&VAR_7->io_lock);
 return VAR_3;
}
