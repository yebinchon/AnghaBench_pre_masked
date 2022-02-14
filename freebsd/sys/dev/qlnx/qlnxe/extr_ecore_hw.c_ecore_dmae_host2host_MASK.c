
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; } ;
struct ecore_dmae_params {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ,int ,int ,struct ecore_dmae_params*) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_1,
       struct ecore_ptt *VAR_2,
       dma_addr_t VAR_3,
       dma_addr_t VAR_4,
       u32 VAR_5,
       struct ecore_dmae_params *VAR_6)
{
 enum _ecore_status_t VAR_7;

 FUNC_0(&VAR_1->dmae_info.lock);

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3,
     VAR_4,
     VAR_0,
     VAR_0,
     VAR_5,
     VAR_6);

 FUNC_1(&VAR_1->dmae_info.lock);

 return VAR_7;
}
