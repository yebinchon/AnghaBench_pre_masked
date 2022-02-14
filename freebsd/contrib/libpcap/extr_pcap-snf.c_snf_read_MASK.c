
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct snf_recv_req {int length; int pkt_addr; int timestamp; } ;
struct pcap_snf {int snf_timeout; int snf_ring; } ;
struct pcap_pkthdr {int caplen; int len; int ts; } ;
struct TYPE_6__ {int tstamp_precision; } ;
struct TYPE_5__ {int * bf_insns; } ;
struct TYPE_7__ {int snapshot; TYPE_2__ opt; TYPE_1__ fcode; int errbuf; scalar_t__ break_loop; struct pcap_snf* priv; } ;
typedef TYPE_3__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ,int,struct snf_recv_req*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(pcap_t *VAR_4, int VAR_5, pcap_handler VAR_6, u_char *VAR_7)
{
 struct pcap_snf *VAR_8 = VAR_4->priv;
 struct pcap_pkthdr VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct snf_recv_req VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_4)
  return -1;

 VAR_14 = 0;
 VAR_17 = VAR_8->snf_timeout;
 while (VAR_14 < VAR_5 || FUNC_0(VAR_5)) {



  if (VAR_4->break_loop) {
   if (VAR_14 == 0) {
    VAR_4->break_loop = 0;
    return (-2);
   } else {
    return (VAR_14);
   }
  }

  VAR_12 = FUNC_3(VAR_8->snf_ring, VAR_17, &VAR_15);

  if (VAR_12) {
   if (VAR_12 == VAR_1 || VAR_12 == VAR_0) {
    return (VAR_14);
   }
   else if (VAR_12 == VAR_2) {
    VAR_17 = 0;
    continue;
   }
   else {
    FUNC_2(VAR_4->errbuf,
        VAR_3, VAR_12, "snf_read");
    return -1;
   }
  }

  VAR_13 = VAR_15.length;
  if (VAR_13 > VAR_4->snapshot)
   VAR_13 = VAR_4->snapshot;

  if ((VAR_4->fcode.bf_insns == ((void*)0)) ||
       FUNC_1(VAR_4->fcode.bf_insns, VAR_15.pkt_addr, VAR_15.length, VAR_13)) {
   VAR_9.ts = FUNC_4(VAR_15.timestamp, VAR_4->opt.tstamp_precision);
   VAR_9.caplen = VAR_13;
   VAR_9.len = VAR_15.length;
   VAR_6(VAR_7, &VAR_9, VAR_15.pkt_addr);
  }
  VAR_14++;



  if (VAR_17 != 0)
   VAR_17 = 0;
 }
 return (VAR_14);
}
