
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dev; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int ,char*,char*) ;
 struct mgb_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mgb_softc*) ;

__attribute__((used)) static int
FUNC_3(if_ctx_t VAR_0)
{
 struct mgb_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dev, "Interrupt test: %s\n",
     (FUNC_2(VAR_1) ? "PASS" : "FAIL"));

 return (0);
}
