
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct mpr_softc {int num_reqs; int num_prireqs; int max_replyframes; int max_evtframes; int reqframesz; int chain_frame_size; int max_io_pages; int maxio; int num_chains; scalar_t__ max_chains; int msi_msgs; scalar_t__ num_replies; TYPE_1__* facts; int max_reqframes; int max_prireqframes; } ;
struct TYPE_2__ {int HighPriorityCredit; int RequestCredit; int MaxReplyDescriptorPostQueueDepth; int IOCRequestFrameSize; scalar_t__ MsgVersion; int MaxChainDepth; int MaxMSIxVectors; int IOCMaxChainSegmentSize; } ;
typedef int MPI2_IEEE_SGE_SIMPLE64 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int FUNC_4 (struct mpr_softc*,int ,char*,int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mpr_softc *VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;







 VAR_9 = FUNC_0(1, VAR_7->max_prireqframes);
 VAR_9 = FUNC_1(VAR_9, VAR_7->facts->HighPriorityCredit);

 VAR_8 = FUNC_0(2, VAR_7->max_reqframes);
 VAR_8 = FUNC_1(VAR_8, VAR_7->facts->RequestCredit);

 VAR_7->num_reqs = VAR_9 + VAR_8;
 VAR_7->num_prireqs = VAR_9;
 VAR_7->num_replies = FUNC_1(VAR_7->max_replyframes + VAR_7->max_evtframes,
     VAR_7->facts->MaxReplyDescriptorPostQueueDepth) - 1;


 VAR_7->reqframesz = VAR_7->facts->IOCRequestFrameSize * 4;
 if (VAR_7->facts->MsgVersion >= VAR_1) {
  VAR_12 = FUNC_2(VAR_7->facts->IOCMaxChainSegmentSize);
  if (VAR_12 == 0)
   VAR_12 = VAR_2;
  VAR_7->chain_frame_size = VAR_12 *
      VAR_4;
 } else {
  VAR_7->chain_frame_size = VAR_7->reqframesz;
 }
 VAR_11 = VAR_7->chain_frame_size/sizeof(MPI2_IEEE_SGE_SIMPLE64)-1;
 VAR_10 = (VAR_11 * VAR_7->facts->MaxChainDepth + 1) * VAR_5;





 if (VAR_7->max_io_pages > 0) {
  VAR_10 = FUNC_3(VAR_10, VAR_7->max_io_pages * VAR_5);
  VAR_7->maxio = VAR_10;
 } else {
  VAR_7->maxio = VAR_10;
  VAR_10 = FUNC_3(VAR_10, VAR_0);
 }

 VAR_7->num_chains = (VAR_10 / VAR_5 + VAR_11 - 2) /
     VAR_11 * VAR_8;
 if (VAR_7->max_chains > 0 && VAR_7->max_chains < VAR_7->num_chains)
  VAR_7->num_chains = VAR_7->max_chains;






 if (VAR_7->facts->MaxMSIxVectors < 2)
  VAR_7->msi_msgs = 1;

 if (VAR_7->msi_msgs > 1) {
  VAR_7->msi_msgs = FUNC_1(VAR_7->msi_msgs, VAR_6);
  VAR_7->msi_msgs = FUNC_1(VAR_7->msi_msgs, VAR_7->facts->MaxMSIxVectors);
  if (VAR_7->num_reqs / VAR_7->msi_msgs < 2)
   VAR_7->msi_msgs = 1;
 }

 FUNC_4(VAR_7, VAR_3, "Sized queues to q=%d reqs=%d replies=%d\n",
     VAR_7->msi_msgs, VAR_7->num_reqs, VAR_7->num_replies);
}
