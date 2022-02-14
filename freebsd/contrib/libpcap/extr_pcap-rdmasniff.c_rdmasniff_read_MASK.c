
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pcap_rdmasniff {int cq_event; int packets_recv; int cq; int channel; } ;
struct pcap_pkthdr {int caplen; int len; int ts; } ;
struct ibv_wc {scalar_t__ status; int wr_id; int byte_len; } ;
struct ibv_cq {int dummy; } ;
struct TYPE_5__ {int * bf_insns; } ;
struct TYPE_6__ {scalar_t__ break_loop; TYPE_1__ fcode; scalar_t__ buffer; scalar_t__ snapshot; struct pcap_rdmasniff* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,unsigned long long,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,struct ibv_cq**,void**) ;
 int FUNC_6 (int ,int,struct ibv_wc*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_11(pcap_t *VAR_7, int VAR_8, pcap_handler VAR_9, u_char *VAR_10)
{
 struct pcap_rdmasniff *VAR_11 = VAR_7->priv;
 struct ibv_cq *VAR_12;
 void *VAR_13;
 struct ibv_wc VAR_14;
 struct pcap_pkthdr VAR_15;
 u_char *VAR_16;
 int VAR_17 = 0;

 if (!VAR_11->cq_event) {
  while (FUNC_5(VAR_11->channel, &VAR_12, &VAR_13) < 0) {
   if (VAR_5 != VAR_0) {
    return VAR_2;
   }
   if (VAR_7->break_loop) {
    VAR_7->break_loop = 0;
    return VAR_3;
   }
  }
  FUNC_4(VAR_11->cq, 1);
  FUNC_7(VAR_11->cq, 0);
  VAR_11->cq_event = 1;
 }

 while (VAR_17 < VAR_8 || FUNC_0(VAR_8)) {
  if (FUNC_6(VAR_11->cq, 1, &VAR_14) != 1) {
   VAR_11->cq_event = 0;
   break;
  }

  if (VAR_14.status != VAR_1) {
   FUNC_2(VAR_6, "failed WC wr_id %lld status %ld/%d\n",
    (unsigned long long) VAR_14.wr_id,
    VAR_14.status, FUNC_8(VAR_14.status));
   continue;
  }

  VAR_15.len = VAR_14.byte_len;
  VAR_15.caplen = FUNC_9(VAR_15.len, (u_int)VAR_7->snapshot);
  FUNC_3(&VAR_15.ts, ((void*)0));

  VAR_16 = (u_char *) VAR_7->buffer + VAR_14.wr_id * VAR_4;

  if (VAR_7->fcode.bf_insns == ((void*)0) ||
      FUNC_1(VAR_7->fcode.bf_insns, VAR_16, VAR_15.len, VAR_15.caplen)) {
   VAR_9(VAR_10, &VAR_15, VAR_16);
   ++VAR_11->packets_recv;
   ++VAR_17;
  }

  FUNC_10(VAR_7, VAR_14.wr_id);

  if (VAR_7->break_loop) {
   VAR_7->break_loop = 0;
   return VAR_3;
  }
 }

 return VAR_17;
}
