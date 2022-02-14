
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * data; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_12__ {int placement_offset; TYPE_4__ opaque_data; int vlan; int packet_length; TYPE_2__ err_flags; TYPE_1__ parse_flags; } ;
union core_rx_cqe_union {TYPE_6__ rx_cqe_fp; } ;
struct TYPE_11__ {int placement_offset; } ;
struct TYPE_9__ {void* packet_length; } ;
struct ecore_ll2_comp_rx_data {TYPE_5__ u; void* opaque_data_1; void* opaque_data_0; void* vlan; TYPE_3__ length; void* err_flags; void* parse_flags; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(union core_rx_cqe_union *VAR_0,
        struct ecore_ll2_comp_rx_data *VAR_1)
{
 VAR_1->parse_flags =
  FUNC_0(VAR_0->rx_cqe_fp.parse_flags.flags);
 VAR_1->err_flags =
  FUNC_0(VAR_0->rx_cqe_fp.err_flags.flags);
 VAR_1->length.packet_length =
  FUNC_0(VAR_0->rx_cqe_fp.packet_length);
 VAR_1->vlan =
  FUNC_0(VAR_0->rx_cqe_fp.vlan);
 VAR_1->opaque_data_0 =
  FUNC_1(VAR_0->rx_cqe_fp.opaque_data.data[0]);
 VAR_1->opaque_data_1 =
  FUNC_1(VAR_0->rx_cqe_fp.opaque_data.data[1]);
 VAR_1->u.placement_offset =
  VAR_0->rx_cqe_fp.placement_offset;
}
