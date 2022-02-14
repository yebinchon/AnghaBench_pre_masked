
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_37__ {int qx; scalar_t__ xb; } ;
typedef TYPE_8__ sli4_fc_wcqe_t ;
typedef int prop_buf ;
struct TYPE_34__ {int unsolicited; } ;
struct TYPE_33__ {int (* unsolicited ) (int ,TYPE_13__*) ;int (* bounce ) (int ,TYPE_13__*,void*,void*,void*) ;} ;
struct TYPE_30__ {scalar_t__ bounce; scalar_t__ i_only_aab; } ;
struct TYPE_36__ {int retain_tsend_io_length; } ;
struct TYPE_38__ {TYPE_5__ args; TYPE_4__ callback; TYPE_1__ config; int os; int sli; TYPE_7__ workaround; } ;
typedef TYPE_9__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_27__ {int quarantine; int type; int status_saved; int axr_lock; TYPE_6__* axr_buf; int rnode; void* saved_ext; void* saved_len; void* saved_status; int (* done ) (TYPE_10__*,int ,void*,void*,void*,void*) ;void* arg; struct TYPE_27__* sec_hio; int reqtag; int indicator; int is_port_owned; void* length; void* xbusy; int wq; void* quarantine_first_phase; TYPE_9__* hw; } ;
typedef TYPE_10__ ocs_hw_io_t ;
typedef int (* ocs_hw_done_t ) (TYPE_10__*,int ,void*,void*,void*,void*) ;
typedef void* int32_t ;
struct TYPE_28__ {int ox_id; int d_id; int s_id; } ;
typedef TYPE_12__ fc_header_t ;
struct TYPE_29__ {TYPE_3__* header; } ;
struct TYPE_35__ {TYPE_13__ seq; TYPE_13__* cmd_seq; int call_axr_data; int call_axr_cmd; } ;
struct TYPE_31__ {TYPE_12__* virt; } ;
struct TYPE_32__ {TYPE_2__ dma; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_10__*,void*,int *,int *) ;
 int FUNC_4 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_9__*,int ,TYPE_10__*) ;
 int FUNC_6 (TYPE_9__*,TYPE_10__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_9__*,TYPE_10__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (void*,void*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (int ,char*,int,int ,...) ;
 void* FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int*,void**) ;
 void* FUNC_17 (int *,int*) ;
 void* FUNC_18 (int *,int*) ;
 void* FUNC_19 (int *,int*) ;
 int FUNC_20 (int ,TYPE_13__*,void*,void*,void*) ;
 int FUNC_21 (int ,TYPE_13__*) ;
 int FUNC_22 (int ,TYPE_13__*,void*,void*,void*) ;
 int FUNC_23 (int ,TYPE_13__*) ;

__attribute__((used)) static void
FUNC_24(void *VAR_5, uint8_t *VAR_6, int32_t VAR_7)
{
 ocs_hw_io_t *VAR_8 = VAR_5;
 ocs_hw_t *VAR_9 = VAR_8->hw;
 sli4_fc_wcqe_t *VAR_10 = (void *)VAR_6;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;
 uint8_t VAR_13 = 0;
 uint8_t VAR_14 = 0;
 uint8_t VAR_15 = 0;
 if (VAR_8->quarantine && VAR_8->quarantine_first_phase) {
  VAR_8->quarantine = (VAR_10->qx == 1);
  FUNC_5(VAR_9, VAR_8->wq, VAR_8);
 }
 VAR_8->quarantine_first_phase = VAR_0;


 if (VAR_8->sec_hio != ((void*)0) &&
     VAR_8->sec_hio->quarantine) {






  VAR_8->sec_hio->quarantine = (VAR_10->qx == 1);

  FUNC_5(VAR_9, VAR_8->wq, VAR_8->sec_hio);
 }

 FUNC_8(VAR_9, VAR_8);


 if (VAR_8->xbusy && VAR_10->xb == 0) {
  VAR_8->xbusy = VAR_0;
 }


 switch (VAR_8->type) {
 case 141:
 case 140:
  break;
 case 139:
  FUNC_16(&VAR_9->sli, VAR_6, &VAR_12);
  VAR_11 = FUNC_19(&VAR_9->sli, VAR_6);
  break;
 case 138:
 case 137:
 case 135:
  break;
 case 136:
  VAR_11 = FUNC_19(&VAR_9->sli, VAR_6);
  break;
 case 128:
  VAR_11 = FUNC_18(&VAR_9->sli, VAR_6);






  break;
 case 130:
  VAR_11 = FUNC_18(&VAR_9->sli, VAR_6);





  if (VAR_9->workaround.retain_tsend_io_length && !VAR_11 && !VAR_7) {
   VAR_11 = VAR_8->length;
  }

  break;
 case 129:
  if(VAR_8->is_port_owned) {
   FUNC_10(&VAR_8->axr_lock);
   VAR_15 = 1;
   if(VAR_8->axr_buf->call_axr_cmd) {
    VAR_13 = 1;
   }
   if(VAR_8->axr_buf->call_axr_data) {
    VAR_14 = 1;
   }
  }
  break;
 case 132:
  VAR_11 = FUNC_18(&VAR_9->sli, VAR_6);
  break;
 case 131:
  VAR_11 = FUNC_18(&VAR_9->sli, VAR_6);
  break;
 case 133:
  break;
 case 134:


  break;
 default:
  FUNC_12(VAR_9->os, "XXX unhandled io type %#x for XRI 0x%x\n",
        VAR_8->type, VAR_8->indicator);
  break;
 }
 if (VAR_7) {
  VAR_12 = FUNC_17(&VAR_9->sli, VAR_6);



  if (VAR_9->config.i_only_aab &&
      (FUNC_7(VAR_8->type)) &&
      (FUNC_9(VAR_7, VAR_12, VAR_10->xb))) {
   ocs_hw_rtn_e VAR_16;

   FUNC_11(VAR_9->os, "aborting xri=%#x tag=%#x\n",
          VAR_8->indicator, VAR_8->reqtag);





   VAR_16 = FUNC_3(VAR_9, VAR_8, VAR_3, ((void*)0), ((void*)0));

   if (VAR_16 == VAR_2) {

    VAR_8->status_saved = 1;
    VAR_8->saved_status = VAR_7;
    VAR_8->saved_ext = VAR_12;
    VAR_8->saved_len = VAR_11;
    goto exit_ocs_hw_wq_process_io;
   } else if (VAR_16 == VAR_1) {





    FUNC_11(VAR_9->os, "abort in progress xri=%#x tag=%#x\n",
           VAR_8->indicator, VAR_8->reqtag);

   } else {

    FUNC_12(VAR_9->os, "Failed to abort xri=%#x tag=%#x rc=%d\n",
          VAR_8->indicator, VAR_8->reqtag, VAR_16);
   }
  }




  if ( (! FUNC_7(VAR_8->type)) && VAR_10->xb) {
   ocs_hw_rtn_e VAR_17;

   FUNC_11(VAR_9->os, "aborting xri=%#x tag=%#x\n", VAR_8->indicator, VAR_8->reqtag);





   VAR_17 = FUNC_3(VAR_9, VAR_8, VAR_0, ((void*)0), ((void*)0));
   if (VAR_17 == VAR_2) {

    VAR_8->status_saved = 1;
    VAR_8->saved_status = VAR_7;
    VAR_8->saved_ext = VAR_12;
    VAR_8->saved_len = VAR_11;
    goto exit_ocs_hw_wq_process_io;
   } else if (VAR_17 == VAR_1) {





    FUNC_11(VAR_9->os, "abort in progress xri=%#x tag=%#x\n",
           VAR_8->indicator, VAR_8->reqtag);

   } else {

    FUNC_12(VAR_9->os, "Failed to abort xri=%#x tag=%#x rc=%d\n",
          VAR_8->indicator, VAR_8->reqtag, VAR_17);
   }
  }
 }

 if (VAR_8->sec_hio != ((void*)0)) {
  FUNC_4(VAR_9, VAR_8->sec_hio);
  VAR_8->sec_hio = ((void*)0);
 }

 if (VAR_8->done != ((void*)0)) {
  ocs_hw_done_t VAR_18 = VAR_8->done;
  void *VAR_19 = VAR_8->arg;

  VAR_8->done = ((void*)0);

  if (VAR_8->status_saved) {

   VAR_7 = VAR_8->saved_status;
   VAR_11 = VAR_8->saved_len;
   VAR_12 = VAR_8->saved_ext;
   VAR_8->status_saved = 0;
  }


  FUNC_6(VAR_9, VAR_8);
  VAR_18(VAR_8, VAR_8->rnode, VAR_11, VAR_7, VAR_12, VAR_19);
 }

 if(VAR_13) {

  if (VAR_9->config.bounce) {
   fc_header_t *VAR_20 = VAR_8->axr_buf->cmd_seq->header->dma.virt;
   uint32_t VAR_21 = FUNC_0(VAR_20->s_id);
   uint32_t VAR_22 = FUNC_0(VAR_20->d_id);
   uint32_t VAR_23 = FUNC_1(VAR_20->ox_id);
   if (VAR_9->callback.bounce != ((void*)0)) {
    (*VAR_9->callback.bounce)(VAR_4, VAR_8->axr_buf->cmd_seq, VAR_21, VAR_22, VAR_23);
   }
  }else {
   VAR_9->callback.unsolicited(VAR_9->args.unsolicited, VAR_8->axr_buf->cmd_seq);
  }

  if(VAR_14) {

   if (VAR_9->config.bounce) {
    fc_header_t *VAR_24 = VAR_8->axr_buf->seq.header->dma.virt;
    uint32_t VAR_25 = FUNC_0(VAR_24->s_id);
    uint32_t VAR_26 = FUNC_0(VAR_24->d_id);
    uint32_t VAR_27 = FUNC_1(VAR_24->ox_id);
    if (VAR_9->callback.bounce != ((void*)0)) {
     (*VAR_9->callback.bounce)(VAR_4, &VAR_8->axr_buf->seq, VAR_25, VAR_26, VAR_27);
    }
   }else {
    VAR_9->callback.unsolicited(VAR_9->args.unsolicited, &VAR_8->axr_buf->seq);
   }
  }
 }

exit_ocs_hw_wq_process_io:
 if(VAR_15) {
  FUNC_15(&VAR_8->axr_lock);
 }
}
