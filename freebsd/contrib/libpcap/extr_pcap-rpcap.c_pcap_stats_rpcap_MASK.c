
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_stat {int dummy; } ;
typedef int pcap_t ;


 int VAR_0 ;
 struct pcap_stat* FUNC_0 (int *,struct pcap_stat*,int ) ;

__attribute__((used)) static int FUNC_1(pcap_t *VAR_1, struct pcap_stat *VAR_2)
{
 struct pcap_stat *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);

 if (VAR_3)
  return 0;
 else
  return -1;
}
