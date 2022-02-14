
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_4, VAR_2, VAR_0);
 for (VAR_5 = 0; VAR_5 < 15000; VAR_5++) {
  if (!(FUNC_1(VAR_4, VAR_3) & VAR_1))
   break;
  FUNC_0(10);
 }
}
