
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct uath_softc*) ;
 int FUNC_1 (struct uath_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct uath_softc*,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct uath_softc *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_0(VAR_3);




 VAR_4 = FUNC_3(VAR_3, VAR_1, ((void*)0), 0,
     VAR_0);
 if (VAR_4 != 0) {
  FUNC_2(VAR_3->sc_dev,
      "could not query stats, error %d\n", VAR_4);
 }
 FUNC_1(VAR_3);
}
