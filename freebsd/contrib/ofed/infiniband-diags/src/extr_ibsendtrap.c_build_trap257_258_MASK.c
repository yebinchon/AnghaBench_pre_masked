
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint16_t ;
struct TYPE_23__ {scalar_t__ lid; } ;
typedef TYPE_9__ ib_portid_t ;
struct TYPE_19__ {void* interface_id; void* prefix; } ;
struct TYPE_20__ {TYPE_5__ unicast; } ;
struct TYPE_17__ {void* interface_id; void* prefix; } ;
struct TYPE_18__ {TYPE_3__ unicast; } ;
struct TYPE_21__ {TYPE_6__ gid2; TYPE_4__ gid1; void* qp2; void* qp1; void* key; void* lid2; void* lid1; } ;
struct TYPE_22__ {TYPE_7__ ntc_257_258; } ;
struct TYPE_15__ {void* trap_num; void* prod_type_lsb; } ;
struct TYPE_16__ {TYPE_1__ generic; } ;
struct TYPE_14__ {int generic_type; TYPE_8__ data_details; void* issuer_lid; TYPE_2__ g_or_v; } ;
typedef TYPE_10__ ib_mad_notice_attr_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*) ;

__attribute__((used)) static void FUNC_4(ib_mad_notice_attr_t * VAR_1, ib_portid_t * VAR_2,
         uint16_t VAR_3)
{
 VAR_1->generic_type = 0x80 | VAR_0;
 VAR_1->g_or_v.generic.prod_type_lsb = FUNC_0(FUNC_3(VAR_2));
 VAR_1->g_or_v.generic.trap_num = FUNC_0(VAR_3);
 VAR_1->issuer_lid = FUNC_0((uint16_t) VAR_2->lid);
 VAR_1->data_details.ntc_257_258.lid1 = FUNC_0(1);
 VAR_1->data_details.ntc_257_258.lid2 = FUNC_0(2);
 VAR_1->data_details.ntc_257_258.key = FUNC_1(0x12345678);
 VAR_1->data_details.ntc_257_258.qp1 = FUNC_1(0x010101);
 VAR_1->data_details.ntc_257_258.qp2 = FUNC_1(0x020202);
 VAR_1->data_details.ntc_257_258.gid1.unicast.prefix = FUNC_2(0xf8c0000000000001);
 VAR_1->data_details.ntc_257_258.gid1.unicast.interface_id = FUNC_2(0x1111222233334444);
 VAR_1->data_details.ntc_257_258.gid2.unicast.prefix = FUNC_2(0xf8c0000000000001);
 VAR_1->data_details.ntc_257_258.gid2.unicast.interface_id = FUNC_2(0x5678567812341234);
}
