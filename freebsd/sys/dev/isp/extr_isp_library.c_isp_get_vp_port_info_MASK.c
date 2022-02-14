
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vp_port_portid_hi; int vp_port_portid_lo; int * vp_port_nodename; int * vp_port_portname; int vp_port_loopid; int vp_port_options; int vp_port_status; } ;
typedef TYPE_1__ vp_port_info_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(ispsoftc_t *VAR_0, vp_port_info_t *VAR_1, vp_port_info_t *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_0, &VAR_1->vp_port_status, VAR_2->vp_port_status);
 FUNC_2(VAR_0, &VAR_1->vp_port_options, VAR_2->vp_port_options);
 FUNC_2(VAR_0, &VAR_1->vp_port_loopid, VAR_2->vp_port_loopid);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vp_port_portname); VAR_3++) {
  FUNC_2(VAR_0, &VAR_1->vp_port_portname[VAR_3], VAR_2->vp_port_portname[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vp_port_nodename); VAR_3++) {
  FUNC_2(VAR_0, &VAR_1->vp_port_nodename[VAR_3], VAR_2->vp_port_nodename[VAR_3]);
 }
 FUNC_1(VAR_0, &VAR_1->vp_port_portid_lo, VAR_2->vp_port_portid_lo);
 FUNC_1(VAR_0, &VAR_1->vp_port_portid_hi, VAR_2->vp_port_portid_hi);
}
