
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * icb_reserved3; int icb_disctime; int * icb_enodemac; int * icb_reserved2; int icb_qos; int icb_fwoptions3; int icb_fwoptions2; int icb_fwoptions1; int icb_logintime; int icb_idelaytimer; int * icb_atioqaddr; int icb_atioqlen; int icb_atio_in; int * icb_reserved1; int icb_msixatio; int icb_msixresp; int * icb_priaddr; int * icb_respaddr; int * icb_rqstaddr; int icb_prqstqlen; int icb_ldn_nols; int icb_rqstqlen; int icb_rsltqlen; int icb_priout; int icb_retry_count; int icb_rqstout; int icb_rspnsin; int * icb_nodename; int * icb_portname; int icb_hardaddr; int icb_xchgcnt; int icb_execthrottle; int icb_maxfrmlen; int icb_reserved0; int icb_version; } ;
typedef TYPE_1__ isp_icb_2400_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, isp_icb_2400_t *VAR_1, isp_icb_2400_t *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0, VAR_1->icb_version, &VAR_2->icb_version);
 FUNC_0(VAR_0, VAR_1->icb_reserved0, &VAR_2->icb_reserved0);
 FUNC_0(VAR_0, VAR_1->icb_maxfrmlen, &VAR_2->icb_maxfrmlen);
 FUNC_0(VAR_0, VAR_1->icb_execthrottle, &VAR_2->icb_execthrottle);
 FUNC_0(VAR_0, VAR_1->icb_xchgcnt, &VAR_2->icb_xchgcnt);
 FUNC_0(VAR_0, VAR_1->icb_hardaddr, &VAR_2->icb_hardaddr);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_2(VAR_0, VAR_1->icb_portname[VAR_3], &VAR_2->icb_portname[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_2(VAR_0, VAR_1->icb_nodename[VAR_3], &VAR_2->icb_nodename[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_rspnsin, &VAR_2->icb_rspnsin);
 FUNC_0(VAR_0, VAR_1->icb_rqstout, &VAR_2->icb_rqstout);
 FUNC_0(VAR_0, VAR_1->icb_retry_count, &VAR_2->icb_retry_count);
 FUNC_0(VAR_0, VAR_1->icb_priout, &VAR_2->icb_priout);
 FUNC_0(VAR_0, VAR_1->icb_rsltqlen, &VAR_2->icb_rsltqlen);
 FUNC_0(VAR_0, VAR_1->icb_rqstqlen, &VAR_2->icb_rqstqlen);
 FUNC_0(VAR_0, VAR_1->icb_ldn_nols, &VAR_2->icb_ldn_nols);
 FUNC_0(VAR_0, VAR_1->icb_prqstqlen, &VAR_2->icb_prqstqlen);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_rqstaddr[VAR_3], &VAR_2->icb_rqstaddr[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_respaddr[VAR_3], &VAR_2->icb_respaddr[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_priaddr[VAR_3], &VAR_2->icb_priaddr[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_msixresp, &VAR_2->icb_msixresp);
 FUNC_0(VAR_0, VAR_1->icb_msixatio, &VAR_2->icb_msixatio);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_reserved1[VAR_3], &VAR_2->icb_reserved1[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_atio_in, &VAR_2->icb_atio_in);
 FUNC_0(VAR_0, VAR_1->icb_atioqlen, &VAR_2->icb_atioqlen);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_atioqaddr[VAR_3], &VAR_2->icb_atioqaddr[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_idelaytimer, &VAR_2->icb_idelaytimer);
 FUNC_0(VAR_0, VAR_1->icb_logintime, &VAR_2->icb_logintime);
 FUNC_1(VAR_0, VAR_1->icb_fwoptions1, &VAR_2->icb_fwoptions1);
 FUNC_1(VAR_0, VAR_1->icb_fwoptions2, &VAR_2->icb_fwoptions2);
 FUNC_1(VAR_0, VAR_1->icb_fwoptions3, &VAR_2->icb_fwoptions3);
 FUNC_0(VAR_0, VAR_1->icb_qos, &VAR_2->icb_qos);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_0(VAR_0, VAR_1->icb_reserved2[VAR_3], &VAR_2->icb_reserved2[VAR_3]);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_0(VAR_0, VAR_1->icb_enodemac[VAR_3], &VAR_2->icb_enodemac[VAR_3]);
 FUNC_0(VAR_0, VAR_1->icb_disctime, &VAR_2->icb_disctime);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_0(VAR_0, VAR_1->icb_reserved3[VAR_3], &VAR_2->icb_reserved3[VAR_3]);
}
