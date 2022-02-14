
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_intr_arg {int arg; } ;
struct mvs_channel {int mtx; } ;
typedef int device_t ;


 struct mvs_channel* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct mvs_intr_arg *VAR_1 = (struct mvs_intr_arg *)VAR_0;
 device_t VAR_2 = (device_t)VAR_1->arg;
 struct mvs_channel *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_3->mtx);
 FUNC_3(VAR_0);
 FUNC_2(&VAR_3->mtx);
}
