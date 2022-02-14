
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubt_softc {int sc_scoq; int sc_aclq; int sc_cmdq; int * sc_hook; } ;
typedef int * hook_p ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ubt_softc* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ubt_softc*) ;
 int FUNC_4 (struct ubt_softc*) ;
 int FUNC_5 (struct ubt_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_2)
{
 struct ubt_softc *VAR_3 = FUNC_2(FUNC_1(VAR_2));

 FUNC_3(VAR_3);

 if (VAR_2 != VAR_3->sc_hook) {
  FUNC_4(VAR_3);

  return (VAR_0);
 }

 VAR_3->sc_hook = ((void*)0);


 FUNC_5(VAR_3, VAR_1);


 FUNC_0(&VAR_3->sc_cmdq);
 FUNC_0(&VAR_3->sc_aclq);
 FUNC_0(&VAR_3->sc_scoq);

 FUNC_4(VAR_3);

 return (0);
}
