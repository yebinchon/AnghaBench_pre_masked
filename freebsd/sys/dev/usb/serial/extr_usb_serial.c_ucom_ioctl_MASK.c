
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ucom_softc {int sc_flag; int sc_pps; TYPE_1__* sc_callback; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
typedef int caddr_t ;
struct TYPE_2__ {int (* ucom_ioctl ) (struct ucom_softc*,int,int ,int ,struct thread*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (struct ucom_softc*,int,int ,int ,struct thread*) ;
 struct ucom_softc* FUNC_4 (struct tty*) ;
 int FUNC_5 (struct ucom_softc*,int) ;
 int FUNC_6 (struct ucom_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct tty *VAR_4, u_long VAR_5, caddr_t VAR_6, struct thread *VAR_7)
{
 struct ucom_softc *VAR_8 = FUNC_4(VAR_4);
 int VAR_9;

 FUNC_1(VAR_8, VAR_2);

 if (!(VAR_8->sc_flag & VAR_3)) {
  return (VAR_0);
 }
 FUNC_0("cmd = 0x%08lx\n", VAR_5);

 switch (VAR_5) {
 case 129:
  FUNC_5(VAR_8, 1);
  VAR_9 = 0;
  break;
 case 131:
  FUNC_5(VAR_8, 0);
  VAR_9 = 0;
  break;
 default:
  if (VAR_8->sc_callback->ucom_ioctl) {
   VAR_9 = (VAR_8->sc_callback->ucom_ioctl)
       (VAR_8, VAR_5, VAR_6, 0, VAR_7);
  } else {
   VAR_9 = VAR_1;
  }
  if (VAR_9 == VAR_1)
   VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_8->sc_pps);
  break;
 }
 return (VAR_9);
}
