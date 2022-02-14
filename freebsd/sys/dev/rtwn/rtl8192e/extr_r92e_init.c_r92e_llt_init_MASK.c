
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtwn_softc*,int) ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ,int) ;

int
FUNC_3(struct rtwn_softc *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, 0, VAR_2);
 if (VAR_5 != 0)
  return (VAR_5);
 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  if (!(FUNC_1(VAR_3, VAR_1) & VAR_2))
   return (0);
  FUNC_0(VAR_3, 1);
 }
 return (VAR_0);
}
