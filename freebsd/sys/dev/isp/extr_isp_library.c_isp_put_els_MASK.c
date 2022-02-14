
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int els_recv_dsd_a6348; int els_recv_dsd_a4732; int els_recv_dsd_a3116; int els_recv_dsd_a1500; int els_recv_dsd_length; int els_xmit_dsd_a6348; int els_xmit_dsd_a4732; int els_xmit_dsd_a3116; int els_xmit_dsd_a1500; int els_xmit_dsd_length; int els_xmit_bytecnt; int els_recv_bytecnt; int els_ctl_flags; int els_reserved3; int els_reserved2; int els_did_hi; int els_did_mid; int els_did_lo; int els_reserved1; int els_opcode; int els_recv_dsd_count; int els_rxid; int els_sof; int els_vphdl; int els_xmit_dsd_count; int els_nphdl; int els_status; int els_handle; int els_hdr; } ;
typedef TYPE_1__ els_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, els_t *VAR_1, els_t *VAR_2)
{
 FUNC_3(VAR_0, &VAR_1->els_hdr, &VAR_2->els_hdr);
 FUNC_1(VAR_0, VAR_1->els_handle, &VAR_2->els_handle);
 FUNC_0(VAR_0, VAR_1->els_status, &VAR_2->els_status);
 FUNC_0(VAR_0, VAR_1->els_nphdl, &VAR_2->els_nphdl);
 FUNC_0(VAR_0, VAR_1->els_xmit_dsd_count, &VAR_2->els_xmit_dsd_count);
 FUNC_2(VAR_0, VAR_1->els_vphdl, &VAR_2->els_vphdl);
 FUNC_2(VAR_0, VAR_1->els_sof, &VAR_2->els_sof);
 FUNC_1(VAR_0, VAR_1->els_rxid, &VAR_2->els_rxid);
 FUNC_0(VAR_0, VAR_1->els_recv_dsd_count, &VAR_2->els_recv_dsd_count);
 FUNC_2(VAR_0, VAR_1->els_opcode, &VAR_2->els_opcode);
 FUNC_2(VAR_0, VAR_1->els_reserved2, &VAR_2->els_reserved1);
 FUNC_2(VAR_0, VAR_1->els_did_lo, &VAR_2->els_did_lo);
 FUNC_2(VAR_0, VAR_1->els_did_mid, &VAR_2->els_did_mid);
 FUNC_2(VAR_0, VAR_1->els_did_hi, &VAR_2->els_did_hi);
 FUNC_2(VAR_0, VAR_1->els_reserved2, &VAR_2->els_reserved2);
 FUNC_0(VAR_0, VAR_1->els_reserved3, &VAR_2->els_reserved3);
 FUNC_0(VAR_0, VAR_1->els_ctl_flags, &VAR_2->els_ctl_flags);
 FUNC_1(VAR_0, VAR_1->els_recv_bytecnt, &VAR_2->els_recv_bytecnt);
 FUNC_1(VAR_0, VAR_1->els_xmit_bytecnt, &VAR_2->els_xmit_bytecnt);
 FUNC_1(VAR_0, VAR_1->els_xmit_dsd_length, &VAR_2->els_xmit_dsd_length);
 FUNC_0(VAR_0, VAR_1->els_xmit_dsd_a1500, &VAR_2->els_xmit_dsd_a1500);
 FUNC_0(VAR_0, VAR_1->els_xmit_dsd_a3116, &VAR_2->els_xmit_dsd_a3116);
 FUNC_0(VAR_0, VAR_1->els_xmit_dsd_a4732, &VAR_2->els_xmit_dsd_a4732);
 FUNC_0(VAR_0, VAR_1->els_xmit_dsd_a6348, &VAR_2->els_xmit_dsd_a6348);
 FUNC_1(VAR_0, VAR_1->els_recv_dsd_length, &VAR_2->els_recv_dsd_length);
 FUNC_0(VAR_0, VAR_1->els_recv_dsd_a1500, &VAR_2->els_recv_dsd_a1500);
 FUNC_0(VAR_0, VAR_1->els_recv_dsd_a3116, &VAR_2->els_recv_dsd_a3116);
 FUNC_0(VAR_0, VAR_1->els_recv_dsd_a4732, &VAR_2->els_recv_dsd_a4732);
 FUNC_0(VAR_0, VAR_1->els_recv_dsd_a6348, &VAR_2->els_recv_dsd_a6348);
}
