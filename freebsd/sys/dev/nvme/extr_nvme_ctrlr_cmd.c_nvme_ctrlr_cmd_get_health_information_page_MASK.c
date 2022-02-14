
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_health_information_page {int dummy; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_controller*,int ,int ,struct nvme_health_information_page*,int,int ,void*) ;

void
FUNC_1(struct nvme_controller *VAR_1,
    uint32_t VAR_2, struct nvme_health_information_page *VAR_3,
    nvme_cb_fn_t VAR_4, void *VAR_5)
{

 FUNC_0(VAR_1, VAR_0,
     VAR_2, VAR_3, sizeof(*VAR_3), VAR_4, VAR_5);
}
