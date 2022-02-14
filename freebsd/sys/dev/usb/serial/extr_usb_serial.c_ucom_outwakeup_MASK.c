
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_softc {int sc_flag; } ;
struct tty {int dummy; } ;


 int FUNC_0 (char*,struct ucom_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 struct ucom_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_2)
{
 struct ucom_softc *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3, VAR_0);

 FUNC_0("sc = %p\n", VAR_3);

 if (!(VAR_3->sc_flag & VAR_1)) {

  return;
 }
 FUNC_3(VAR_3);
}
