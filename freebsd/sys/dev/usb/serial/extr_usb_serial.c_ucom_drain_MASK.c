
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_super_softc {scalar_t__ sc_refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(struct ucom_super_softc *VAR_2)
{
 FUNC_0(&VAR_1);
 while (VAR_2->sc_refs > 0) {
  FUNC_2("ucom: Waiting for a TTY device to close.\n");
  FUNC_3(&VAR_1, VAR_0);
 }
 FUNC_1(&VAR_1);
}
