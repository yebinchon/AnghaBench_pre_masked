
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gem_softc {int * sc_res; int sc_ih; } ;
typedef int device_t ;


 int FUNC_0 (struct gem_softc*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct gem_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct gem_softc*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct gem_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_4, VAR_5->sc_res[VAR_1], VAR_5->sc_ih);
 FUNC_5(VAR_5);
 FUNC_4(VAR_5->sc_res[VAR_0], VAR_2);
 FUNC_0(VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_5->sc_res);
 return (0);
}
