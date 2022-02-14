
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct an_softc {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct an_softc*,int ,int ) ;
 int FUNC_1 (struct an_softc*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct an_softc*,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct an_softc *VAR_3, int VAR_4, int VAR_5, caddr_t VAR_6, int VAR_7)
{
 int VAR_8;
 u_int16_t *VAR_9;
 u_int8_t *VAR_10;

 if (VAR_5 != -1) {
  if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_0))
   return(VAR_2);
 }

 VAR_9 = (u_int16_t *)VAR_6;
 for (VAR_8 = VAR_7; VAR_8 > 1; VAR_8 -= 2)
  FUNC_1(VAR_3, VAR_1, *VAR_9++);
 if (VAR_8) {
  VAR_10 = (u_int8_t *)VAR_9;
  FUNC_0(VAR_3, VAR_1, *VAR_10);
 }

 return(0);
}
