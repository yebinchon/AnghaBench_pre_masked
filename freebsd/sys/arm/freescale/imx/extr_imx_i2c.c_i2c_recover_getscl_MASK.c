
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int rb_sclpin; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0)
{
 bool VAR_1;

 FUNC_0(((struct i2c_softc *)VAR_0)->rb_sclpin, &VAR_1);
 return (VAR_1);

}
