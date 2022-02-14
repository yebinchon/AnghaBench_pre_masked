
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct iicbus_softc {scalar_t__ started; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1, u_char VAR_2, int VAR_3)
{
 struct iicbus_softc *VAR_4 = (struct iicbus_softc *)FUNC_2(VAR_1);
 int VAR_5 = 0;

 if (!VAR_4->started)
  return (VAR_0);

 if (!(VAR_5 = FUNC_0(FUNC_1(VAR_1), VAR_2, VAR_3)))
  VAR_4->started = VAR_2;
 else
  VAR_4->started = 0;

 return (VAR_5);
}
