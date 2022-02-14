
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ispsoftc_t ;
struct TYPE_4__ {int * ridacq_reserved1; int * ridacq_map; int ridacq_format; int ridacq_vp_port_hi; int ridacq_vp_port_lo; int ridacq_vp_status; int ridacq_vp_index; int ridacq_vp_setup; int ridacq_vp_acquired; int ridacq_handle; int ridacq_hdr; } ;
typedef TYPE_1__ isp_ridacq_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, isp_ridacq_t *VAR_1, isp_ridacq_t *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0, &VAR_1->ridacq_hdr, &VAR_2->ridacq_hdr);
 FUNC_1(VAR_0, &VAR_1->ridacq_handle, VAR_2->ridacq_handle);
 FUNC_2(VAR_0, &VAR_1->ridacq_vp_acquired, VAR_2->ridacq_vp_acquired);
 FUNC_2(VAR_0, &VAR_1->ridacq_vp_setup, VAR_2->ridacq_vp_setup);
 FUNC_2(VAR_0, &VAR_1->ridacq_vp_index, VAR_2->ridacq_vp_index);
 FUNC_2(VAR_0, &VAR_1->ridacq_vp_status, VAR_2->ridacq_vp_status);
 FUNC_0(VAR_0, &VAR_1->ridacq_vp_port_lo, VAR_2->ridacq_vp_port_lo);
 FUNC_2(VAR_0, &VAR_1->ridacq_vp_port_hi, VAR_2->ridacq_vp_port_hi);
 FUNC_2(VAR_0, &VAR_1->ridacq_format, VAR_2->ridacq_format);
 for (VAR_3 = 0; VAR_3 < sizeof (VAR_1->ridacq_map) / sizeof (VAR_1->ridacq_map[0]); VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->ridacq_map[VAR_3], VAR_2->ridacq_map[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < sizeof (VAR_1->ridacq_reserved1) / sizeof (VAR_1->ridacq_reserved1[0]); VAR_3++) {
  FUNC_0(VAR_0, &VAR_1->ridacq_reserved1[VAR_3], VAR_2->ridacq_reserved1[VAR_3]);
 }
}
