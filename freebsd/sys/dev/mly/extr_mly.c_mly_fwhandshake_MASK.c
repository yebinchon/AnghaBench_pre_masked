
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct mly_softc {scalar_t__ mly_command_mailbox; scalar_t__ mly_error_status; int mly_idbr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mly_softc*) ;
 int FUNC_2 (struct mly_softc*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mly_softc*,int ) ;
 int VAR_2 ;





 int FUNC_4 (struct mly_softc*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mly_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct mly_softc *VAR_3)
{
    u_int8_t VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;

    FUNC_5(1);


    FUNC_4(VAR_3, VAR_3->mly_idbr, VAR_1);
    FUNC_0(1000);


    if (!FUNC_3(VAR_3, VAR_1))
 return(0);
    FUNC_6(VAR_3, "controller initialisation started\n");


    while (FUNC_3(VAR_3, VAR_1)) {

 if (FUNC_1(VAR_3)) {
     VAR_4 = FUNC_2(VAR_3, VAR_3->mly_error_status) & ~VAR_2;
     VAR_5 = FUNC_2(VAR_3, VAR_3->mly_command_mailbox);
     VAR_6 = FUNC_2(VAR_3, VAR_3->mly_command_mailbox + 1);

     switch(VAR_4) {
     case 128:
  if (!VAR_7) {
      FUNC_6(VAR_3, "drive spinup in progress\n");
      VAR_7 = 1;
  }
  break;
     case 129:
  FUNC_6(VAR_3, "mirror race recovery failed, one or more drives offline\n");
  break;
     case 131:
  FUNC_6(VAR_3, "mirror race recovery in progress\n");
  break;
     case 130:
  FUNC_6(VAR_3, "mirror race recovery on a critical drive\n");
  break;
     case 132:
  FUNC_6(VAR_3, "FATAL MEMORY PARITY ERROR\n");
  return(VAR_0);
     default:
  FUNC_6(VAR_3, "unknown initialisation code 0x%x\n", VAR_4);
     }
 }
    }
    return(0);
}
