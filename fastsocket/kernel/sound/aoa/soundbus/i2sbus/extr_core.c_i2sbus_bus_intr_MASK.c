
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2sbus_dev {int low_lock; TYPE_1__* intfregs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int intr_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct i2sbus_dev *VAR_3 = VAR_2;
 u32 VAR_4;

 FUNC_2(&VAR_3->low_lock);
 VAR_4 = FUNC_0(&VAR_3->intfregs->intr_ctl);


 FUNC_1(&VAR_3->intfregs->intr_ctl, VAR_4);

 FUNC_3(&VAR_3->low_lock);

 return VAR_0;
}
