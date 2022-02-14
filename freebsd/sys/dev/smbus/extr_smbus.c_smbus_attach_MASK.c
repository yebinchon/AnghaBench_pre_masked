
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbus_softc {int lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct smbus_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct smbus_softc *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(&VAR_2->lock, FUNC_3(VAR_1), "smbus", VAR_0);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return (0);
}
