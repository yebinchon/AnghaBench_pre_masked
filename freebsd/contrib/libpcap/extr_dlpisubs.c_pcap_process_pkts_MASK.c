
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int tv_usec; int tv_sec; } ;
struct sb_hdr {int sbh_origlen; int sbh_msglen; TYPE_3__ sbh_timestamp; int sbh_totlen; int sbh_drops; } ;
struct TYPE_11__ {int tv_usec; int tv_sec; } ;
struct pcap_pkthdr {int len; int caplen; TYPE_6__ ts; } ;
struct TYPE_7__ {int ps_recv; int ps_drop; } ;
struct pcap_dlpi {TYPE_1__ stat; } ;
struct TYPE_8__ {int bf_insns; } ;
struct TYPE_10__ {int cc; int * bp; scalar_t__ snapshot; TYPE_2__ fcode; scalar_t__ break_loop; struct pcap_dlpi* priv; } ;
typedef TYPE_4__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;
typedef int bpf_u_int32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (struct sb_hdr*,int *,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,struct pcap_pkthdr*,int *) ;

int
FUNC_6(pcap_t *VAR_0, pcap_handler VAR_1, u_char *VAR_2,
 int VAR_3, u_char *VAR_4, int VAR_5)
{
 struct pcap_dlpi *VAR_6 = VAR_0->priv;
 int VAR_7, VAR_8, VAR_9;
 u_char *VAR_10, *VAR_11;
 struct pcap_pkthdr VAR_12;
 VAR_10 = VAR_4 + VAR_5;
 VAR_7 = 0;
  VAR_9 = VAR_5;
  VAR_8 = FUNC_4(VAR_0->snapshot, VAR_5);
  VAR_11 = VAR_4;
  VAR_4 += VAR_8;

  ++VAR_6->stat.ps_recv;
  if (FUNC_1(VAR_0->fcode.bf_insns, VAR_11, VAR_9, VAR_8)) {




   (void) FUNC_2(&VAR_12.ts, ((void*)0));

   VAR_12.len = VAR_9;
   VAR_12.caplen = VAR_8;

   if (VAR_12.caplen > (bpf_u_int32)VAR_0->snapshot)
    VAR_12.caplen = (bpf_u_int32)VAR_0->snapshot;
   (*VAR_1)(VAR_2, &VAR_12, VAR_11);
   if (++VAR_7 >= VAR_3 && !FUNC_0(VAR_3)) {
    VAR_0->cc = VAR_10 - VAR_4;
    VAR_0->bp = VAR_4;
    return (VAR_7);
   }
  }



 VAR_0->cc = 0;
 return (VAR_7);
}
