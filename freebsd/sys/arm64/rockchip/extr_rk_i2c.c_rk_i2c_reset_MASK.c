
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct rk_i2c_softc {int iicbus; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rk_i2c_softc*) ;
 int FUNC_2 (struct rk_i2c_softc*) ;
 int FUNC_3 (struct rk_i2c_softc*,int ,int ) ;
 struct rk_i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct rk_i2c_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, u_char VAR_3, u_char VAR_4, u_char *VAR_5)
{
 struct rk_i2c_softc *VAR_6;
 uint32_t VAR_7;
 u_int VAR_8;

 VAR_6 = FUNC_4(VAR_2);

 VAR_8 = FUNC_0(VAR_6->iicbus, VAR_3);

 VAR_7 = FUNC_5(VAR_6, VAR_8);

 FUNC_1(VAR_6);


 FUNC_3(VAR_6, VAR_0, VAR_7);


 FUNC_3(VAR_6, VAR_1, 0);

 FUNC_2(VAR_6);

 return (0);
}
