
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct pcap_rpcap {int rmt_capstarted; scalar_t__ rmt_clientside; } ;
struct pcap_pkthdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ break_loop; struct pcap_rpcap* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,int *) ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct pcap_pkthdr*,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,struct pcap_pkthdr*,int *) ;

__attribute__((used)) static int FUNC_4(pcap_t *VAR_1, int VAR_2, pcap_handler VAR_3, u_char *VAR_4)
{
 struct pcap_rpcap *VAR_5 = VAR_1->priv;
 struct pcap_pkthdr VAR_6;
 u_char *VAR_7;
 int VAR_8 = 0;
 int VAR_9;





 if (VAR_5->rmt_clientside)
 {

  if (!VAR_5->rmt_capstarted)
  {




   if (FUNC_2(VAR_1))
    return -1;
  }
 }

 while (VAR_8 < VAR_2 || FUNC_0(VAR_2))
 {



  if (VAR_1->break_loop) {





   VAR_1->break_loop = 0;
   return (VAR_0);
  }




  VAR_9 = FUNC_1(VAR_1, &VAR_6, &VAR_7);
  if (VAR_9 == 1)
  {




   (*VAR_3)(VAR_4, &VAR_6, VAR_7);
   VAR_8++;
  }
  else if (VAR_9 == -1)
  {

   return VAR_9;
  }
  else
  {







   if (VAR_1->break_loop) {



    VAR_1->break_loop = 0;
    return (VAR_0);
   }

   return VAR_8;
  }
 }
 return VAR_8;
}
