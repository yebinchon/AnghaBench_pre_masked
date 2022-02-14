
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {int started; scalar_t__ strict; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iicbus_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int*,int) ;

int
FUNC_2(device_t VAR_2, char VAR_3, int VAR_4)
{
 struct iicbus_softc *VAR_5 = FUNC_0(VAR_2);
 char VAR_6 = VAR_3;
 int VAR_7;


 if (VAR_5->started == 0 || (VAR_5->strict != 0 && (VAR_5->started & VAR_1) != 0))
  return (VAR_0);

 return (FUNC_1(VAR_2, &VAR_6, 1, &VAR_7, VAR_4));
}
