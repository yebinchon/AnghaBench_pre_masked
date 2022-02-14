
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_super_softc {int sc_refs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ucom_super_softc*) ;
 int VAR_0 ;

int
FUNC_3(struct ucom_super_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = (VAR_1->sc_refs < 2);
 VAR_1->sc_refs--;
 FUNC_1(&VAR_0);

 if (VAR_2)
  FUNC_2(VAR_1);

 return (VAR_2);
}
