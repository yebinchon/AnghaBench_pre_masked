
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int icb_zfwoptions; int icb_idelaytimer; int icb_racctimer; int icb_xfwoptions; int icb_reserved1; int icb_lunetimeout; int icb_icnt; int icb_ccnt; int icb_lunenables; int * icb_respaddr; int * icb_rqstaddr; int icb_rsltqlen; int icb_rqstqlen; int icb_rspnsin; int icb_rqstout; int * icb_nodename; int icb_logintime; int icb_iqdevtype; int icb_hardaddr; int * icb_portname; int icb_retry_delay; int icb_retry_count; int icb_execthrottle; int icb_maxalloc; int icb_maxfrmlen; int icb_fwoptions; int icb_reserved0; int icb_version; } ;
typedef TYPE_1__ isp_icb_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(ispsoftc_t *VAR_0, isp_icb_t *VAR_1, isp_icb_t *VAR_2)
{
 int VAR_3;
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_1->icb_version, &VAR_2->icb_reserved0);
  FUNC_1(VAR_0, VAR_1->icb_reserved0, &VAR_2->icb_version);
 } else {
  FUNC_1(VAR_0, VAR_1->icb_version, &VAR_2->icb_version);
  FUNC_1(VAR_0, VAR_1->icb_reserved0, &VAR_2->icb_reserved0);
 }
 FUNC_0(VAR_0, VAR_1->icb_fwoptions, &VAR_2->icb_fwoptions);
 FUNC_0(VAR_0, VAR_1->icb_maxfrmlen, &VAR_2->icb_maxfrmlen);
 FUNC_0(VAR_0, VAR_1->icb_maxalloc, &VAR_2->icb_maxalloc);
 FUNC_0(VAR_0, VAR_1->icb_execthrottle, &VAR_2->icb_execthrottle);
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_1->icb_retry_count, &VAR_2->icb_retry_delay);
  FUNC_1(VAR_0, VAR_1->icb_retry_delay, &VAR_2->icb_retry_count);
 } else {
  FUNC_1(VAR_0, VAR_1->icb_retry_count, &VAR_2->icb_retry_count);
  FUNC_1(VAR_0, VAR_1->icb_retry_delay, &VAR_2->icb_retry_delay);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, VAR_1->icb_portname[VAR_3], &VAR_2->icb_portname[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_hardaddr, &VAR_2->icb_hardaddr);
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_1->icb_iqdevtype, &VAR_2->icb_logintime);
  FUNC_1(VAR_0, VAR_1->icb_logintime, &VAR_2->icb_iqdevtype);
 } else {
  FUNC_1(VAR_0, VAR_1->icb_iqdevtype, &VAR_2->icb_iqdevtype);
  FUNC_1(VAR_0, VAR_1->icb_logintime, &VAR_2->icb_logintime);
 }
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_1(VAR_0, VAR_1->icb_nodename[VAR_3], &VAR_2->icb_nodename[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_rqstout, &VAR_2->icb_rqstout);
 FUNC_0(VAR_0, VAR_1->icb_rspnsin, &VAR_2->icb_rspnsin);
 FUNC_0(VAR_0, VAR_1->icb_rqstqlen, &VAR_2->icb_rqstqlen);
 FUNC_0(VAR_0, VAR_1->icb_rsltqlen, &VAR_2->icb_rsltqlen);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_rqstaddr[VAR_3], &VAR_2->icb_rqstaddr[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->icb_respaddr[VAR_3], &VAR_2->icb_respaddr[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->icb_lunenables, &VAR_2->icb_lunenables);
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_1->icb_ccnt, &VAR_2->icb_icnt);
  FUNC_1(VAR_0, VAR_1->icb_icnt, &VAR_2->icb_ccnt);
 } else {
  FUNC_1(VAR_0, VAR_1->icb_ccnt, &VAR_2->icb_ccnt);
  FUNC_1(VAR_0, VAR_1->icb_icnt, &VAR_2->icb_icnt);
 }
 FUNC_0(VAR_0, VAR_1->icb_lunetimeout, &VAR_2->icb_lunetimeout);
 FUNC_0(VAR_0, VAR_1->icb_reserved1, &VAR_2->icb_reserved1);
 FUNC_0(VAR_0, VAR_1->icb_xfwoptions, &VAR_2->icb_xfwoptions);
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_1->icb_racctimer, &VAR_2->icb_idelaytimer);
  FUNC_1(VAR_0, VAR_1->icb_idelaytimer, &VAR_2->icb_racctimer);
 } else {
  FUNC_1(VAR_0, VAR_1->icb_racctimer, &VAR_2->icb_racctimer);
  FUNC_1(VAR_0, VAR_1->icb_idelaytimer, &VAR_2->icb_idelaytimer);
 }
 FUNC_0(VAR_0, VAR_1->icb_zfwoptions, &VAR_2->icb_zfwoptions);
}
