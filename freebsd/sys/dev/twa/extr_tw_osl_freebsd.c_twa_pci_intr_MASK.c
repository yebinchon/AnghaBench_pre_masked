
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int ctlr_handle; } ;
typedef int TW_VOID ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct twa_softc*,char*) ;

__attribute__((used)) static TW_VOID
FUNC_2(TW_VOID *VAR_0)
{
 struct twa_softc *VAR_1 = (struct twa_softc *)VAR_0;

 FUNC_1(10, VAR_1, "entered");
 FUNC_0(&(VAR_1->ctlr_handle));
}
