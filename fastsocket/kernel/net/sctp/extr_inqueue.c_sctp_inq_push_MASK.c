
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int (* func ) (TYPE_4__*) ;} ;
struct sctp_inq {TYPE_4__ immediate; int in_chunk_list; } ;
struct sctp_chunk {TYPE_3__* asoc; int list; TYPE_1__* rcvr; } ;
struct TYPE_6__ {int ipackets; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct TYPE_5__ {scalar_t__ dead; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int FUNC_2 (TYPE_4__*) ;

void FUNC_3(struct sctp_inq *VAR_0, struct sctp_chunk *VAR_1)
{

 if (VAR_1->rcvr->dead) {
  FUNC_1(VAR_1);
  return;
 }






 FUNC_0(&VAR_1->list, &VAR_0->in_chunk_list);
 if (VAR_1->asoc)
  VAR_1->asoc->stats.ipackets++;
 VAR_0->immediate.func(&VAR_0->immediate);
}
