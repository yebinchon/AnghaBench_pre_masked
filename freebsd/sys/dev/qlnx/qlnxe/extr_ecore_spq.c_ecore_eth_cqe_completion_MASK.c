
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_slow_path_rx_cqe {int ramrod_cmd_id; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct eth_slow_path_rx_cqe*,int ) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
           struct eth_slow_path_rx_cqe *VAR_2)
{
 enum _ecore_status_t VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, 1,
     "Failed to handle RXQ CQE [cmd 0x%02x]\n",
     VAR_2->ramrod_cmd_id);
 }

 return VAR_3;
}
