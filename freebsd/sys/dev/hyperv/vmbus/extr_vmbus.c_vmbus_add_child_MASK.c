
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int vmbus_dev; } ;
struct vmbus_channel {int * ch_dev; int ch_id; struct vmbus_softc* ch_vmbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct vmbus_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct vmbus_channel *VAR_2)
{
 struct vmbus_softc *VAR_3 = VAR_2->ch_vmbus;
 device_t VAR_4 = VAR_3->vmbus_dev;

 FUNC_4(&VAR_1);

 VAR_2->ch_dev = FUNC_0(VAR_4, ((void*)0), -1);
 if (VAR_2->ch_dev == ((void*)0)) {
  FUNC_5(&VAR_1);
  FUNC_1(VAR_4, "device_add_child for chan%u failed\n",
      VAR_2->ch_id);
  return (VAR_0);
 }
 FUNC_3(VAR_2->ch_dev, VAR_2);
 FUNC_2(VAR_2->ch_dev);

 FUNC_5(&VAR_1);
 return (0);
}
