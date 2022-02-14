
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pcap_rpcap {int rmt_capstarted; } ;
struct bpf_program {int dummy; } ;
struct TYPE_5__ {struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*,struct bpf_program*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct bpf_program*) ;

__attribute__((used)) static int FUNC_2(pcap_t *VAR_0, struct bpf_program *VAR_1)
{
 struct pcap_rpcap *VAR_2 = VAR_0->priv;

 if (!VAR_2->rmt_capstarted)
 {

  if (FUNC_0(VAR_0, VAR_1) == -1)
   return -1;
  return 0;
 }


 if (FUNC_1(VAR_0, VAR_1))
  return -1;

 return 0;
}
