
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {int caplen; } ;
struct l2_packet_data {int rx_callback_ctx; int (* rx_callback ) (int ,int ,unsigned char*,size_t) ;scalar_t__ l2_hdr; } ;
struct l2_ethhdr {int h_source; } ;
typedef int pcap_t ;


 int * FUNC_0 (int *,struct pcap_pkthdr*) ;
 int FUNC_1 (int ,int ,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct l2_packet_data *VAR_3 = VAR_1;
 pcap_t *VAR_4 = VAR_2;
 struct pcap_pkthdr VAR_5;
 const u_char *VAR_6;
 struct l2_ethhdr *VAR_7;
 unsigned char *VAR_8;
 size_t VAR_9;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);

 if (VAR_6 == ((void*)0) || VAR_5.caplen < sizeof(*VAR_7))
  return;

 VAR_7 = (struct l2_ethhdr *) VAR_6;
 if (VAR_3->l2_hdr) {
  VAR_8 = (unsigned char *) VAR_7;
  VAR_9 = VAR_5.caplen;
 } else {
  VAR_8 = (unsigned char *) (VAR_7 + 1);
  VAR_9 = VAR_5.caplen - sizeof(*VAR_7);
 }
 VAR_3->rx_callback(VAR_3->rx_callback_ctx, VAR_7->h_source, VAR_8, VAR_9);
}
