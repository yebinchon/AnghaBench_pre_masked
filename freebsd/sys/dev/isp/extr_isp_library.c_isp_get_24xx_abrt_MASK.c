
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * abrt_reserved1; int abrt_vpidx; int abrt_tidhi; int abrt_tidlo; int * abrt_reserved; int abrt_queue_number; int abrt_cmd_handle; int abrt_options; int abrt_nphdl; int abrt_handle; int abrt_header; } ;
typedef TYPE_1__ isp24xx_abrt_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;

void
FUNC_5(ispsoftc_t *VAR_0, isp24xx_abrt_t *VAR_1, isp24xx_abrt_t *VAR_2)
{
 int VAR_3;
 FUNC_4(VAR_0, &VAR_1->abrt_header, &VAR_2->abrt_header);
 FUNC_2(VAR_0, &VAR_1->abrt_handle, VAR_2->abrt_handle);
 FUNC_1(VAR_0, &VAR_1->abrt_nphdl, VAR_2->abrt_nphdl);
 FUNC_1(VAR_0, &VAR_1->abrt_options, VAR_2->abrt_options);
 FUNC_2(VAR_0, &VAR_1->abrt_cmd_handle, VAR_2->abrt_cmd_handle);
 FUNC_1(VAR_0, &VAR_1->abrt_queue_number, VAR_2->abrt_queue_number);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->abrt_reserved); VAR_3++) {
  FUNC_3(VAR_0, &VAR_1->abrt_reserved[VAR_3], VAR_2->abrt_reserved[VAR_3]);
 }
 FUNC_1(VAR_0, &VAR_1->abrt_tidlo, VAR_2->abrt_tidlo);
 FUNC_3(VAR_0, &VAR_1->abrt_tidhi, VAR_2->abrt_tidhi);
 FUNC_3(VAR_0, &VAR_1->abrt_vpidx, VAR_2->abrt_vpidx);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->abrt_reserved1); VAR_3++) {
  FUNC_3(VAR_0, &VAR_1->abrt_reserved1[VAR_3], VAR_2->abrt_reserved1[VAR_3]);
 }
}
