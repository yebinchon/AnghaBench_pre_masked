
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct rpcap_stats {int svrcapt; int ifrecv; int ifdrop; int krnldrop; } ;
struct rpcap_header {int plen; } ;
struct pcap_stat {void* ps_sent; int ps_netdrop; int ps_capt; void* ps_recv; void* ps_ifdrop; void* ps_drop; } ;
struct pcap_rpcap {int rmt_sockctrl; int TotNetDrops; int TotCapt; int protocol_version; int rmt_capstarted; } ;
struct TYPE_3__ {int * errbuf; struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (struct rpcap_header*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,struct rpcap_header*,int *) ;
 int FUNC_5 (int ,char*,int,int *,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int,int *,int ) ;

__attribute__((used)) static struct pcap_stat *FUNC_7(pcap_t *VAR_4, struct pcap_stat *VAR_5, int VAR_6)
{
 struct pcap_rpcap *VAR_7 = VAR_4->priv;
 struct rpcap_header VAR_8;
 struct rpcap_stats VAR_9;
 uint32 VAR_10;




 if (VAR_6 != VAR_2)

 {
  FUNC_1(VAR_4->errbuf, VAR_0,
      "Invalid stats mode %d", VAR_6);
  return ((void*)0);
 }






 if (!VAR_7->rmt_capstarted)
 {
  VAR_5->ps_drop = 0;
  VAR_5->ps_ifdrop = 0;
  VAR_5->ps_recv = 0;
  return VAR_5;
 }

 FUNC_2(&VAR_8, VAR_7->protocol_version,
     VAR_3, 0, 0);


 if (FUNC_6(VAR_7->rmt_sockctrl, (char *)&VAR_8,
     sizeof(struct rpcap_header), VAR_4->errbuf, VAR_0) < 0)
  return ((void*)0);


 if (FUNC_4(VAR_7->rmt_sockctrl, VAR_7->protocol_version,
     VAR_3, &VAR_8, VAR_4->errbuf) == -1)
  return ((void*)0);

 VAR_10 = VAR_8.plen;


 if (FUNC_5(VAR_7->rmt_sockctrl, (char *)&VAR_9,
     sizeof(struct rpcap_stats), &VAR_10, VAR_4->errbuf) == -1)
  goto error;

 VAR_5->ps_drop = FUNC_0(VAR_9.krnldrop);
 VAR_5->ps_ifdrop = FUNC_0(VAR_9.ifdrop);
 VAR_5->ps_recv = FUNC_0(VAR_9.ifrecv);
 if (FUNC_3(VAR_7->rmt_sockctrl, VAR_10, VAR_4->errbuf) == -1)
  goto error;

 return VAR_5;

error:





 (void)FUNC_3(VAR_7->rmt_sockctrl, VAR_10, ((void*)0));

 return ((void*)0);
}
