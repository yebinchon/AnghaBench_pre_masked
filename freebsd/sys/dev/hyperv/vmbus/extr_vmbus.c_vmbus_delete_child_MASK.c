
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int * ch_dev; TYPE_1__* ch_vmbus; } ;
struct TYPE_2__ {int vmbus_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct vmbus_channel *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_0);
 if (VAR_1->ch_dev != ((void*)0)) {
  VAR_2 = FUNC_0(VAR_1->ch_vmbus->vmbus_dev,
      VAR_1->ch_dev);
  VAR_1->ch_dev = ((void*)0);
 }
 FUNC_2(&VAR_0);
 return (VAR_2);
}
