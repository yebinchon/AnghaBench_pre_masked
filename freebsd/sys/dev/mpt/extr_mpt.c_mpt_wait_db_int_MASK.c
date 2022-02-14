
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mpt_softc *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_1(FUNC_2(VAR_4))) {
   VAR_3 = VAR_5 > VAR_3 ? VAR_5 : VAR_3;
   return VAR_2;
  }
  FUNC_0(100);
 }
 return (VAR_0);
}
