
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int caplen; } ;
struct ether_header {int ether_type; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 (u_char *VAR_2, const struct pcap_pkthdr *VAR_3,
                              const u_char *VAR_4)
{

  struct ether_header *VAR_5 = (struct ether_header*) VAR_4;

  FUNC_1 (VAR_1, VAR_4, VAR_3->caplen);
  VAR_0 = VAR_5->ether_type;
  FUNC_0 (VAR_2);
}
