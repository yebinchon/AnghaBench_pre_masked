
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct sec_softc *VAR_1 = VAR_0;

 FUNC_0(VAR_1->sc_dev, "spurious secondary interrupt!\n");
 FUNC_1(VAR_0);
}
