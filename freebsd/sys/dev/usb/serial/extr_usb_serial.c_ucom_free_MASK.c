
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {int sc_super; TYPE_1__* sc_callback; } ;
struct TYPE_2__ {int (* ucom_free ) (struct ucom_softc*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ucom_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct ucom_softc *VAR_3 = VAR_2;

 if (VAR_3->sc_callback->ucom_free != ((void*)0))
  VAR_3->sc_callback->ucom_free(VAR_3);
 else
  FUNC_3(VAR_3->sc_super);

 FUNC_0(&VAR_1);
 VAR_0--;
 FUNC_1(&VAR_1);
}
