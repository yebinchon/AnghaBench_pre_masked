
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrsas_softc {scalar_t__ msix_vectors; int reply_q_depth; TYPE_1__* reply_desc_mem; scalar_t__* last_reply_idx; } ;
typedef TYPE_1__* pMpi2ReplyDescriptorsUnion_t ;
struct TYPE_2__ {int Words; } ;


 int VAR_0 ;

void
FUNC_0(struct mrsas_softc *VAR_1)
{
 int VAR_2, VAR_3;
 pMpi2ReplyDescriptorsUnion_t VAR_4;

 VAR_3 = VAR_1->msix_vectors > 0 ? VAR_1->msix_vectors : 1;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_1->last_reply_idx[VAR_2] = 0;

 VAR_4 = VAR_1->reply_desc_mem;
 for (VAR_2 = 0; VAR_2 < VAR_1->reply_q_depth; VAR_2++, VAR_4++) {
  VAR_4->Words = VAR_0;
 }
}
