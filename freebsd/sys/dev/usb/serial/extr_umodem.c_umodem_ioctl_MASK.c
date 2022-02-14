
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct umodem_softc {int sc_cm_over_data; } ;
struct ucom_softc {struct umodem_softc* sc_parent; } ;
struct thread {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;



__attribute__((used)) static int
FUNC_1(struct ucom_softc *VAR_1, uint32_t VAR_2, caddr_t VAR_3,
    int VAR_4, struct thread *VAR_5)
{
 struct umodem_softc *VAR_6 = VAR_1->sc_parent;
 int VAR_7 = 0;

 FUNC_0("cmd=0x%08x\n", VAR_2);

 switch (VAR_2) {
 case 129:
  *(int *)VAR_3 = VAR_6->sc_cm_over_data;
  break;

 case 128:
  if (*(int *)VAR_3 != VAR_6->sc_cm_over_data) {

  }
  break;

 default:
  FUNC_0("unknown\n");
  VAR_7 = VAR_0;
  break;
 }

 return (VAR_7);
}
