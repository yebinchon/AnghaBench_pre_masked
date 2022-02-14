
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ste_softc {int ste_dev; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct ste_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!(FUNC_0(VAR_3, VAR_0) & VAR_1))
   break;
  FUNC_1(1);
 }

 if (VAR_4 == VAR_2)
  FUNC_2(VAR_3->ste_dev, "command never completed!\n");
}
