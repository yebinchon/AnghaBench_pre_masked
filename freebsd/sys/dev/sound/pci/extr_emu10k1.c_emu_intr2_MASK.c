
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int mpu; int (* mpu_intr ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct sc_info *VAR_1 = (struct sc_info *)VAR_0;

 if (VAR_1->mpu_intr)
     (VAR_1->mpu_intr)(VAR_1->mpu);
}
