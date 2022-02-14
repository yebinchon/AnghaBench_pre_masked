
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct mrsas_softc {scalar_t__ is_aero; } ;


 scalar_t__ FUNC_0 (struct mrsas_softc*,int) ;

u_int32_t
FUNC_1(struct mrsas_softc *VAR_0, int VAR_1)
{
 u_int32_t VAR_2 = 0, VAR_3;

 if (VAR_0->is_aero) {
  do {
   VAR_3 = FUNC_0(VAR_0, VAR_1);
   VAR_2++;
  } while(VAR_3 == 0 && VAR_2 < 3);
 } else
  VAR_3 = FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}
