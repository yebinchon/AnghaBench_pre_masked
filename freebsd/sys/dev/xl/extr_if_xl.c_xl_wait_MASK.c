
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_dev; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct xl_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if ((FUNC_0(VAR_3, VAR_0) & VAR_1) == 0)
   break;
 }

 if (VAR_4 == VAR_2 && FUNC_1(VAR_3->xl_dev))
  FUNC_2(VAR_3->xl_dev, "command never completed!\n");
}
