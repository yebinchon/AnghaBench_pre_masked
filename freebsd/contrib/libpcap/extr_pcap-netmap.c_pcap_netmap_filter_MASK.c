
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct pcap_netmap {int cb_arg; int (* cb ) (int ,struct pcap_pkthdr*,int const*) ;int rx_pkts; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_3__ {struct bpf_insn* bf_insns; } ;
struct TYPE_4__ {TYPE_1__ fcode; struct pcap_netmap* priv; } ;
typedef TYPE_2__ pcap_t ;


 scalar_t__ FUNC_0 (struct bpf_insn const*,int const*,int ,int ) ;
 int FUNC_1 (int ,struct pcap_pkthdr*,int const*) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_0, struct pcap_pkthdr *VAR_1, const u_char *VAR_2)
{
 pcap_t *VAR_3 = (pcap_t *)VAR_0;
 struct pcap_netmap *VAR_4 = VAR_3->priv;
 const struct bpf_insn *VAR_5 = VAR_3->fcode.bf_insns;

 ++VAR_4->rx_pkts;
 if (VAR_5 == ((void*)0) || FUNC_0(VAR_5, VAR_2, VAR_1->len, VAR_1->caplen))
  VAR_4->cb(VAR_4->cb_arg, VAR_1, VAR_2);
}
