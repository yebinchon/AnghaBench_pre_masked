
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arge_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct arge_softc*) ;
 int FUNC_1 (struct arge_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct arge_softc *VAR_2)
{
 int VAR_3,VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_2(5);
  FUNC_0(VAR_2);
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  if (! VAR_4)
   return (0);
  FUNC_2(5);
 }
 return (-1);
}
