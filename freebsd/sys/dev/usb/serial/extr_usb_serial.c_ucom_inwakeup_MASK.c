
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ucom_softc {int sc_flag; size_t sc_jitterbuf_out; size_t sc_jitterbuf_in; scalar_t__* sc_jitterbuf; } ;
struct tty {int dummy; } ;


 int FUNC_0 (char*,struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 struct ucom_softc* FUNC_2 (struct tty*) ;
 scalar_t__ FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,int ) ;
 int FUNC_5 (struct ucom_softc*,int ) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_5)
{
 struct ucom_softc *VAR_6 = FUNC_2(VAR_5);
 uint16_t VAR_7;

 if (VAR_6 == ((void*)0))
  return;

 FUNC_1(VAR_6, VAR_0);

 FUNC_0("tp=%p\n", VAR_5);

 if (FUNC_3(VAR_5) != 0 ||
     (VAR_6->sc_flag & VAR_1) == 0 ||
     (VAR_6->sc_flag & VAR_2) != 0) {
  return;
 }


 VAR_6->sc_flag |= VAR_2;

 VAR_7 = VAR_6->sc_jitterbuf_out;

 while (VAR_6->sc_jitterbuf_in != VAR_7) {
  int VAR_8;

  VAR_8 = (char)VAR_6->sc_jitterbuf[VAR_7];

  if (FUNC_4(VAR_5, VAR_8, 0) == -1)
   break;
  VAR_7++;
  if (VAR_7 >= VAR_4)
   VAR_7 -= VAR_4;
 }

 VAR_6->sc_jitterbuf_out = VAR_7;


 if ((VAR_6->sc_jitterbuf_in == VAR_7) &&
     (VAR_6->sc_flag & VAR_3))
  FUNC_5(VAR_6, 0);

 VAR_6->sc_flag &= ~VAR_2;
}
