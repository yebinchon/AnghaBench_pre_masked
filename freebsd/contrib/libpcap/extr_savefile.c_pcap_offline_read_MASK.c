
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct pcap_pkthdr {int caplen; int len; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_5__ {struct bpf_insn* bf_insns; } ;
struct TYPE_6__ {int (* next_packet_op ) (TYPE_2__*,struct pcap_pkthdr*,int **) ;TYPE_1__ fcode; scalar_t__ break_loop; } ;
typedef TYPE_2__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ FUNC_0 (struct bpf_insn*,int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct pcap_pkthdr*,int **) ;
 int FUNC_2 (int *,struct pcap_pkthdr*,int *) ;

int
FUNC_3(pcap_t *VAR_0, int VAR_1, pcap_handler VAR_2, u_char *VAR_3)
{
 struct bpf_insn *VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 u_char *VAR_7;

 while (VAR_5 == 0) {
  struct pcap_pkthdr VAR_8;
  if (VAR_0->break_loop) {
   if (VAR_6 == 0) {
    VAR_0->break_loop = 0;
    return (-2);
   } else
    return (VAR_6);
  }

  VAR_5 = VAR_0->next_packet_op(VAR_0, &VAR_8, &VAR_7);
  if (VAR_5) {
   if (VAR_5 == 1)
    return (0);
   return (VAR_5);
  }

  if ((VAR_4 = VAR_0->fcode.bf_insns) == ((void*)0) ||
      FUNC_0(VAR_4, VAR_7, VAR_8.len, VAR_8.caplen)) {
   (*VAR_2)(VAR_3, &VAR_8, VAR_7);
   if (++VAR_6 >= VAR_1 && VAR_1 > 0)
    break;
  }
 }

 return (VAR_6);
}
