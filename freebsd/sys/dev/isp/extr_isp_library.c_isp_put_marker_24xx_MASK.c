
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * mrk_reserved3; int * mrk_lun; int mrk_reserved2; int mrk_vphdl; int mrk_reserved1; int mrk_reserved0; int mrk_modifier; int mrk_nphdl; int mrk_handle; int mrk_header; } ;
typedef TYPE_1__ isp_marker_24xx_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *) ;

void
FUNC_5(ispsoftc_t *VAR_0, isp_marker_24xx_t *VAR_1, isp_marker_24xx_t *VAR_2)
{
 int VAR_3;
 FUNC_4(VAR_0, &VAR_1->mrk_header, &VAR_2->mrk_header);
 FUNC_2(VAR_0, VAR_1->mrk_handle, &VAR_2->mrk_handle);
 FUNC_1(VAR_0, VAR_1->mrk_nphdl, &VAR_2->mrk_nphdl);
 FUNC_3(VAR_0, VAR_1->mrk_modifier, &VAR_2->mrk_modifier);
 FUNC_3(VAR_0, VAR_1->mrk_reserved0, &VAR_2->mrk_reserved0);
 FUNC_3(VAR_0, VAR_1->mrk_reserved1, &VAR_2->mrk_reserved1);
 FUNC_3(VAR_0, VAR_1->mrk_vphdl, &VAR_2->mrk_vphdl);
 FUNC_3(VAR_0, VAR_1->mrk_reserved2, &VAR_2->mrk_reserved2);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->mrk_lun); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->mrk_lun[VAR_3], &VAR_2->mrk_lun[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->mrk_reserved3); VAR_3++) {
  FUNC_3(VAR_0, VAR_1->mrk_reserved3[VAR_3], &VAR_2->mrk_reserved3[VAR_3]);
 }
}
