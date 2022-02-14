
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_public_vf_info {int forced_mac; } ;
struct ecore_hwfn {scalar_t__ p_dev; } ;
struct ecore_filter_ucast {scalar_t__ type; int mac; } ;
typedef int qlnx_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 struct ecore_public_vf_info* FUNC_1 (struct ecore_hwfn*,int,int) ;
 int FUNC_2 (struct ecore_hwfn*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ecore_hwfn *VAR_5, int VAR_6,
 struct ecore_filter_ucast *VAR_7)
{
        struct ecore_public_vf_info *VAR_8;

 if (!FUNC_2(VAR_5, VAR_6)) {
  FUNC_0(((qlnx_host_t *)VAR_5->p_dev),
   "VF[%d] vport not initialized\n", VAR_6);
  return VAR_2;
 }

        VAR_8 = FUNC_1(VAR_5, VAR_6, 1);
        if (!VAR_8)
                return -VAR_3;


        if (VAR_7->type == VAR_0 ||
            VAR_7->type == VAR_1)
                FUNC_3(VAR_7->mac, VAR_8->forced_mac, VAR_4);

        return 0;
}
