
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct virtchnl_vector_map {int rxitr_idx; int txitr_idx; int vector_id; } ;
struct ixl_pf {int hw; } ;
typedef enum i40e_queue_type { ____Placeholder_i40e_queue_type } i40e_queue_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_6,
    const struct virtchnl_vector_map *VAR_7,
    enum i40e_queue_type VAR_8, uint16_t VAR_9,
    enum i40e_queue_type *VAR_10, uint16_t *VAR_11)
{
 uint32_t VAR_12, VAR_13;
 uint16_t VAR_14;

 if (VAR_8 == VAR_5) {
  VAR_12 = FUNC_0(VAR_9);
  VAR_14 = VAR_7->rxitr_idx;
 } else {
  VAR_12 = FUNC_1(VAR_9);
  VAR_14 = VAR_7->txitr_idx;
 }

 VAR_13 = FUNC_2((VAR_7->vector_id << VAR_2) |
     (*VAR_10 << VAR_4) |
     (*VAR_11 << VAR_3) |
     VAR_0 |
     (VAR_14 << VAR_1));

 FUNC_3(&VAR_6->hw, VAR_12, VAR_13);

 *VAR_10 = VAR_8;
 *VAR_11 = VAR_9;
}
