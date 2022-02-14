
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*,int ,char*) ;
 int FUNC_1 (struct rtwn_softc*,int) ;
 int FUNC_2 (struct rtwn_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct rtwn_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 25; VAR_5++) {
  if (FUNC_2(VAR_4, VAR_1) & VAR_2)
   break;
  FUNC_1(VAR_4, 10000);
 }
 if (VAR_5 == 25) {
  FUNC_0(VAR_4, VAR_3,
      "timeout waiting for checksum report\n");
  return (VAR_0);
 }

 return (0);
}
