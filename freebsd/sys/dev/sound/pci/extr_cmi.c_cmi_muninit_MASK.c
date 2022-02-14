
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; int * mpu; int * mpu_intr; } ;
struct mpu401 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct mpu401 *VAR_0, void *VAR_1)
{
 struct sc_info *VAR_2 = VAR_1;

 FUNC_0(VAR_2->lock);
 VAR_2->mpu_intr = ((void*)0);
 VAR_2->mpu = ((void*)0);
 FUNC_1(VAR_2->lock);

 return 0;
}
