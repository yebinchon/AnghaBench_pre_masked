
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mpr_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mpr_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((FUNC_1(VAR_4, VAR_2) &
      VAR_1) != 0)
   return (0);
  FUNC_0(2000);
 }
 return (VAR_0);
}
