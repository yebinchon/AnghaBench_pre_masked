
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef scalar_t__ uint16 ;
struct rpcap_sampling {scalar_t__ value; scalar_t__ method; } ;
struct rpcap_header {int plen; } ;
struct pcap_rpcap {int rmt_sockctrl; int protocol_version; } ;
struct TYPE_4__ {int method; int value; } ;
struct TYPE_5__ {int errbuf; TYPE_1__ rmt_samp; struct pcap_rpcap* priv; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rpcap_sampling*,int ,int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (struct rpcap_header*,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,struct rpcap_header*,int ) ;
 scalar_t__ FUNC_6 (int *,int,int *,int*,int,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_8(pcap_t *VAR_5)
{
 struct pcap_rpcap *VAR_6 = VAR_5->priv;
 char VAR_7[VAR_3];
 int VAR_8 = 0;
 struct rpcap_header VAR_9;
 struct rpcap_sampling *VAR_10;


 if (VAR_5->rmt_samp.method == VAR_1)
  return 0;






 if (VAR_5->rmt_samp.method < 0 || VAR_5->rmt_samp.method > 255) {
  FUNC_2(VAR_5->errbuf, VAR_0,
      "Invalid sampling method %d", VAR_5->rmt_samp.method);
  return -1;
 }
 if (VAR_5->rmt_samp.value < 0 || VAR_5->rmt_samp.value > 65535) {
  FUNC_2(VAR_5->errbuf, VAR_0,
      "Invalid sampling value %d", VAR_5->rmt_samp.value);
  return -1;
 }

 if (FUNC_6(((void*)0), sizeof(struct rpcap_header), ((void*)0),
  &VAR_8, VAR_3, VAR_4, VAR_5->errbuf, VAR_0))
  return -1;

 FUNC_3((struct rpcap_header *) VAR_7,
     VAR_6->protocol_version, VAR_2, 0,
     sizeof(struct rpcap_sampling));


 VAR_10 = (struct rpcap_sampling *) &VAR_7[VAR_8];

 if (FUNC_6(((void*)0), sizeof(struct rpcap_sampling), ((void*)0),
  &VAR_8, VAR_3, VAR_4, VAR_5->errbuf, VAR_0))
  return -1;

 FUNC_1(VAR_10, 0, sizeof(struct rpcap_sampling));

 VAR_10->method = (uint8)VAR_5->rmt_samp.method;
 VAR_10->value = (uint16)FUNC_0(VAR_5->rmt_samp.value);

 if (FUNC_7(VAR_6->rmt_sockctrl, VAR_7, VAR_8, VAR_5->errbuf,
     VAR_0) < 0)
  return -1;


 if (FUNC_5(VAR_6->rmt_sockctrl, VAR_6->protocol_version,
     VAR_2, &VAR_9, VAR_5->errbuf) == -1)
  return -1;




 if (FUNC_4(VAR_6->rmt_sockctrl, VAR_9.plen, VAR_5->errbuf) == -1)
  return -1;

 return 0;
}
