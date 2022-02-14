
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_outq {int cork; int control_chunk_list; int empty; TYPE_1__* asoc; } ;
struct sctp_chunk {int list; TYPE_2__* chunk_hdr; } ;
struct TYPE_4__ {scalar_t__ type; int flags; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct sctp_outq*,struct sctp_chunk*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_outq*,int ) ;
 int FUNC_6 (struct sctp_outq*,struct sctp_chunk*) ;

int FUNC_7(struct sctp_outq *VAR_6, struct sctp_chunk *VAR_7)
{
 int VAR_8 = 0;

 FUNC_0("sctp_outq_tail(%p, %p[%s])\n",
     VAR_6, VAR_7, VAR_7 && VAR_7->chunk_hdr ?
     FUNC_4(FUNC_2(VAR_7->chunk_hdr->type))
     : "Illegal Chunk");




 if (VAR_1 == VAR_7->chunk_hdr->type) {
  switch (VAR_6->asoc->state) {
  case 132:
  case 133:
  case 130:
  case 128:
  case 129:
  case 131:

   VAR_8 = -VAR_0;
   break;

  default:
   FUNC_0("outqueueing (%p, %p[%s])\n",
     VAR_6, VAR_7, VAR_7 && VAR_7->chunk_hdr ?
     FUNC_4(FUNC_2(VAR_7->chunk_hdr->type))
     : "Illegal Chunk");

   FUNC_6(VAR_6, VAR_7);
   if (VAR_7->chunk_hdr->flags & VAR_2)
    FUNC_1(VAR_5);
   else
    FUNC_1(VAR_4);
   VAR_6->empty = 0;
   break;
  }
 } else {
  FUNC_3(&VAR_7->list, &VAR_6->control_chunk_list);
  FUNC_1(VAR_3);
 }

 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_6->cork)
  VAR_8 = FUNC_5(VAR_6, 0);

 return VAR_8;
}
