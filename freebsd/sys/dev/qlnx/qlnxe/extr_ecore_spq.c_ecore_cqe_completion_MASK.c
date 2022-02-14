
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_slow_path_rx_cqe {int echo; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct eth_slow_path_rx_cqe*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int ,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_1,
       struct eth_slow_path_rx_cqe *VAR_2,
       enum protocol_type VAR_3)
{
 if (FUNC_0(VAR_1->p_dev))
  return FUNC_1(VAR_1, VAR_2, VAR_3);





 return FUNC_2(VAR_1, VAR_2->echo, 0, VAR_0);
}
