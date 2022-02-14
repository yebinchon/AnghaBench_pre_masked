
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_24__ ;
typedef struct TYPE_39__ TYPE_23__ ;
typedef struct TYPE_38__ TYPE_22__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_27__ {void* packets; void* octets; } ;
struct TYPE_26__ {void* packets; void* octets; } ;
struct TYPE_25__ {void* packets; void* octets; } ;
struct TYPE_48__ {void* packets; void* octets; } ;
struct TYPE_47__ {void* octets; void* packets; } ;
struct TYPE_46__ {void* octets; void* packets; } ;
struct TYPE_45__ {void* octets; void* packets; } ;
struct TYPE_44__ {void* octets; void* packets; } ;
struct TYPE_43__ {void* octets; void* packets; } ;
struct TYPE_42__ {void* octets; void* packets; } ;
struct TYPE_41__ {void* octets; void* packets; } ;
struct TYPE_35__ {void* octets; void* packets; } ;
struct mlx5_vport_counters {TYPE_12__ transmitted_eth_multicast; TYPE_11__ received_eth_multicast; TYPE_10__ transmitted_eth_unicast; TYPE_9__ received_eth_unicast; TYPE_8__ transmitted_eth_broadcast; TYPE_7__ received_eth_broadcast; TYPE_6__ transmitted_ib_multicast; TYPE_5__ received_ib_multicast; TYPE_4__ transmitted_ib_unicast; TYPE_3__ received_ib_unicast; TYPE_2__ transmit_errors; TYPE_1__ received_errors; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_40__ {int octets; int packets; } ;
struct TYPE_39__ {int octets; int packets; } ;
struct TYPE_38__ {int packets; int octets; } ;
struct TYPE_37__ {int packets; int octets; } ;
struct TYPE_36__ {int octets; int packets; } ;
struct TYPE_34__ {int octets; int packets; } ;
struct TYPE_33__ {int octets; int packets; } ;
struct TYPE_32__ {int octets; int packets; } ;
struct TYPE_31__ {int packets; int octets; } ;
struct TYPE_30__ {int packets; int octets; } ;
struct TYPE_29__ {int octets; int packets; } ;
struct TYPE_28__ {int octets; int packets; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int ,void*,int) ;
 void* FUNC_4 (int) ;
 int VAR_1 ;
 TYPE_24__ VAR_2 ;
 TYPE_23__ VAR_3 ;
 TYPE_22__ VAR_4 ;
 TYPE_21__ VAR_5 ;
 TYPE_20__ VAR_6 ;
 TYPE_19__ VAR_7 ;
 TYPE_18__ VAR_8 ;
 TYPE_17__ VAR_9 ;
 TYPE_16__ VAR_10 ;
 TYPE_15__ VAR_11 ;
 TYPE_14__ VAR_12 ;
 TYPE_13__ VAR_13 ;

int FUNC_5(struct mlx5_core_dev *VAR_14, u8 VAR_15,
       struct mlx5_vport_counters *VAR_16)
{
 int VAR_17 = FUNC_1(VAR_1);
 void *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_4(VAR_17);
 if (!VAR_18)
  return -VAR_0;

 VAR_19 = FUNC_3(VAR_14, VAR_15, 0, VAR_18, VAR_17);
 if (VAR_19)
  goto ex;

 VAR_16->received_errors.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_2.packets);
 VAR_16->received_errors.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_2.octets);
 VAR_16->transmit_errors.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_8.packets);
 VAR_16->transmit_errors.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_8.octets);
 VAR_16->received_ib_unicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_7.packets);
 VAR_16->received_ib_unicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_7.octets);
 VAR_16->transmitted_ib_unicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_13.packets);
 VAR_16->transmitted_ib_unicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_13.octets);
 VAR_16->received_ib_multicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_6.packets);
 VAR_16->received_ib_multicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_6.octets);
 VAR_16->transmitted_ib_multicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_12.packets);
 VAR_16->transmitted_ib_multicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_12.octets);
 VAR_16->received_eth_broadcast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_3.packets);
 VAR_16->received_eth_broadcast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_3.octets);
 VAR_16->transmitted_eth_broadcast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_9.packets);
 VAR_16->transmitted_eth_broadcast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_9.octets);
 VAR_16->received_eth_unicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_5.octets);
 VAR_16->received_eth_unicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_5.packets);
 VAR_16->transmitted_eth_unicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_11.octets);
 VAR_16->transmitted_eth_unicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_11.packets);
 VAR_16->received_eth_multicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_4.octets);
 VAR_16->received_eth_multicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_4.packets);
 VAR_16->transmitted_eth_multicast.octets =
  FUNC_0(VAR_1,
      VAR_18, VAR_10.octets);
 VAR_16->transmitted_eth_multicast.packets =
  FUNC_0(VAR_1,
      VAR_18, VAR_10.packets);

ex:
 FUNC_2(VAR_18);
 return VAR_19;
}
