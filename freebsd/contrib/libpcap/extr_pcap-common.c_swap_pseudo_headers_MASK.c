
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int dummy; } ;






 int FUNC_0 (struct pcap_pkthdr*,int *) ;
 int FUNC_1 (struct pcap_pkthdr*,int *,int) ;
 int FUNC_2 (struct pcap_pkthdr*,int *) ;

void
FUNC_3(int VAR_0, struct pcap_pkthdr *VAR_1, u_char *VAR_2)
{





 switch (VAR_0) {

 case 131:
  FUNC_0(VAR_1, VAR_2);
  break;

 case 129:
  FUNC_1(VAR_1, VAR_2, 0);
  break;

 case 128:
  FUNC_1(VAR_1, VAR_2, 1);
  break;

 case 130:
  FUNC_2(VAR_1, VAR_2);
  break;
 }
}
