
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rum_softc*,int) ;
 int FUNC_2 (struct rum_softc*,int ) ;
 int FUNC_3 (struct rum_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct rum_softc *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  if (FUNC_2(VAR_3, VAR_1) & 8)
   break;
  FUNC_3(VAR_3, VAR_1, 4);
  if (FUNC_1(VAR_3, VAR_2 / 100))
   break;
 }
 if (VAR_4 == 100) {
  FUNC_0(VAR_3->sc_dev,
      "timeout waiting for BBP/RF to wakeup\n");
  return (VAR_0);
 }

 return (0);
}
