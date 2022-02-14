
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct bfe_softc {int dummy; } ;


 int FUNC_0 (struct bfe_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct bfe_softc *VAR_0, u_int8_t *VAR_1)
{
 long VAR_2;
 u_int16_t *VAR_3 = (u_int16_t *)VAR_1;

 for(VAR_2 = 0; VAR_2 < 128; VAR_2 += 2)
  VAR_3[VAR_2/2] = FUNC_0(VAR_0, 4096 + VAR_2);
}
