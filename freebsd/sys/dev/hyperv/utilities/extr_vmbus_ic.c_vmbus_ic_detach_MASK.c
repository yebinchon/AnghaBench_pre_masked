
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_ic_softc {int ic_buf; } ;
typedef int device_t ;


 int VAR_0 ;
 struct vmbus_ic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_1)
{
 struct vmbus_ic_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(FUNC_3(VAR_1));
 FUNC_1(VAR_2->ic_buf, VAR_0);

 return (0);
}
