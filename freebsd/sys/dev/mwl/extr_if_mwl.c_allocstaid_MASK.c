
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_staid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct mwl_softc *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!(0 < VAR_2 && VAR_2 < VAR_0) || FUNC_1(VAR_1->sc_staid, VAR_2)) {

  for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
   if (FUNC_0(VAR_1->sc_staid, VAR_3))
    break;
 } else
  VAR_3 = VAR_2;
 FUNC_2(VAR_1->sc_staid, VAR_3);
 return VAR_3;
}
