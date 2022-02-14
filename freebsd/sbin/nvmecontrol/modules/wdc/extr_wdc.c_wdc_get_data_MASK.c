
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int opc; void* cdw12; void* cdw11; void* cdw10; } ;
struct nvme_pt_command {size_t len; int is_read; int cpl; int * buf; TYPE_1__ cmd; } ;
typedef int pt ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,struct nvme_pt_command*) ;
 int FUNC_4 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
    uint8_t *VAR_6, size_t VAR_7)
{
 struct nvme_pt_command VAR_8;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd.opc = VAR_2;
 VAR_8.cmd.cdw10 = FUNC_2(VAR_3 / sizeof(uint32_t));
 VAR_8.cmd.cdw11 = FUNC_2(VAR_4 / sizeof(uint32_t));
 VAR_8.cmd.cdw12 = FUNC_2(VAR_5);
 VAR_8.buf = VAR_6;
 VAR_8.len = VAR_7;
 VAR_8.is_read = 1;



 if (FUNC_3(VAR_1, VAR_0, &VAR_8) < 0)
  FUNC_0(1, "wdc_get_data request failed");
 if (FUNC_5(&VAR_8.cpl))
  FUNC_1(1, "wdc_get_data request returned error");
}
