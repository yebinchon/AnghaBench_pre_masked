
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_i2c_softc {int clk_id; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ti_i2c_softc*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 int VAR_2;
 struct ti_i2c_softc *VAR_3;

 VAR_3 = (struct ti_i2c_softc*)FUNC_0(VAR_1);





 VAR_2 = FUNC_2(VAR_3->clk_id);
 if (VAR_2)
  return (VAR_2);

 return (FUNC_1(VAR_3, VAR_0));
}
