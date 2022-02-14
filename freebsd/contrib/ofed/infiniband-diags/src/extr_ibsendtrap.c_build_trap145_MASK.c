
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_14__ {scalar_t__ lid; } ;
typedef TYPE_5__ ib_portid_t ;
struct TYPE_10__ {int new_sys_guid; } ;
struct TYPE_11__ {TYPE_1__ ntc_145; } ;
struct TYPE_12__ {void* trap_num; void* prod_type_lsb; } ;
struct TYPE_13__ {TYPE_3__ generic; } ;
struct TYPE_15__ {int generic_type; TYPE_2__ data_details; void* issuer_lid; TYPE_4__ g_or_v; } ;
typedef TYPE_6__ ib_mad_notice_attr_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(ib_mad_notice_attr_t * VAR_1, ib_portid_t * VAR_2)
{
 VAR_1->generic_type = 0x80 | VAR_0;
 VAR_1->g_or_v.generic.prod_type_lsb = FUNC_0(FUNC_2(VAR_2));
 VAR_1->g_or_v.generic.trap_num = FUNC_0(145);
 VAR_1->issuer_lid = FUNC_0((uint16_t) VAR_2->lid);
 VAR_1->data_details.ntc_145.new_sys_guid = FUNC_1(0x1234567812345678);
}
