
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ispsoftc_t ;
struct TYPE_4__ {int * tmf_reserved2; int tmf_vpidx; int tmf_tidhi; int tmf_tidlo; int * tmf_reserved1; int tmf_flags; int * tmf_lun; int * tmf_reserved0; int tmf_timeout; int tmf_delay; int tmf_nphdl; int tmf_handle; int tmf_header; } ;
typedef TYPE_1__ isp24xx_tmf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;

void
FUNC_6(ispsoftc_t *VAR_0, isp24xx_tmf_t *VAR_1, isp24xx_tmf_t *VAR_2)
{
 int VAR_3;
 uint32_t *VAR_4, *VAR_5;

 FUNC_5(VAR_0, &VAR_1->tmf_header, &VAR_2->tmf_header);
 FUNC_2(VAR_0, VAR_1->tmf_handle, &VAR_2->tmf_handle);
 FUNC_1(VAR_0, VAR_1->tmf_nphdl, &VAR_2->tmf_nphdl);
 FUNC_1(VAR_0, VAR_1->tmf_delay, &VAR_2->tmf_delay);
 FUNC_1(VAR_0, VAR_1->tmf_timeout, &VAR_2->tmf_timeout);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->tmf_reserved0); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->tmf_reserved0[VAR_3], &VAR_2->tmf_reserved0[VAR_3]);
 }
 VAR_4 = (uint32_t *) VAR_1->tmf_lun;
 VAR_5 = (uint32_t *) VAR_2->tmf_lun;
 for (VAR_3 = 0; VAR_3 < (FUNC_0(VAR_1->tmf_lun) >> 2); VAR_3++ ) {
  *VAR_5++ = FUNC_4(VAR_0, *VAR_4++);
 }
 FUNC_2(VAR_0, VAR_1->tmf_flags, &VAR_2->tmf_flags);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->tmf_reserved1); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->tmf_reserved1[VAR_3], &VAR_2->tmf_reserved1[VAR_3]);
 }
 FUNC_1(VAR_0, VAR_1->tmf_tidlo, &VAR_2->tmf_tidlo);
 FUNC_3(VAR_0, VAR_1->tmf_tidhi, &VAR_2->tmf_tidhi);
 FUNC_3(VAR_0, VAR_1->tmf_vpidx, &VAR_2->tmf_vpidx);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->tmf_reserved2); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->tmf_reserved2[VAR_3], &VAR_2->tmf_reserved2[VAR_3]);
 }
}
