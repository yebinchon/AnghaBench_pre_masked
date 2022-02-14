
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int an_dev; scalar_t__ an_gone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct an_softc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct an_softc*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct an_softc *VAR_6)
{
 if (VAR_6->an_gone)
  return;

 FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_1, 0);
 FUNC_1(VAR_6, VAR_3, 0);
 FUNC_1(VAR_6, VAR_4, 0);

 if (FUNC_1(VAR_6, VAR_2, 0) == VAR_5)
  FUNC_2(VAR_6->an_dev, "reset failed\n");

 FUNC_1(VAR_6, VAR_0, 0);

 return;
}
