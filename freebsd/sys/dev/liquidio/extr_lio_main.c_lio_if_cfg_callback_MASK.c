
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lio_firmware_version; } ;
struct octeon_device {TYPE_1__ fw_info; } ;
struct lio_soft_command {scalar_t__ ctxptr; scalar_t__ virtrptr; } ;
struct TYPE_4__ {char* lio_firmware_version; } ;
struct lio_if_cfg_resp {TYPE_2__ cfg_info; scalar_t__ status; } ;
struct lio_if_cfg_context {int cond; int octeon_id; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_device*,char*,int ,int ) ;
 struct octeon_device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct octeon_device *VAR_0, uint32_t VAR_1, void *VAR_2)
{
 struct lio_soft_command *VAR_3 = (struct lio_soft_command *)VAR_2;
 struct lio_if_cfg_resp *VAR_4;
 struct lio_if_cfg_context *VAR_5;

 VAR_4 = (struct lio_if_cfg_resp *)VAR_3->virtrptr;
 VAR_5 = (struct lio_if_cfg_context *)VAR_3->ctxptr;

 VAR_0 = FUNC_2(VAR_5->octeon_id);
 if (VAR_4->status)
  FUNC_1(VAR_0, "nic if cfg instruction failed. Status: %llx (0x%08x)\n",
       FUNC_0(VAR_4->status), VAR_1);
 VAR_5->cond = 1;

 FUNC_3(VAR_0->fw_info.lio_firmware_version, 32, "%s",
   VAR_4->cfg_info.lio_firmware_version);





 FUNC_4();
}
