
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {int lock; } ;
typedef int device_t ;


 struct iicbus_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct iicbus_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(VAR_1, VAR_0, 0, ((void*)0));
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->lock);
 return (0);
}
