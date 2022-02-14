
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_rtlist; int sc_rthash_key; int * sc_rthash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bridge_softc *VAR_3)
{
 int VAR_4;

 VAR_3->sc_rthash = FUNC_2(sizeof(*VAR_3->sc_rthash) * VAR_0,
     VAR_1, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_3->sc_rthash[VAR_4]);

 VAR_3->sc_rthash_key = FUNC_1();
 FUNC_0(&VAR_3->sc_rtlist);
}
