
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ lid; } ;
typedef TYPE_5__ ib_portid_t ;
struct TYPE_12__ {int local_changes; int new_cap_mask; void* lid; } ;
struct TYPE_13__ {TYPE_2__ ntc_144; } ;
struct TYPE_14__ {void* trap_num; void* prod_type_lsb; } ;
struct TYPE_11__ {TYPE_4__ generic; } ;
struct TYPE_16__ {int generic_type; TYPE_3__ data_details; void* issuer_lid; TYPE_1__ g_or_v; } ;
typedef TYPE_6__ ib_mad_notice_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(ib_mad_notice_attr_t * VAR_2, ib_portid_t * VAR_3)
{
 VAR_2->generic_type = 0x80 | VAR_0;
 VAR_2->g_or_v.generic.prod_type_lsb = FUNC_0(FUNC_3(VAR_3));
 VAR_2->g_or_v.generic.trap_num = FUNC_0(144);
 VAR_2->issuer_lid = FUNC_0((uint16_t) VAR_3->lid);
 VAR_2->data_details.ntc_144.lid = VAR_2->issuer_lid;
 VAR_2->data_details.ntc_144.new_cap_mask = FUNC_1(FUNC_2(VAR_3));
 VAR_2->data_details.ntc_144.local_changes =
     VAR_1;
}
