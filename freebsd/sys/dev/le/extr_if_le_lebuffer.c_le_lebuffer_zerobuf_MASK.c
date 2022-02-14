
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct le_lebuffer_softc {int sc_bres; } ;
struct lance_softc {int dummy; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct lance_softc *VAR_0, int VAR_1, int VAR_2)
{
 struct le_lebuffer_softc *VAR_3 = (struct le_lebuffer_softc *)VAR_0;

 for (; VAR_2 >= 2; VAR_2 -= 2, VAR_1 += 2)
  FUNC_1(VAR_3->sc_bres, VAR_1, 0);
 if (VAR_2 == 1)
  FUNC_0(VAR_3->sc_bres, VAR_1 + 1, 0);
}
