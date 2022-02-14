
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * t_Handle ;
struct bman_softc {int dummy; } ;


 void* FUNC_0 (int *,int *) ;
 int * FUNC_1 (struct bman_softc*) ;
 struct bman_softc* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void *
FUNC_4(t_Handle VAR_1)
{
 struct bman_softc *VAR_2;
 t_Handle VAR_3;
 void *VAR_4;

 VAR_2 = VAR_0;
 FUNC_2();

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_3();
  return (((void*)0));
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3);

 FUNC_3();

 return (VAR_4);
}
