
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_pf_params {int dummy; } ;
struct ecore_hwfn {int using_ll2; struct ecore_pf_params pf_params; } ;
struct ecore_dev {int num_hwfns; struct ecore_hwfn* hwfns; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (struct ecore_dev*) ;
 int FUNC_1 (struct ecore_dev*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct ecore_dev *VAR_0, struct ecore_pf_params *VAR_1)
{
        int VAR_2, VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_0->num_hwfns; VAR_3++) {
                struct ecore_hwfn *VAR_4 = &VAR_0->hwfns[VAR_3];
                VAR_4->pf_params = *VAR_1;







        }

        VAR_2 = FUNC_0(VAR_0);
        if (VAR_2)
                goto qlnx_nic_setup_exit;

        FUNC_1(VAR_0);

qlnx_nic_setup_exit:

        return VAR_2;
}
