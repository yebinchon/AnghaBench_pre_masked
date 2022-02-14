
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct le_lebuffer_softc {int sc_bres; } ;
struct lance_softc {int dummy; } ;
typedef int * caddr_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct lance_softc *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 struct le_lebuffer_softc *VAR_4 = (struct le_lebuffer_softc *)VAR_0;
 caddr_t VAR_5 = VAR_1;

 for (; VAR_3 >= 2; VAR_3 -= 2, VAR_2 += 2, VAR_5 += 2)
  FUNC_2(VAR_5,
      FUNC_1(VAR_4->sc_bres, VAR_2));
 if (VAR_3 == 1)
  *VAR_5 = FUNC_0(VAR_4->sc_bres, VAR_2 + 1);
}
