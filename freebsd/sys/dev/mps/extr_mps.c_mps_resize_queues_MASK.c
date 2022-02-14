
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct mps_softc {int num_reqs; int num_prireqs; int max_replyframes; int max_evtframes; int reqframesz; int max_io_pages; int maxio; int num_chains; scalar_t__ max_chains; int msi_msgs; scalar_t__ num_replies; TYPE_1__* facts; int max_reqframes; int max_prireqframes; } ;
struct TYPE_2__ {int HighPriorityCredit; int RequestCredit; int MaxReplyDescriptorPostQueueDepth; int IOCRequestFrameSize; int MaxChainDepth; int MaxMSIxVectors; } ;
typedef int MPI2_SGE_SIMPLE64 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int FUNC_3 (struct mps_softc*,int ,char*,int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct mps_softc *VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7, VAR_8;







 VAR_6 = FUNC_0(1, VAR_4->max_prireqframes);
 VAR_6 = FUNC_1(VAR_6, VAR_4->facts->HighPriorityCredit);

 VAR_5 = FUNC_0(2, VAR_4->max_reqframes);
 VAR_5 = FUNC_1(VAR_5, VAR_4->facts->RequestCredit);

 VAR_4->num_reqs = VAR_6 + VAR_5;
 VAR_4->num_prireqs = VAR_6;
 VAR_4->num_replies = FUNC_1(VAR_4->max_replyframes + VAR_4->max_evtframes,
     VAR_4->facts->MaxReplyDescriptorPostQueueDepth) - 1;


 VAR_4->reqframesz = VAR_4->facts->IOCRequestFrameSize * 4;
 VAR_8 = VAR_4->reqframesz / sizeof(MPI2_SGE_SIMPLE64) - 1;
 VAR_7 = (VAR_8 * VAR_4->facts->MaxChainDepth + 1) * VAR_2;





 if (VAR_4->max_io_pages > 0) {
  VAR_7 = FUNC_2(VAR_7, VAR_4->max_io_pages * VAR_2);
  VAR_4->maxio = VAR_7;
 } else {
  VAR_4->maxio = VAR_7;
  VAR_7 = FUNC_2(VAR_7, VAR_0);
 }

 VAR_4->num_chains = (VAR_7 / VAR_2 + VAR_8 - 2) /
     VAR_8 * VAR_5;
 if (VAR_4->max_chains > 0 && VAR_4->max_chains < VAR_4->num_chains)
  VAR_4->num_chains = VAR_4->max_chains;






 if (VAR_4->facts->MaxMSIxVectors < 2)
  VAR_4->msi_msgs = 1;

 if (VAR_4->msi_msgs > 1) {
  VAR_4->msi_msgs = FUNC_1(VAR_4->msi_msgs, VAR_3);
  VAR_4->msi_msgs = FUNC_1(VAR_4->msi_msgs, VAR_4->facts->MaxMSIxVectors);
  if (VAR_4->num_reqs / VAR_4->msi_msgs < 2)
   VAR_4->msi_msgs = 1;
 }

 FUNC_3(VAR_4, VAR_1, "Sized queues to q=%d reqs=%d replies=%d\n",
     VAR_4->msi_msgs, VAR_4->num_reqs, VAR_4->num_replies);
}
