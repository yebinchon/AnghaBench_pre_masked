
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int lun; scalar_t__ transfer_len; int sense_info_len; scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__ vm_srb; } ;
struct vstor_packet {TYPE_2__ u; int operation; int flags; } ;
struct vmscsi_req {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct TYPE_10__ {int * chan_send_cnt; } ;
struct storvsc_softc {int hs_nchan; int hs_num_out_reqs; TYPE_4__ sysctl_data; struct vmbus_channel** hs_sel_chan; } ;
struct TYPE_12__ {scalar_t__ gpa_len; } ;
struct TYPE_9__ {TYPE_6__ gpa_range; } ;
struct hv_storvsc_request {TYPE_5__* softc; int prp_cnt; TYPE_3__ prp_list; struct vstor_packet vstor_packet; } ;
struct TYPE_11__ {int hs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct vstor_packet*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct vmbus_channel*,int ,int ,struct vstor_packet*,int ,int ) ;
 int FUNC_5 (struct vmbus_channel*,TYPE_6__*,int ,struct vstor_packet*,int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct storvsc_softc *VAR_8,
       struct hv_storvsc_request *VAR_9)
{
 struct vstor_packet *VAR_10 = &VAR_9->vstor_packet;
 struct vmbus_channel* VAR_11 = ((void*)0);
 int VAR_12 = 0, VAR_13;

 VAR_10->flags |= VAR_0;

 VAR_10->u.vm_srb.length =
     sizeof(struct vmscsi_req) - VAR_7;

 VAR_10->u.vm_srb.sense_info_len = VAR_6;

 VAR_10->u.vm_srb.transfer_len =
     VAR_9->prp_list.gpa_range.gpa_len;

 VAR_10->operation = VAR_3;

 VAR_13 = (VAR_10->u.vm_srb.lun + VAR_5) % VAR_8->hs_nchan;
 VAR_11 = VAR_8->hs_sel_chan[VAR_13];

 FUNC_2(&VAR_9->softc->hs_lock);
 if (VAR_9->prp_list.gpa_range.gpa_len) {
  VAR_12 = FUNC_5(VAR_11,
      &VAR_9->prp_list.gpa_range, VAR_9->prp_cnt,
      VAR_10, VAR_4, (uint64_t)(uintptr_t)VAR_9);
 } else {
  VAR_12 = FUNC_4(VAR_11,
      VAR_2, VAR_1,
      VAR_10, VAR_4, (uint64_t)(uintptr_t)VAR_9);
 }

 if (!VAR_12) {
  VAR_8->sysctl_data.chan_send_cnt[VAR_13]++;
 }
 FUNC_1(&VAR_9->softc->hs_lock);

 if (VAR_12 != 0) {
  FUNC_3("Unable to send packet %p ret %d", VAR_10, VAR_12);
 } else {
  FUNC_0(&VAR_8->hs_num_out_reqs, 1);
 }

 return (VAR_12);
}
