
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {int ti_mini; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_softc*,int) ;
 scalar_t__ FUNC_1 (struct ti_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct ti_softc *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_1(VAR_2, VAR_3) != 0)
   return (VAR_0);
 }

 VAR_2->ti_mini = VAR_1 - 1;
 FUNC_0(VAR_2, VAR_1 - 1);

 return (0);
}
