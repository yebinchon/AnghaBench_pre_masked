
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct glxiic_softc {int ndata; int smb_res; TYPE_1__* msg; int data; } ;
struct TYPE_2__ {int flags; int slave; int len; int buf; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct glxiic_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(struct glxiic_softc *VAR_14, uint8_t VAR_15)
{
 uint8_t VAR_16;
 uint8_t VAR_17;

 FUNC_0(VAR_14);

 if ((VAR_15 & VAR_3) != 0) {
  FUNC_1("bus error after master start");
  return (VAR_9);
 }

 if ((VAR_15 & VAR_4) == 0) {
  FUNC_1("not bus master after master start");
  return (VAR_10);
 }

 if ((VAR_15 & VAR_5) == 0) {
  FUNC_1("not awaiting address in master addr");
  return (VAR_10);
 }

 if ((VAR_14->msg->flags & VAR_11) != 0) {
  VAR_16 = VAR_14->msg->slave | VAR_13;
  FUNC_4(VAR_14, VAR_6);
 } else {
  VAR_16 = VAR_14->msg->slave & ~VAR_13;
  FUNC_4(VAR_14, VAR_8);
 }

 VAR_14->data = VAR_14->msg->buf;
 VAR_14->ndata = VAR_14->msg->len;


 if (VAR_14->ndata == 0)
  FUNC_4(VAR_14, VAR_7);

 FUNC_3(VAR_14->smb_res, VAR_2, VAR_16);

 if ((VAR_14->msg->flags & VAR_11) != 0 && VAR_14->ndata == 1) {

  VAR_17 = FUNC_2(VAR_14->smb_res, VAR_0);
  FUNC_3(VAR_14->smb_res, VAR_0,
      VAR_17 | VAR_1);
 }

 return (VAR_12);
}
