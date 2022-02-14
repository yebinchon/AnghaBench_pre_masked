
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
typedef int u_int ;
struct nm_udphdr {void* check; void* len; } ;
struct nm_tcphdr {int flags; void* check; int seq; } ;
struct nm_ipv6hdr {void* payload_len; } ;
struct nm_iphdr {void* check; void* id; void* tot_len; } ;
struct TYPE_2__ {void* tot_len; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_4 (struct nm_iphdr*) ;
 int FUNC_5 (struct nm_iphdr*,int *,int,void**) ;
 int FUNC_6 (struct nm_ipv6hdr*,int *,int,void**) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(uint8_t *VAR_1, size_t VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
  u_int VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct nm_iphdr *VAR_9 = (struct nm_iphdr *)(VAR_1);
 struct nm_ipv6hdr *VAR_10 = (struct nm_ipv6hdr *)(VAR_1);
 uint16_t *VAR_11 = ((void*)0);
 uint8_t *VAR_12 = ((void*)0);

 if (VAR_3) {

  VAR_9->tot_len = FUNC_2(VAR_2);
  FUNC_7("ip total length %u", FUNC_0(VAR_0->tot_len));


  VAR_9->id = FUNC_2(FUNC_0(VAR_9->id) + VAR_6);
  FUNC_7("ip identification %u", FUNC_0(VAR_9->id));


  VAR_9->check = 0;
  VAR_9->check = FUNC_4(VAR_9);
  FUNC_7("IP csum %x", FUNC_0(VAR_9->check));
 } else {

  VAR_10->payload_len = FUNC_2(VAR_2-VAR_4);
 }

 if (VAR_5) {
  struct nm_tcphdr *VAR_13 = (struct nm_tcphdr *)(VAR_1 + VAR_4);


  VAR_13->seq = FUNC_3(FUNC_1(VAR_13->seq) + VAR_7);
  FUNC_7("tcp seq %u", FUNC_1(VAR_13->seq));



  if (!VAR_8)
   VAR_13->flags &= ~(0x8 | 0x1);
  FUNC_7("last_segment %u", VAR_8);

  VAR_11 = &VAR_13->check;
  VAR_12 = (uint8_t *)VAR_13;
 } else {
  struct nm_udphdr *VAR_14 = (struct nm_udphdr *)(VAR_1 + VAR_4);


  VAR_14->len = FUNC_2(VAR_2-VAR_4);

  VAR_11 = &VAR_14->check;
  VAR_12 = (uint8_t *)VAR_14;
 }


 *VAR_11 = 0;
 if (VAR_3)
  FUNC_5(VAR_9, VAR_12, VAR_2-VAR_4, VAR_11);
 else
  FUNC_6(VAR_10, VAR_12, VAR_2-VAR_4, VAR_11);

 FUNC_7("TCP/UDP csum %x", FUNC_0(*VAR_11));
}
