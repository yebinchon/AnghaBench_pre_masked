
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_qm_info {void* wfq_data; void* qm_port_params; void* qm_vport_params; void* qm_pq_params; } ;
struct ecore_hwfn {int p_dev; struct ecore_qm_info qm_info; } ;


 int FUNC_0 (int ,void*) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1)
{
 struct ecore_qm_info *VAR_2 = &VAR_1->qm_info;

 FUNC_0(VAR_1->p_dev, VAR_2->qm_pq_params);
 VAR_2->qm_pq_params = VAR_0;
 FUNC_0(VAR_1->p_dev, VAR_2->qm_vport_params);
 VAR_2->qm_vport_params = VAR_0;
 FUNC_0(VAR_1->p_dev, VAR_2->qm_port_params);
 VAR_2->qm_port_params = VAR_0;
 FUNC_0(VAR_1->p_dev, VAR_2->wfq_data);
 VAR_2->wfq_data = VAR_0;
}
