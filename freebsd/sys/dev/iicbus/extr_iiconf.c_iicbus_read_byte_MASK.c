
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {int started; scalar_t__ strict; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iicbus_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int*,int ,int) ;

int
FUNC_2(device_t VAR_3, char *VAR_4, int VAR_5)
{
 struct iicbus_softc *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;


 if (VAR_6->started == 0 || (VAR_6->strict != 0 && (VAR_6->started & VAR_2) == 0))
  return (VAR_0);

 return (FUNC_1(VAR_3, VAR_4, 1, &VAR_7, VAR_1, VAR_5));
}
