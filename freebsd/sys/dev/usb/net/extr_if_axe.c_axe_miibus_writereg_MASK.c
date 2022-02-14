
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axe_softc {int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*,int ,int,int,int*) ;
 struct axe_softc* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct axe_softc *VAR_7 = FUNC_3(VAR_3);
 int VAR_8;

 VAR_6 = FUNC_4(VAR_6);
 VAR_8 = FUNC_5(&VAR_7->sc_mtx);
 if (!VAR_8)
  FUNC_0(VAR_7);

 FUNC_2(VAR_7, VAR_1, 0, 0, ((void*)0));
 FUNC_2(VAR_7, VAR_2, VAR_5, VAR_4, &VAR_6);
 FUNC_2(VAR_7, VAR_0, 0, 0, ((void*)0));

 if (!VAR_8)
  FUNC_1(VAR_7);
 return (0);
}
