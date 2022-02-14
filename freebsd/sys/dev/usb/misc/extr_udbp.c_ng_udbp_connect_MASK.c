
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udbp_softc {int sc_flags; int sc_mtx; int * sc_xfer; } ;
typedef int hook_p ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct udbp_softc* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_4)
{
 struct udbp_softc *VAR_5 = FUNC_3(FUNC_1(VAR_4));


 FUNC_0(FUNC_2(VAR_4));

 FUNC_4(&VAR_5->sc_mtx);

 VAR_5->sc_flags |= (VAR_0 |
     VAR_1);


 FUNC_6(VAR_5->sc_xfer[VAR_2]);


 FUNC_6(VAR_5->sc_xfer[VAR_3]);

 FUNC_5(&VAR_5->sc_mtx);

 return (0);
}
