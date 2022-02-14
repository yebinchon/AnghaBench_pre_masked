
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_26__ {int dst_port; int src_port; } ;
struct TYPE_21__ {int dst_port; int src_port; int flow_label; int next_hdr; int traffic_class; int dst_ip; int src_ip; int proto; int tos; int ether_type; int vlan_tag; int src_mac; int dst_mac; } ;
struct TYPE_27__ {TYPE_5__ val; TYPE_15__ mask; } ;
struct TYPE_24__ {int flow_label; int next_hdr; int traffic_class; int dst_ip; int src_ip; } ;
struct TYPE_25__ {TYPE_3__ val; TYPE_15__ mask; } ;
struct TYPE_17__ {int proto; int tos; int dst_ip; int src_ip; } ;
struct TYPE_18__ {TYPE_11__ val; TYPE_15__ mask; } ;
struct TYPE_28__ {int ether_type; int vlan_tag; int src_mac; int dst_mac; } ;
struct TYPE_29__ {TYPE_7__ val; TYPE_15__ mask; } ;
union ib_flow_spec {int type; TYPE_6__ tcp_udp; TYPE_4__ ipv6; TYPE_12__ ipv4; TYPE_8__ eth; } ;
typedef void u32 ;
struct TYPE_30__ {int ipv4; } ;
struct TYPE_23__ {int ipv6; } ;
struct TYPE_22__ {int ipv6; } ;
struct TYPE_16__ {int ipv4; } ;
struct TYPE_20__ {TYPE_2__ ipv6_layout; TYPE_10__ ipv4_layout; } ;
struct TYPE_19__ {TYPE_1__ ipv6_layout; TYPE_9__ ipv4_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_15__,int ) ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,void*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_14__ VAR_12 ;
 int FUNC_3 (void*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (void*,int *,int) ;
 int VAR_21 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (void*,void*,int ,int ) ;
 int FUNC_8 (void*,void*,int ,int ) ;
 int VAR_24 ;
 TYPE_13__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_9(u32 *VAR_30, u32 *VAR_31,
      const union ib_flow_spec *VAR_32)
{
 void *VAR_33 = FUNC_1(VAR_17, VAR_30,
          VAR_22);
 void *VAR_34 = FUNC_1(VAR_17, VAR_31,
          VAR_22);
 void *VAR_35 = FUNC_1(VAR_17, VAR_30,
        VAR_21);
 void *VAR_36 = FUNC_1(VAR_17, VAR_31,
        VAR_21);

 switch (VAR_32->type) {
 case 132:
  if (FUNC_0(VAR_32->eth.mask, VAR_6))
   return -VAR_1;

  FUNC_3(FUNC_1(VAR_18, VAR_33,
          VAR_11),
    VAR_32->eth.mask.dst_mac);
  FUNC_3(FUNC_1(VAR_18, VAR_34,
          VAR_11),
    VAR_32->eth.val.dst_mac);

  FUNC_3(FUNC_1(VAR_18, VAR_33,
          VAR_24),
    VAR_32->eth.mask.src_mac);
  FUNC_3(FUNC_1(VAR_18, VAR_34,
          VAR_24),
    VAR_32->eth.val.src_mac);

  if (VAR_32->eth.mask.vlan_tag) {
   FUNC_2(VAR_18, VAR_33,
     VAR_10, 1);
   FUNC_2(VAR_18, VAR_34,
     VAR_10, 1);

   FUNC_2(VAR_18, VAR_33,
     VAR_16, FUNC_6(VAR_32->eth.mask.vlan_tag));
   FUNC_2(VAR_18, VAR_34,
     VAR_16, FUNC_6(VAR_32->eth.val.vlan_tag));

   FUNC_2(VAR_18, VAR_33,
     VAR_14,
     FUNC_6(VAR_32->eth.mask.vlan_tag) >> 12);
   FUNC_2(VAR_18, VAR_34,
     VAR_14,
     FUNC_6(VAR_32->eth.val.vlan_tag) >> 12);

   FUNC_2(VAR_18, VAR_33,
     VAR_15,
     FUNC_6(VAR_32->eth.mask.vlan_tag) >> 13);
   FUNC_2(VAR_18, VAR_34,
     VAR_15,
     FUNC_6(VAR_32->eth.val.vlan_tag) >> 13);
  }
  FUNC_2(VAR_18, VAR_33,
    VAR_13, FUNC_6(VAR_32->eth.mask.ether_type));
  FUNC_2(VAR_18, VAR_34,
    VAR_13, FUNC_6(VAR_32->eth.val.ether_type));
  break;
 case 131:
  if (FUNC_0(VAR_32->ipv4.mask, VAR_7))
   return -VAR_1;

  FUNC_2(VAR_18, VAR_33,
    VAR_13, 0xffff);
  FUNC_2(VAR_18, VAR_34,
    VAR_13, VAR_2);

  FUNC_4(FUNC_1(VAR_18, VAR_33,
        VAR_25),
         &VAR_32->ipv4.mask.src_ip,
         sizeof(VAR_32->ipv4.mask.src_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_34,
        VAR_25),
         &VAR_32->ipv4.val.src_ip,
         sizeof(VAR_32->ipv4.val.src_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_33,
        VAR_12),
         &VAR_32->ipv4.mask.dst_ip,
         sizeof(VAR_32->ipv4.mask.dst_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_34,
        VAR_12),
         &VAR_32->ipv4.val.dst_ip,
         sizeof(VAR_32->ipv4.val.dst_ip));

  FUNC_8(VAR_33, VAR_34,
   VAR_32->ipv4.mask.tos, VAR_32->ipv4.val.tos);

  FUNC_7(VAR_33, VAR_34,
     VAR_32->ipv4.mask.proto, VAR_32->ipv4.val.proto);
  break;
 case 130:
  if (FUNC_0(VAR_32->ipv6.mask, VAR_8))
   return -VAR_1;

  FUNC_2(VAR_18, VAR_33,
    VAR_13, 0xffff);
  FUNC_2(VAR_18, VAR_34,
    VAR_13, VAR_3);

  FUNC_4(FUNC_1(VAR_18, VAR_33,
        VAR_25),
         &VAR_32->ipv6.mask.src_ip,
         sizeof(VAR_32->ipv6.mask.src_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_34,
        VAR_25),
         &VAR_32->ipv6.val.src_ip,
         sizeof(VAR_32->ipv6.val.src_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_33,
        VAR_12),
         &VAR_32->ipv6.mask.dst_ip,
         sizeof(VAR_32->ipv6.mask.dst_ip));
  FUNC_4(FUNC_1(VAR_18, VAR_34,
        VAR_12),
         &VAR_32->ipv6.val.dst_ip,
         sizeof(VAR_32->ipv6.val.dst_ip));

  FUNC_8(VAR_33, VAR_34,
   VAR_32->ipv6.mask.traffic_class,
   VAR_32->ipv6.val.traffic_class);

  FUNC_7(VAR_33, VAR_34,
     VAR_32->ipv6.mask.next_hdr,
     VAR_32->ipv6.val.next_hdr);

  FUNC_2(VAR_19, VAR_35,
    VAR_23,
    FUNC_5(VAR_32->ipv6.mask.flow_label));
  FUNC_2(VAR_19, VAR_36,
    VAR_23,
    FUNC_5(VAR_32->ipv6.val.flow_label));
  break;
 case 129:
  if (FUNC_0(VAR_32->tcp_udp.mask,
      VAR_9))
   return -VAR_1;

  FUNC_2(VAR_18, VAR_33, VAR_20,
    0xff);
  FUNC_2(VAR_18, VAR_34, VAR_20,
    VAR_4);

  FUNC_2(VAR_18, VAR_33, VAR_27,
    FUNC_6(VAR_32->tcp_udp.mask.src_port));
  FUNC_2(VAR_18, VAR_34, VAR_27,
    FUNC_6(VAR_32->tcp_udp.val.src_port));

  FUNC_2(VAR_18, VAR_33, VAR_26,
    FUNC_6(VAR_32->tcp_udp.mask.dst_port));
  FUNC_2(VAR_18, VAR_34, VAR_26,
    FUNC_6(VAR_32->tcp_udp.val.dst_port));
  break;
 case 128:
  if (FUNC_0(VAR_32->tcp_udp.mask,
      VAR_9))
   return -VAR_1;

  FUNC_2(VAR_18, VAR_33, VAR_20,
    0xff);
  FUNC_2(VAR_18, VAR_34, VAR_20,
    VAR_5);

  FUNC_2(VAR_18, VAR_33, VAR_29,
    FUNC_6(VAR_32->tcp_udp.mask.src_port));
  FUNC_2(VAR_18, VAR_34, VAR_29,
    FUNC_6(VAR_32->tcp_udp.val.src_port));

  FUNC_2(VAR_18, VAR_33, VAR_28,
    FUNC_6(VAR_32->tcp_udp.mask.dst_port));
  FUNC_2(VAR_18, VAR_34, VAR_28,
    FUNC_6(VAR_32->tcp_udp.val.dst_port));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
