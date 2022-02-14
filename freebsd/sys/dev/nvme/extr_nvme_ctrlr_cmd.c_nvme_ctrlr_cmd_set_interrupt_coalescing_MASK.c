
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_controller*,int ,int,int *,int ,int ,void*) ;
 int FUNC_1 (struct nvme_controller*,char*,int) ;

void
FUNC_2(struct nvme_controller *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3, nvme_cb_fn_t VAR_4, void *VAR_5)
{
 uint32_t VAR_6;

 if ((VAR_2/100) >= 0x100) {
  FUNC_1(VAR_1, "invalid coal time %d, disabling\n",
      VAR_2);
  VAR_2 = 0;
  VAR_3 = 0;
 }

 if (VAR_3 >= 0x100) {
  FUNC_1(VAR_1, "invalid threshold %d, disabling\n",
      VAR_3);
  VAR_3 = 0;
  VAR_2 = 0;
 }

 VAR_6 = ((VAR_2/100) << 8) | VAR_3;
 FUNC_0(VAR_1, VAR_0, VAR_6,
     ((void*)0), 0, VAR_4, VAR_5);
}
