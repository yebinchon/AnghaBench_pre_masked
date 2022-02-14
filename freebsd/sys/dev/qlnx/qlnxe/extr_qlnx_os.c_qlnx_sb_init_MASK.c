
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ecore_sb_info {int dummy; } ;
struct ecore_hwfn {int p_main_ptt; } ;
struct ecore_dev {int num_hwfns; struct ecore_hwfn* hwfns; } ;
typedef int qlnx_host_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int *,char*,int,struct ecore_hwfn*,int,int,struct ecore_sb_info*,void*,void*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,struct ecore_sb_info*,void*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct ecore_dev *VAR_0, struct ecore_sb_info *VAR_1,
 void *VAR_2, bus_addr_t VAR_3, u16 VAR_4)
{
        struct ecore_hwfn *VAR_5;
        int VAR_6, VAR_7;
        u16 VAR_8;

        VAR_6 = VAR_4 % VAR_0->num_hwfns;
        VAR_5 = &VAR_0->hwfns[VAR_6];
        VAR_8 = VAR_4 / VAR_0->num_hwfns;

        FUNC_0(((qlnx_host_t *)VAR_0),
                "hwfn_index = %d p_hwfn = %p sb_id = 0x%x rel_sb_id = 0x%x                 sb_info = %p sb_virt_addr = %p sb_phy_addr = %p\n",

                VAR_6, VAR_5, VAR_4, VAR_8, VAR_1,
                VAR_2, (void *)VAR_3);

        VAR_7 = FUNC_1(VAR_5, VAR_5->p_main_ptt, VAR_1,
                             VAR_2, VAR_3, VAR_8);

        return VAR_7;
}
