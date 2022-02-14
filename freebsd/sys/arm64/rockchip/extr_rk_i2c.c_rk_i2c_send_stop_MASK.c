
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_i2c_softc {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rk_i2c_softc*,int ) ;
 int FUNC_1 (struct rk_i2c_softc*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct rk_i2c_softc *VAR_5)
{
 uint32_t VAR_6;

 FUNC_1(VAR_5, VAR_2, VAR_3);

 VAR_5->state = VAR_4;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_1(VAR_5, VAR_0, VAR_6);
}
