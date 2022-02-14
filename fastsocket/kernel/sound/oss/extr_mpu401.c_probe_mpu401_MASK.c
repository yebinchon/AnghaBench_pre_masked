
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mpu_config {int osp; scalar_t__ opened; scalar_t__ initialized; int irq; scalar_t__ base; } ;
struct address_info {scalar_t__ io_base; scalar_t__ always_detect; int osp; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct mpu_config*) ;

int FUNC_4(struct address_info *VAR_0, struct resource *VAR_1)
{
 int VAR_2 = 0;
 struct mpu_config VAR_3;

 VAR_3.base = VAR_0->io_base;
 VAR_3.irq = VAR_0->irq;
 VAR_3.initialized = 0;
 VAR_3.opened = 0;
 VAR_3.osp = VAR_0->osp;

 if (VAR_0->always_detect)
  return 1;

 if (FUNC_1(VAR_0->io_base + 1) == 0xff)
 {
  FUNC_0(FUNC_2("MPU401: Port %x looks dead.\n", VAR_0->io_base));
  return 0;
 }
 VAR_2 = FUNC_3(&VAR_3);

 if (!VAR_2)
 {
  FUNC_0(FUNC_2("MPU401: Reset failed on port %x\n", VAR_0->io_base));
 }
 return VAR_2;
}
