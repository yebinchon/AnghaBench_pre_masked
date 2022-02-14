
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct init_qm_vport_params {int dummy; } ;
struct init_qm_pq_params {int dummy; } ;
struct init_qm_port_params {int dummy; } ;
struct ecore_wfq_data {int dummy; } ;
struct ecore_qm_info {void* wfq_data; void* qm_port_params; void* qm_vport_params; void* qm_pq_params; } ;
struct ecore_hwfn {TYPE_1__* p_dev; struct ecore_qm_info qm_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int num_ports_in_engine; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_3)
{
 struct ecore_qm_info *VAR_4 = &VAR_3->qm_info;
 enum _ecore_status_t VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 != VAR_1)
  goto alloc_err;

 VAR_4->qm_pq_params = FUNC_1(VAR_3->p_dev, VAR_2,
         sizeof(struct init_qm_pq_params) *
         FUNC_2(VAR_3));
 if (!VAR_4->qm_pq_params)
  goto alloc_err;

 VAR_4->qm_vport_params = FUNC_1(VAR_3->p_dev, VAR_2,
            sizeof(struct init_qm_vport_params) *
            FUNC_3(VAR_3));
 if (!VAR_4->qm_vport_params)
  goto alloc_err;

 VAR_4->qm_port_params = FUNC_1(VAR_3->p_dev, VAR_2,
           sizeof(struct init_qm_port_params) *
           VAR_3->p_dev->num_ports_in_engine);
 if (!VAR_4->qm_port_params)
  goto alloc_err;

 VAR_4->wfq_data = FUNC_1(VAR_3->p_dev, VAR_2,
     sizeof(struct ecore_wfq_data) *
     FUNC_3(VAR_3));
 if (!VAR_4->wfq_data)
  goto alloc_err;

 return VAR_1;

alloc_err:
 FUNC_0(VAR_3, 0, "Failed to allocate memory for QM params\n");
 FUNC_5(VAR_3);
 return VAR_0;
}
