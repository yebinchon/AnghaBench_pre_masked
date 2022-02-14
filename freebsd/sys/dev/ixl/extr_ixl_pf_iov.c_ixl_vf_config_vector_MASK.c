
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct virtchnl_vector_map {int rxq_map; int txq_map; int vector_id; } ;
struct ixl_vf {int vf_num; int qtag; } ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef enum i40e_queue_type { ____Placeholder_i40e_queue_type } i40e_queue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_hw*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ixl_pf*,struct virtchnl_vector_map const*,int,int,int*,int*) ;
 int FUNC_6 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct ixl_pf *VAR_5, struct ixl_vf *VAR_6,
    const struct virtchnl_vector_map *VAR_7)
{
 struct i40e_hw *VAR_8;
 u_int VAR_9;
 enum i40e_queue_type VAR_10, VAR_11;
 uint32_t VAR_12;
 uint16_t VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_8 = &VAR_5->hw;

 VAR_13 = VAR_7->rxq_map;
 VAR_14 = VAR_7->txq_map;

 VAR_16 = VAR_4;
 VAR_11 = VAR_0;






 while ((VAR_13 != 0) || (VAR_14 != 0)) {
  if (VAR_14 != 0) {
   VAR_9 = FUNC_2(VAR_14) - 1;
   VAR_10 = VAR_1;
   VAR_15 = FUNC_4(&VAR_6->qtag, VAR_9);
   FUNC_5(VAR_5, VAR_7, VAR_10, VAR_15,
       &VAR_11, &VAR_16);
   VAR_14 &= ~(1 << VAR_9);
  }

  if (VAR_13 != 0) {
   VAR_9 = FUNC_2(VAR_13) - 1;
   VAR_10 = VAR_0;
   VAR_15 = FUNC_4(&VAR_6->qtag, VAR_9);
   FUNC_5(VAR_5, VAR_7, VAR_10, VAR_15,
       &VAR_11, &VAR_16);
   VAR_13 &= ~(1 << VAR_9);
  }
 }

 if (VAR_7->vector_id == 0)
  VAR_12 = FUNC_0(VAR_6->vf_num);
 else
  VAR_12 = FUNC_1(VAR_8, VAR_7->vector_id,
      VAR_6->vf_num);
 FUNC_6(VAR_8, VAR_12,
     (VAR_16 << VAR_2) |
     (VAR_11 << VAR_3));

 FUNC_3(VAR_8);
}
