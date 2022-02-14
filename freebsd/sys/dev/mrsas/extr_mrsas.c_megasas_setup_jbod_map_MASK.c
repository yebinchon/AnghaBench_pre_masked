
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mrsas_softc {int use_seqnum_jbod_fp; int mrsas_dev; scalar_t__* jbodmap_mem; int * jbodmap_phys_addr; int * jbodmap_dmamap; int * jbodmap_tag; int mrsas_parent_tag; TYPE_2__* ctrl_info; } ;
struct MR_PD_CFG_SEQ_NUM_SYNC {int dummy; } ;
struct MR_PD_CFG_SEQ {int dummy; } ;
struct TYPE_3__ {int useSeqNumJbodFP; } ;
struct TYPE_4__ {TYPE_1__ adapterOperations3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct mrsas_softc*,int) ;
 int VAR_5 ;

void
FUNC_6(struct mrsas_softc *VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;

 VAR_8 = sizeof(struct MR_PD_CFG_SEQ_NUM_SYNC) +
     (sizeof(struct MR_PD_CFG_SEQ) * (VAR_4 - 1));

 if (!VAR_6->ctrl_info->adapterOperations3.useSeqNumJbodFP) {
  VAR_6->use_seqnum_jbod_fp = 0;
  return;
 }
 if (VAR_6->jbodmap_mem[0])
  goto skip_alloc;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  if (FUNC_0(VAR_6->mrsas_parent_tag,
      4, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_8,
      1,
      VAR_8,
      VAR_0,
      ((void*)0), ((void*)0),
      &VAR_6->jbodmap_tag[VAR_7])) {
   FUNC_4(VAR_6->mrsas_dev,
       "Cannot allocate jbod map tag.\n");
   return;
  }
  if (FUNC_2(VAR_6->jbodmap_tag[VAR_7],
      (void **)&VAR_6->jbodmap_mem[VAR_7],
      VAR_1, &VAR_6->jbodmap_dmamap[VAR_7])) {
   FUNC_4(VAR_6->mrsas_dev,
       "Cannot allocate jbod map memory.\n");
   return;
  }
  FUNC_3(VAR_6->jbodmap_mem[VAR_7], VAR_8);

  if (FUNC_1(VAR_6->jbodmap_tag[VAR_7], VAR_6->jbodmap_dmamap[VAR_7],
      VAR_6->jbodmap_mem[VAR_7], VAR_8,
      VAR_5, &VAR_6->jbodmap_phys_addr[VAR_7],
      VAR_1)) {
   FUNC_4(VAR_6->mrsas_dev, "Cannot load jbod map memory.\n");
   return;
  }
  if (!VAR_6->jbodmap_mem[VAR_7]) {
   FUNC_4(VAR_6->mrsas_dev,
       "Cannot allocate memory for jbod map.\n");
   VAR_6->use_seqnum_jbod_fp = 0;
   return;
  }
 }

skip_alloc:
 if (!FUNC_5(VAR_6, 0) &&
     !FUNC_5(VAR_6, 1))
  VAR_6->use_seqnum_jbod_fp = 1;
 else
  VAR_6->use_seqnum_jbod_fp = 0;

 FUNC_4(VAR_6->mrsas_dev, "Jbod map is supported\n");
}
