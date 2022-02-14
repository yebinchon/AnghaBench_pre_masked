
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ecore_filter_accept_flags {int dummy; } ;
struct ecore_sp_vport_update_params {struct ecore_filter_accept_flags accept_flags; } ;
struct ecore_hwfn {scalar_t__ p_dev; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int) ;

__attribute__((used)) static int
FUNC_3(struct ecore_hwfn *VAR_4, uint8_t VAR_5,
        struct ecore_sp_vport_update_params *VAR_6, uint16_t * VAR_7)
{
        uint8_t VAR_8;
        struct ecore_filter_accept_flags *VAR_9;

 if (!FUNC_2(VAR_4, VAR_5)) {
  FUNC_1(((qlnx_host_t *)VAR_4->p_dev),
   "VF[%d] vport not initialized\n", VAR_5);
  return VAR_2;
 }





        VAR_8 = VAR_1 | VAR_0;
        VAR_9 = &VAR_6->accept_flags;
        if (!(*VAR_7 & FUNC_0(VAR_3)))
                return 0;

        return 0;

}
