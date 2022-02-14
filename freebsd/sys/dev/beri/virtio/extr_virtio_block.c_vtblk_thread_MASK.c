
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beri_vtblk_softc {int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct beri_vtblk_softc*,int *,int,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct beri_vtblk_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct beri_vtblk_softc *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3;

 FUNC_2(&VAR_4->sc_mtx);
 for (;;) {
  VAR_5 = FUNC_1(VAR_4, &VAR_4->sc_mtx, VAR_0 | VAR_1, "prd", VAR_2);
  FUNC_4(VAR_4);
 }
 FUNC_3(&VAR_4->sc_mtx);

 FUNC_0();
}
