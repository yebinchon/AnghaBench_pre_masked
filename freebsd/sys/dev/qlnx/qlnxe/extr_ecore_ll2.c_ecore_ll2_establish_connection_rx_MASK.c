
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ai_err_packet_too_big; int ai_err_no_buf; } ;
struct TYPE_3__ {int set_prod_addr; } ;
struct ecore_ll2_info {TYPE_2__ input; TYPE_1__ rx_queue; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_ll2_error_handle { ____Placeholder_ecore_ll2_error_handle } ecore_ll2_error_handle ;
typedef enum core_error_handle { ____Placeholder_core_error_handle } core_error_handle ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int) ;
 int FUNC_1 (struct ecore_ll2_info*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ll2_info*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_3,
             struct ecore_ll2_info *VAR_4)
{
 enum ecore_ll2_error_handle VAR_5;
 enum core_error_handle VAR_6;
 u8 VAR_7 = 0;

 if (!FUNC_1(VAR_4))
  return VAR_2;

 FUNC_0(VAR_3, VAR_4->rx_queue.set_prod_addr, 0x0);
 VAR_5 = VAR_4->input.ai_err_packet_too_big;
 VAR_6 = FUNC_3(VAR_5);
 FUNC_2(VAR_7,
    VAR_1, VAR_6);
 VAR_5 = VAR_4->input.ai_err_no_buf;
 VAR_6 = FUNC_3(VAR_5);
 FUNC_2(VAR_7,
    VAR_0, VAR_6);

 return FUNC_4(VAR_3, VAR_4, VAR_7);
}
