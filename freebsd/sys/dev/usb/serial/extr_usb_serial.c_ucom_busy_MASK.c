
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_softc {int const sc_lsr; int sc_flag; } ;
struct tty {int dummy; } ;


 int FUNC_0 (int,char*,struct ucom_softc*,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ucom_softc* FUNC_2 (struct tty*) ;

__attribute__((used)) static bool
FUNC_3(struct tty *VAR_4)
{
 struct ucom_softc *VAR_5 = FUNC_2(VAR_4);
 const uint8_t VAR_6 = VAR_3 | VAR_2;

 FUNC_1(VAR_5, VAR_0);

 FUNC_0(3, "sc = %p lsr 0x%02x\n", VAR_5, VAR_5->sc_lsr);






 if (VAR_5->sc_flag & VAR_1)
  return ((VAR_5->sc_lsr & VAR_6) != VAR_6);
 else
  return (0);
}
