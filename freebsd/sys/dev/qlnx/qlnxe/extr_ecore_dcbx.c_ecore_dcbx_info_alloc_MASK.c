
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iwarp_port; } ;
struct TYPE_4__ {TYPE_2__ rdma_pf_params; } ;
struct ecore_hwfn {TYPE_1__ pf_params; TYPE_3__* p_dcbx_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {int iwarp_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_9)
{

 FUNC_1(VAR_2 !=
     VAR_7);
 FUNC_1(VAR_3 !=
     VAR_8);
 FUNC_1(VAR_1 !=
     VAR_0);


 VAR_9->p_dcbx_info = FUNC_2(VAR_9->p_dev, VAR_6,
       sizeof(*VAR_9->p_dcbx_info));
 if (!VAR_9->p_dcbx_info) {
  FUNC_0(VAR_9, 0,
     "Failed to allocate `struct ecore_dcbx_info'");
  return VAR_4;
 }

 VAR_9->p_dcbx_info->iwarp_port =
  VAR_9->pf_params.rdma_pf_params.iwarp_port;

 return VAR_5;
}
