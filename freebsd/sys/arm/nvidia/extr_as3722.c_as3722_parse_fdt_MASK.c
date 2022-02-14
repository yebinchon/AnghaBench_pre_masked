
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int int_pullup; int i2c_pullup; } ;
typedef int phandle_t ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct as3722_softc *VAR_0, phandle_t VAR_1)
{

 VAR_0->int_pullup =
     FUNC_0(VAR_1, "ams,enable-internal-int-pullup") ? 1 : 0;
 VAR_0->i2c_pullup =
     FUNC_0(VAR_1, "ams,enable-internal-i2c-pullup") ? 1 : 0;
 return 0;
}
