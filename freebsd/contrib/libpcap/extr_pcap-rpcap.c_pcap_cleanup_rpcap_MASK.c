
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpcap_header {int plen; } ;
struct pcap_rpcap {scalar_t__ rmt_sockctrl; scalar_t__ rmt_sockdata; int * currentfilter; int protocol_version; } ;
struct activehosts {scalar_t__ sockctrl; struct activehosts* next; } ;
struct TYPE_3__ {struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct activehosts* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rpcap_header*,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,struct rpcap_header*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int,int *,int ) ;

__attribute__((used)) static void FUNC_7(pcap_t *VAR_3)
{
 struct pcap_rpcap *VAR_4 = VAR_3->priv;
 struct rpcap_header VAR_5;
 struct activehosts *VAR_6;
 int VAR_7 = 0;


 VAR_6 = VAR_2;
 while (VAR_6)
 {
  if (VAR_6->sockctrl == VAR_4->rmt_sockctrl)
  {
   VAR_7 = 1;
   break;
  }
  VAR_6 = VAR_6->next;
 }

 if (!VAR_7)
 {
  FUNC_1(&VAR_5, VAR_4->protocol_version,
      VAR_0, 0, 0);






  (void)FUNC_6(VAR_4->rmt_sockctrl, (char *)&VAR_5,
      sizeof(struct rpcap_header), ((void*)0), 0);
 }
 else
 {
  FUNC_1(&VAR_5, VAR_4->protocol_version,
      VAR_1, 0, 0);






  if (FUNC_6(VAR_4->rmt_sockctrl, (char *)&VAR_5,
      sizeof(struct rpcap_header), ((void*)0), 0) == 0)
  {





   if (FUNC_3(VAR_4->rmt_sockctrl,
       VAR_4->protocol_version, VAR_1,
       &VAR_5, ((void*)0)) == 0)
   {
    (void)FUNC_2(VAR_4->rmt_sockctrl,
        VAR_5.plen, ((void*)0));
   }
  }
 }

 if (VAR_4->rmt_sockdata)
 {
  FUNC_5(VAR_4->rmt_sockdata, ((void*)0), 0);
  VAR_4->rmt_sockdata = 0;
 }

 if ((!VAR_7) && (VAR_4->rmt_sockctrl))
  FUNC_5(VAR_4->rmt_sockctrl, ((void*)0), 0);

 VAR_4->rmt_sockctrl = 0;

 if (VAR_4->currentfilter)
 {
  FUNC_0(VAR_4->currentfilter);
  VAR_4->currentfilter = ((void*)0);
 }


 FUNC_4();
}
