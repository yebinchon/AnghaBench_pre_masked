
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecore_txq_start_ret_params {void* p_handle; int p_doorbell; } ;
struct ecore_queue_start_common_params {int dummy; } ;
struct ecore_queue_cid {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ecore_queue_cid* VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_queue_cid*,int ,int ,int ,int *) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_queue_cid*) ;
 struct ecore_queue_cid* FUNC_3 (struct ecore_hwfn*,int ,int,struct ecore_queue_start_common_params*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_queue_cid*,int ,int ,int *) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_3, u16 VAR_4,
    struct ecore_queue_start_common_params *VAR_5,
    u8 VAR_6,
    dma_addr_t VAR_7, u16 VAR_8,
    struct ecore_txq_start_ret_params *VAR_9)
{
 struct ecore_queue_cid *VAR_10;
 enum _ecore_status_t VAR_11;

 VAR_10 = FUNC_3(VAR_3, VAR_4, 0, VAR_5);
 if (VAR_10 == VAR_2)
  return VAR_0;

 if (FUNC_0(VAR_3->p_dev))
  VAR_11 = FUNC_1(VAR_3, VAR_10, VAR_6,
       VAR_7, VAR_8,
       &VAR_9->p_doorbell);
 else
  VAR_11 = FUNC_4(VAR_3, VAR_10,
        VAR_7, VAR_8,
        &VAR_9->p_doorbell);

 if (VAR_11 != VAR_1)
  FUNC_2(VAR_3, VAR_10);
 else
  VAR_9->p_handle = (void *)VAR_10;

 return VAR_11;
}
