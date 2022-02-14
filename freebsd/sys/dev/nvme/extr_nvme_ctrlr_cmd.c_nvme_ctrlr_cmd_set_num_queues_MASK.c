
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_controller*,int ,int,int *,int ,int ,void*) ;

void
FUNC_1(struct nvme_controller *VAR_1,
    uint32_t VAR_2, nvme_cb_fn_t VAR_3, void *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = ((VAR_2 - 1) << 16) | (VAR_2 - 1);
 FUNC_0(VAR_1, VAR_0, VAR_5,
     ((void*)0), 0, VAR_3, VAR_4);
}
