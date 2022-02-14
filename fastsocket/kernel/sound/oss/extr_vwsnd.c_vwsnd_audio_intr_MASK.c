
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lith; } ;
typedef TYPE_1__ vwsnd_dev_t ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int,void*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 vwsnd_dev_t *VAR_3 = VAR_2;
 unsigned int VAR_4;

 FUNC_0("(irq=%d, dev_id=0x%p)\n", VAR_1, VAR_2);

 VAR_4 = FUNC_1(&VAR_3->lith);
 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_4);
 return VAR_0;
}
