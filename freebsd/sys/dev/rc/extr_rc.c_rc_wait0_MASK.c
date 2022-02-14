
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct rc_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct rc_softc *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 50; VAR_4 && FUNC_2(VAR_1, VAR_0); VAR_4--)
  FUNC_0(30);
 if (VAR_4 == 0)
  FUNC_1(VAR_1->sc_dev,
      "channel %d command timeout, rc.c line: %d\n", VAR_2, VAR_3);
}
