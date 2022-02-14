
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtwn_softc*,int ,int ,int ,int) ;

void
FUNC_2(struct rtwn_softc *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 0:

  FUNC_1(VAR_2, VAR_0,
      VAR_1, 0, 2);
  break;
 case 1:

  FUNC_1(VAR_2, VAR_0,
      0, VAR_1, 2);
  break;
 default:
  FUNC_0(0, ("wrong port id %d\n", VAR_3));
  break;
 }
}
