
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_t ;
struct TYPE_25__ {scalar_t__ fc_id; } ;
typedef TYPE_4__ ocs_sport_t ;
struct TYPE_26__ {int pend_frames_lock; int pend_frames; scalar_t__ hold_frames; } ;
typedef TYPE_5__ ocs_node_t ;
struct TYPE_27__ {TYPE_8__* header; TYPE_2__* payload; } ;
typedef TYPE_6__ ocs_hw_sequence_t ;
struct TYPE_28__ {TYPE_4__* sport; int * ocs; } ;
typedef TYPE_7__ ocs_domain_t ;
typedef int int32_t ;
struct TYPE_24__ {TYPE_8__* virt; } ;
struct TYPE_29__ {scalar_t__ type; scalar_t__ r_ctl; scalar_t__ info; int d_id; int s_id; TYPE_3__ dma; } ;
typedef TYPE_8__ fc_header_t ;
struct TYPE_22__ {TYPE_8__* virt; } ;
struct TYPE_23__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_8__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_8__*,int) ;
 int FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,scalar_t__) ;
 TYPE_5__* FUNC_9 (TYPE_4__*,scalar_t__,int ,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*) ;
 TYPE_5__* FUNC_11 (TYPE_4__*,scalar_t__) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_13 (TYPE_7__*,scalar_t__) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static __inline int32_t
FUNC_15(void *VAR_5, ocs_hw_sequence_t *VAR_6)
{
 ocs_domain_t *VAR_7 = (ocs_domain_t *)VAR_5;
 ocs_t *VAR_8 = VAR_7->ocs;
 fc_header_t *VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 ocs_node_t *VAR_12 = ((void*)0);
 ocs_sport_t *VAR_13 = ((void*)0);

 FUNC_2(VAR_6->header, -1);
 FUNC_2(VAR_6->header->dma.virt, -1);
 FUNC_2(VAR_6->payload->dma.virt, -1);

 VAR_9 = VAR_6->header->dma.virt;


 VAR_10 = FUNC_0(VAR_9->s_id);
 VAR_11 = FUNC_0(VAR_9->d_id);

 VAR_13 = VAR_7->sport;
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_8, VAR_9, "phy sport for FC ID 0x%06x is NULL, dropping frame\n", VAR_11);
  return -1;
 }

 if (VAR_13->fc_id != VAR_11) {

  VAR_13 = FUNC_13(VAR_7, VAR_11);
  if (VAR_13 == ((void*)0)) {
   if (VAR_9->type == VAR_4) {

    FUNC_8(VAR_8, "unsolicited FCP frame with invalid d_id x%x, dropping\n",
          VAR_11);
    return -1;
   } else {

    VAR_13 = VAR_7->sport;
   }
  }
 }


 VAR_12 = FUNC_11(VAR_13, VAR_10);


 if (VAR_12 == ((void*)0)) {



  if ((VAR_9->r_ctl == VAR_1) && (
      (VAR_9->info == VAR_3) || (VAR_9->info == VAR_2))) {
   FUNC_6(VAR_8, "solicited data/ctrl frame without node, dropping\n");
   return -1;
  }
  VAR_12 = FUNC_9(VAR_13, VAR_10, VAR_0, VAR_0);
  if (VAR_12 == ((void*)0)) {
   FUNC_7(VAR_8, "ocs_node_alloc() failed\n");
   return -1;
  }

  FUNC_12(VAR_12, VAR_0);
 }

 if (VAR_12->hold_frames || !FUNC_4((&VAR_12->pend_frames))) {




  FUNC_5(&VAR_12->pend_frames_lock);
   FUNC_3(&VAR_12->pend_frames, VAR_6);
  FUNC_14(&VAR_12->pend_frames_lock);

  return 0;
 }


 return FUNC_10(VAR_12, VAR_6);
}
