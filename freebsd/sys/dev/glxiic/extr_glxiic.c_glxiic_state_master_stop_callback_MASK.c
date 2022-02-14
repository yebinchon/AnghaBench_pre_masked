
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct glxiic_softc {scalar_t__ nmsgs; int error; TYPE_1__* msg; int smb_res; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct glxiic_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct glxiic_softc*,int ) ;
 int FUNC_6 (struct glxiic_softc*) ;

__attribute__((used)) static int
FUNC_7(struct glxiic_softc *VAR_12, uint8_t VAR_13)
{
 uint8_t VAR_14;

 FUNC_0(VAR_12);

 if ((VAR_13 & VAR_2) != 0) {
  FUNC_1("bus error in master stop");
  return (VAR_7);
 }

 if ((VAR_13 & VAR_3) == 0) {
  FUNC_1("not bus master in master stop");
  return (VAR_9);
 }

 if ((VAR_13 & VAR_4) != 0) {
  FUNC_1("slave nack in master stop");
  return (VAR_8);
 }

 if (--VAR_12->nmsgs > 0) {

  if ((VAR_12->msg->flags & VAR_10) == 0) {
   FUNC_6(VAR_12);
  }

  VAR_14 = FUNC_3(VAR_12->smb_res, VAR_0);
  FUNC_4(VAR_12->smb_res, VAR_0,
      VAR_14 | VAR_1);

  FUNC_5(VAR_12, VAR_6);
  VAR_12->msg++;
 } else {

  FUNC_6(VAR_12);
  FUNC_5(VAR_12, VAR_5);
  VAR_12->error = VAR_11;
  FUNC_2(VAR_12);
 }

 return (VAR_11);
}
