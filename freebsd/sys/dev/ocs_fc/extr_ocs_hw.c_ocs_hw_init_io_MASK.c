
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int n_io; } ;
struct TYPE_15__ {int os; TYPE_3__** io; int io_free; int sli; TYPE_1__ config; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_16__ {scalar_t__ indicator; int state; scalar_t__ is_port_owned; TYPE_4__* sgl; } ;
typedef TYPE_3__ ocs_hw_io_t ;
struct TYPE_17__ {int member_0; } ;
typedef TYPE_4__ ocs_dma_t ;
typedef int cmd ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int,int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__**,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ,int *,int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_4__** FUNC_7 (int ,int,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int,scalar_t__,int,TYPE_4__**,int *,TYPE_4__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_10(ocs_hw_t *VAR_8)
{
 uint32_t VAR_9 = 0, VAR_10 = 0;
 uint32_t VAR_11 = 0;
 ocs_hw_io_t *VAR_12 = ((void*)0);
 uint8_t VAR_13[VAR_7];
 ocs_hw_rtn_e VAR_14 = VAR_4;
 uint32_t VAR_15;
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 256;
 ocs_dma_t **VAR_18 = ((void*)0);
 ocs_dma_t VAR_19 = { 0 };

 VAR_11 = FUNC_9(&VAR_8->sli);

 if (VAR_11) {
  VAR_18 = FUNC_7(VAR_8->os, sizeof(*VAR_18) * VAR_17, VAR_6);
  if (VAR_18 == ((void*)0)) {
   FUNC_6(VAR_8->os, "ocs_malloc sgls failed\n");
   return VAR_3;
  }

  VAR_14 = FUNC_1(VAR_8->os, &VAR_19, 32 + VAR_17*16, VAR_5);
  if (VAR_14) {
   FUNC_6(VAR_8->os, "ocs_dma_alloc reqbuf failed\n");
   FUNC_3(VAR_8->os, VAR_18, sizeof(*VAR_18) * VAR_17);
   return VAR_3;
  }
 }

 VAR_12 = VAR_8->io[VAR_10];
 for (VAR_15 = VAR_8->config.n_io; VAR_15; VAR_15 -= VAR_16) {
  if (VAR_11) {



   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_17, VAR_15); VAR_16++) {

    if (VAR_16 > 0) {
     if (VAR_8->io[VAR_10 + VAR_16]->indicator != (VAR_8->io[VAR_10 + VAR_16-1]->indicator+1)) {
      break;
     }
    }
    VAR_18[VAR_16] = VAR_8->io[VAR_10 + VAR_16]->sgl;
   }

   if (FUNC_8(&VAR_8->sli, VAR_13, sizeof(VAR_13),
      VAR_12->indicator, VAR_16, VAR_18, ((void*)0), &VAR_19)) {
    if (FUNC_4(VAR_8, VAR_13, VAR_0, ((void*)0), ((void*)0))) {
     VAR_14 = VAR_2;
     FUNC_6(VAR_8->os, "SGL post failed\n");
     break;
    }
   }
  } else {
   VAR_16 = VAR_15;
  }


  for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9 ++) {
   VAR_12->is_port_owned = 0;
   VAR_12->state = VAR_1;
   FUNC_5(&VAR_8->io_free, VAR_12);
   VAR_12 = VAR_8->io[VAR_10+1];
   VAR_10++;
  }
 }

 if (VAR_11) {
  FUNC_2(VAR_8->os, &VAR_19);
  FUNC_3(VAR_8->os, VAR_18, sizeof(*VAR_18) * VAR_17);
 }

 return VAR_14;
}
