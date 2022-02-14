
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* task_prctl ) (int,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,unsigned long,unsigned long,unsigned long,unsigned long) ;

int FUNC_1(int VAR_1, unsigned long VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long VAR_5)
{
 return VAR_0->task_prctl(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
