
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int * t_Handle ;
struct bman_softc {int dummy; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct bman_softc*) ;
 struct bman_softc* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4(t_Handle VAR_3, uint16_t VAR_4)
{
 struct bman_softc *VAR_5;
 t_Handle VAR_6;
 int VAR_7;

 VAR_5 = VAR_2;
 FUNC_2();

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_3();
  return (VAR_0);
 }

 VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_4);

 FUNC_3();

 return ((VAR_7 == VAR_1) ? 0 : VAR_0);
}
