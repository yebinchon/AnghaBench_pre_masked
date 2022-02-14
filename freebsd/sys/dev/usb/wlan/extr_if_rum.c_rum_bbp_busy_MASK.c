
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rum_softc*,int) ;
 int FUNC_1 (struct rum_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct rum_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  if (!(FUNC_1(VAR_4, VAR_2) & VAR_1))
   break;
  if (FUNC_0(VAR_4, VAR_3 / 100))
   break;
 }
 if (VAR_5 == 100)
  return (VAR_0);

 return (0);
}
