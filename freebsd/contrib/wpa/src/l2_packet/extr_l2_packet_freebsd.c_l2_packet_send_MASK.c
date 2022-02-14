
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct l2_packet_data {int pcap; int const* own_addr; int l2_hdr; } ;
struct l2_ethhdr {int h_proto; struct l2_ethhdr* h_source; struct l2_ethhdr* h_dest; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct l2_ethhdr*) ;
 struct l2_ethhdr* FUNC_2 (int) ;
 int FUNC_3 (struct l2_ethhdr*,int const*,size_t) ;
 int FUNC_4 (int ,int const*,size_t) ;

int FUNC_5(struct l2_packet_data *VAR_1, const u8 *VAR_2, u16 VAR_3,
     const u8 *VAR_4, size_t VAR_5)
{
 if (!VAR_1->l2_hdr) {
  int VAR_6;
  struct l2_ethhdr *VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_5);
  if (VAR_7 == ((void*)0))
   return -1;
  FUNC_3(VAR_7->h_dest, VAR_2, VAR_0);
  FUNC_3(VAR_7->h_source, VAR_1->own_addr, VAR_0);
  VAR_7->h_proto = FUNC_0(VAR_3);
  FUNC_3(VAR_7 + 1, VAR_4, VAR_5);
  VAR_6 = FUNC_4(VAR_1->pcap, (u8 *) VAR_7, VAR_5 + sizeof(*VAR_7));
  FUNC_1(VAR_7);
  return VAR_6;
 } else
  return FUNC_4(VAR_1->pcap, VAR_4, VAR_5);
}
