
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct versatile_scm_softc {int * sc_mem_res; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 struct versatile_scm_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct versatile_scm_softc* VAR_3 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct versatile_scm_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->sc_dev = VAR_4;

 VAR_6 = 0;
 VAR_5->sc_mem_res = FUNC_0(VAR_4, VAR_2, &VAR_6, VAR_1);

 if (VAR_5->sc_mem_res == ((void*)0)) {
  FUNC_2(VAR_4, "could not allocate memory resources\n");
  return (VAR_0);
 }

 VAR_3 = VAR_5;

 return (0);
}
