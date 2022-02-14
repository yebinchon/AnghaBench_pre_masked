
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * snscb_hardaddr; int snscb_reserved; int * snscb_fpname; int * snscb_fc4_types; int * snscb_svc_class; int * snscb_ipaddr; int * snscb_ipassoc; int * snscb_nname; int snscb_nnlen; int * snscb_nodename; int * snscb_pname; int snscb_pnlen; int * snscb_portname; int * snscb_port_id; int snscb_port_type; int snscb_cthdr; } ;
typedef TYPE_1__ sns_ga_nxt_rsp_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, sns_ga_nxt_rsp_t *VAR_1, sns_ga_nxt_rsp_t *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_0, &VAR_1->snscb_cthdr, &VAR_2->snscb_cthdr);
 FUNC_0(VAR_0, &VAR_1->snscb_port_type, VAR_2->snscb_port_type);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_port_id[VAR_3], VAR_2->snscb_port_id[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_portname[VAR_3], VAR_2->snscb_portname[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->snscb_pnlen, VAR_2->snscb_pnlen);
 for (VAR_3 = 0; VAR_3 < 255; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_pname[VAR_3], VAR_2->snscb_pname[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_nodename[VAR_3], VAR_2->snscb_nodename[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->snscb_nnlen, VAR_2->snscb_nnlen);
 for (VAR_3 = 0; VAR_3 < 255; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_nname[VAR_3], VAR_2->snscb_nname[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_ipassoc[VAR_3], VAR_2->snscb_ipassoc[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_ipaddr[VAR_3], VAR_2->snscb_ipaddr[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_svc_class[VAR_3], VAR_2->snscb_svc_class[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_fc4_types[VAR_3], VAR_2->snscb_fc4_types[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_fpname[VAR_3], VAR_2->snscb_fpname[VAR_3]);
 }
 FUNC_0(VAR_0, &VAR_1->snscb_reserved, VAR_2->snscb_reserved);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->snscb_hardaddr[VAR_3], VAR_2->snscb_hardaddr[VAR_3]);
 }
}
