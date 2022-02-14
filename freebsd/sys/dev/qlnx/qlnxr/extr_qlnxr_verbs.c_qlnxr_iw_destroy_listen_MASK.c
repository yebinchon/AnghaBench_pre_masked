
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_iw_listener {scalar_t__ ecore_handle; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int device; struct qlnxr_iw_listener* provider_data; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct qlnxr_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct iw_cm_id*) ;

void
FUNC_4(struct iw_cm_id *VAR_0)
{
 struct qlnxr_iw_listener *VAR_1 = VAR_0->provider_data;
 struct qlnxr_dev *VAR_2 = FUNC_2((VAR_0->device));
 int VAR_3 = 0;
 qlnx_host_t *VAR_4;

 VAR_4 = VAR_2->ha;

 FUNC_0(VAR_4, "enter\n");

 if (VAR_1->ecore_handle)
  VAR_3 = FUNC_1(VAR_2->rdma_ctx,
    VAR_1->ecore_handle);

 VAR_0->rem_ref(VAR_0);

 FUNC_0(VAR_4, "exit [%d]\n", VAR_3);
 return;
}
