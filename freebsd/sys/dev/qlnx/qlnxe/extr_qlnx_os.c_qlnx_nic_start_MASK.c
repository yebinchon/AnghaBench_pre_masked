
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hw_init_params {int b_hw_start; int allow_npar_tx_switch; int * bin_fw_data; int int_mode; int * p_tunn; } ;
struct ecore_dev {int int_mode; } ;


 int FUNC_0 (struct ecore_hw_init_params*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_hw_init_params*) ;
 int FUNC_2 (struct ecore_dev*) ;

__attribute__((used)) static int
FUNC_3(struct ecore_dev *VAR_0)
{
        int VAR_1;
 struct ecore_hw_init_params VAR_2;

 FUNC_0(&VAR_2, sizeof (struct ecore_hw_init_params));

 VAR_2.p_tunn = ((void*)0);
 VAR_2.b_hw_start = 1;
 VAR_2.int_mode = VAR_0->int_mode;
 VAR_2.allow_npar_tx_switch = 1;
 VAR_2.bin_fw_data = ((void*)0);

        VAR_1 = FUNC_1(VAR_0, &VAR_2);
        if (VAR_1) {
                FUNC_2(VAR_0);
                return VAR_1;
        }

        return 0;
}
