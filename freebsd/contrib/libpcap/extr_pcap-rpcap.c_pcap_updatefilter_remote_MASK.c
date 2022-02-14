
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rpcap_header {int plen; } ;
struct rpcap_filterbpf_insn {int dummy; } ;
struct rpcap_filter {int dummy; } ;
struct pcap_rpcap {int rmt_sockctrl; int protocol_version; } ;
struct bpf_program {int bf_len; } ;
struct TYPE_4__ {int errbuf; struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int*,struct bpf_program*) ;
 int FUNC_1 (struct rpcap_header*,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct rpcap_header*,int ) ;
 scalar_t__ FUNC_4 (int *,int,int *,int*,int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(pcap_t *VAR_4, struct bpf_program *VAR_5)
{
 struct pcap_rpcap *VAR_6 = VAR_4->priv;
 char VAR_7[VAR_2];
 int VAR_8 = 0;
 struct rpcap_header VAR_9;

 if (FUNC_4(((void*)0), sizeof(struct rpcap_header), ((void*)0), &VAR_8,
  VAR_2, VAR_3, VAR_4->errbuf, VAR_0))
  return -1;

 FUNC_1((struct rpcap_header *) VAR_7,
     VAR_6->protocol_version, VAR_1, 0,
     sizeof(struct rpcap_filter) + VAR_5->bf_len * sizeof(struct rpcap_filterbpf_insn));

 if (FUNC_0(VAR_4, &VAR_7[VAR_8], &VAR_8, VAR_5))
  return -1;

 if (FUNC_5(VAR_6->rmt_sockctrl, VAR_7, VAR_8, VAR_4->errbuf,
     VAR_0) < 0)
  return -1;


 if (FUNC_3(VAR_6->rmt_sockctrl, VAR_6->protocol_version,
     VAR_1, &VAR_9, VAR_4->errbuf) == -1)
  return -1;




 if (FUNC_2(VAR_6->rmt_sockctrl, VAR_9.plen, VAR_4->errbuf) == -1)
  return -1;

 return 0;
}
