
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ig4iic_softc_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 ig4iic_softc_t *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_1("ig4iic"))
  return (VAR_0);
 VAR_4 = FUNC_0(FUNC_2(VAR_2), VAR_2, VAR_1, ((void*)0));
 if (VAR_4 > 0)
  return (VAR_4);

 FUNC_4(VAR_2, "Designware I2C Controller");
 return (VAR_4);
}
