
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_tx_queues; int vsi_num; } ;
struct ixl_vf {int qtag; TYPE_1__ vsi; int vf_num; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct i40e_hw*,struct ixl_vf*,int,int) ;
 int FUNC_7 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct ixl_pf *VAR_6, struct ixl_vf *VAR_7)
{
 struct i40e_hw *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_8 = &VAR_6->hw;





 FUNC_3(VAR_8, FUNC_2(VAR_7->vsi.vsi_num),
      VAR_3);


 FUNC_7(VAR_8, FUNC_0(VAR_7->vf_num),
     VAR_0);



 for (VAR_10 = 0; VAR_10 < VAR_7->vsi.num_tx_queues; VAR_10++) {
  VAR_9 = FUNC_5(&VAR_7->qtag, VAR_10) <<
      VAR_2;

  FUNC_7(VAR_8, FUNC_1(VAR_10, VAR_7->vf_num), VAR_9);
 }
 for (; VAR_10 < VAR_5; VAR_10++)
  FUNC_7(VAR_8, FUNC_1(VAR_10, VAR_7->vf_num),
      VAR_1);




 for (VAR_10 = 0; VAR_10 < VAR_7->vsi.num_tx_queues; VAR_10++)
  FUNC_6(VAR_8, VAR_7, VAR_10,
      FUNC_5(&VAR_7->qtag, VAR_10));


 for (; VAR_10 < VAR_5; VAR_10++)
  FUNC_6(VAR_8, VAR_7, VAR_10,
      VAR_4);

 FUNC_4(VAR_8);
}
