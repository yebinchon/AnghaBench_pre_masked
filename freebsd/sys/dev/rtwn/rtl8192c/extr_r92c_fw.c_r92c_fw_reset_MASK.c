
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*,int) ;
 int FUNC_1 (struct rtwn_softc*,int ) ;
 int FUNC_2 (struct rtwn_softc*,int ,int,int ,int) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__,int) ;

void
FUNC_4(struct rtwn_softc *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_3)
  return;


 FUNC_3(VAR_4, VAR_0 + 3, 0x20);


 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  if ((FUNC_1(VAR_4, VAR_1) &
      VAR_2) == 0)
   return;
  FUNC_0(VAR_4, 50);
 }

 FUNC_2(VAR_4, VAR_1,
     VAR_2, 0, 1);
}
