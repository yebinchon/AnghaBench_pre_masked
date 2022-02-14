
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu401 {int mid; scalar_t__ flags; void* cookie; int si; int timer; } ;
typedef int mpu401_intr_t ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int driver_intr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mpu401*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct mpu401* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ,int ,struct mpu401*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (char*) ;

struct mpu401 *
FUNC_6(kobj_class_t VAR_5, void *VAR_6, driver_intr_t VAR_7,
    mpu401_intr_t ** VAR_8)
{
 struct mpu401 *VAR_9;

 *VAR_8 = ((void*)0);
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);

 if (!VAR_9)
  return ((void*)0);

 FUNC_2((kobj_t)VAR_9, VAR_5);

 FUNC_0(&VAR_9->timer, 1);

 VAR_9->si = VAR_7;
 VAR_9->cookie = VAR_6;
 VAR_9->flags = 0;

 VAR_9->mid = FUNC_4(&VAR_3, 0, 0, VAR_9);
 if (!VAR_9->mid)
  goto err;
 *VAR_8 = VAR_4;
 return VAR_9;
err:
 FUNC_5("mpu401_init error\n");
 FUNC_1(VAR_9, VAR_0);
 return ((void*)0);
}
