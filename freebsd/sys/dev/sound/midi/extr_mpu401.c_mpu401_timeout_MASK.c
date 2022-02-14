
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu401 {int cookie; int (* si ) (int ) ;} ;


 int FUNC_0 (int ) ;

void
FUNC_1(void *VAR_0)
{
 struct mpu401 *VAR_1 = (struct mpu401 *)VAR_0;

 if (VAR_1->si)
  (VAR_1->si)(VAR_1->cookie);

}
