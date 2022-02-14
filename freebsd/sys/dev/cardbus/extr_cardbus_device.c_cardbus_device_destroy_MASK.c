
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardbus_devinfo {scalar_t__ sc_cisdev; } ;


 int FUNC_0 (scalar_t__) ;

int
FUNC_1(struct cardbus_devinfo *VAR_0)
{
 if (VAR_0->sc_cisdev)
  FUNC_0(VAR_0->sc_cisdev);
 return (0);
}
