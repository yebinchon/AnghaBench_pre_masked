
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct sctphdr {int src_port; int dest_port; int v_tag; void* checksum; } ;
struct sctp_paramhdr {void* param_length; void* param_type; } ;
struct TYPE_4__ {int initiate_tag; void* initial_tsn; void* num_inbound_streams; void* num_outbound_streams; void* a_rwnd; } ;
struct TYPE_3__ {void* chunk_length; scalar_t__ chunk_flags; int chunk_type; } ;
struct sctp_init_chunk {TYPE_2__ init; TYPE_1__ ch; } ;
struct sctp_chunkhdr {void* chunk_length; scalar_t__ chunk_flags; int chunk_type; } ;
struct outdata {int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (struct sctphdr* const,int) ;

void
FUNC_3(struct outdata *VAR_10)
{
 struct sctphdr *const VAR_11 = (struct sctphdr *) VAR_7;
 struct sctp_chunkhdr *VAR_12;
 struct sctp_init_chunk *VAR_13;
 struct sctp_paramhdr *VAR_14;

 VAR_11->src_port = FUNC_1(VAR_6);
 VAR_11->dest_port = FUNC_1(VAR_8 + (VAR_5 ? 0 : VAR_10->seq));
 if (VAR_9 >= (int)(sizeof(struct sctphdr) +
     sizeof(struct sctp_init_chunk))) {
  VAR_11->v_tag = 0;
 } else {
  VAR_11->v_tag = (VAR_11->src_port << 16) | VAR_11->dest_port;
 }
 VAR_11->checksum = FUNC_0(0);
 if (VAR_9 >= (int)(sizeof(struct sctphdr) +
     sizeof(struct sctp_init_chunk))) {







  VAR_13 = (struct sctp_init_chunk *)(VAR_11 + 1);
  VAR_13->ch.chunk_type = VAR_0;
  VAR_13->ch.chunk_flags = 0;
  VAR_13->ch.chunk_length = FUNC_1((u_int16_t)(VAR_9 -
      sizeof(struct sctphdr)));
  VAR_13->init.initiate_tag = (VAR_11->src_port << 16) |
      VAR_11->dest_port;
  VAR_13->init.a_rwnd = FUNC_0(1500);
  VAR_13->init.num_outbound_streams = FUNC_1(1);
  VAR_13->init.num_inbound_streams = FUNC_1(1);
  VAR_13->init.initial_tsn = FUNC_0(0);
  if (VAR_9 >= (int)(sizeof(struct sctphdr) +
      sizeof(struct sctp_init_chunk) +
      sizeof(struct sctp_paramhdr))) {
   VAR_14 = (struct sctp_paramhdr *)(VAR_13 + 1);
   VAR_14->param_type = FUNC_1(VAR_1);
   VAR_14->param_length =
       FUNC_1((u_int16_t)(VAR_9 -
       sizeof(struct sctphdr) -
       sizeof(struct sctp_init_chunk)));
  }
 } else {




  if (VAR_9 >=
      (int)(sizeof(struct sctphdr) +
      sizeof(struct sctp_chunkhdr))) {
   VAR_12 = (struct sctp_chunkhdr *)(VAR_11 + 1);
   VAR_12->chunk_type = VAR_3;
   VAR_12->chunk_flags = 0;
   VAR_12->chunk_length = FUNC_1(4);
  }
  if (VAR_9 >=
      (int)(sizeof(struct sctphdr) +
      2 * sizeof(struct sctp_chunkhdr))) {
   VAR_12 = VAR_12 + 1;
   VAR_12->chunk_type = VAR_2;
   VAR_12->chunk_flags = 0;
   VAR_12->chunk_length = FUNC_1(VAR_9 -
       (sizeof(struct sctphdr) + sizeof(struct sctp_chunkhdr)));
  }
 }
 if (VAR_4) {
  VAR_11->checksum = FUNC_2(VAR_11, VAR_9);
 }
}
