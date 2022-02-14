
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2_packet_data {scalar_t__ pcap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct l2_packet_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct l2_packet_data *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->pcap) {
   FUNC_0(
    FUNC_3(VAR_0->pcap));
   FUNC_2(VAR_0->pcap);
  }
  FUNC_1(VAR_0);
 }
}
