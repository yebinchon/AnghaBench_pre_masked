
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbus_softc {int started; scalar_t__ strict; } ;
typedef int device_t ;


 int FUNC_0 (int ,char const*,int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_2, const char *VAR_3, int VAR_4, int *VAR_5, int VAR_6)
{
 struct iicbus_softc *VAR_7 = (struct iicbus_softc *)FUNC_2(VAR_2);


 if (VAR_7->started == 0 || (VAR_7->strict != 0 && (VAR_7->started & VAR_1) != 0))
  return (VAR_0);

 return (FUNC_0(FUNC_1(VAR_2), VAR_3, VAR_4, VAR_5, VAR_6));
}
