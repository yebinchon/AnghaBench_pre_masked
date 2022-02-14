
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_pwrctl_softc {int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bhnd_pwrctl_softc*,int) ;

u_int
FUNC_2(struct bhnd_pwrctl_softc *VAR_1)
{
 u_int VAR_2, VAR_3;
 u_int VAR_4;

 VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_1, 0);

 VAR_2 = FUNC_0(VAR_1->res, VAR_0) + 2;
 VAR_2 *= 1000000;
 VAR_2 += (VAR_3 - 1);
 VAR_4 = VAR_2 / VAR_3;

 return (VAR_4);
}
