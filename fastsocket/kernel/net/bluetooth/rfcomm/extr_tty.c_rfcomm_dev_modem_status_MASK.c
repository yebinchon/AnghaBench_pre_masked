
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_dlc {struct rfcomm_dev* owner; } ;
struct rfcomm_dev {int modem_status; scalar_t__ tty; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,struct rfcomm_dev*,int) ;
 int FUNC_1 (scalar_t__) ;
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
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rfcomm_dlc *VAR_10, u8 VAR_11)
{
 struct rfcomm_dev *VAR_12 = VAR_10->owner;
 if (!VAR_12)
  return;

 FUNC_0("dlc %p dev %p v24_sig 0x%02x", VAR_10, VAR_12, VAR_11);

 if ((VAR_12->modem_status & VAR_4) && !(VAR_11 & VAR_0)) {
  if (VAR_12->tty && !FUNC_1(VAR_12->tty))
   FUNC_2(VAR_12->tty);
 }

 VAR_12->modem_status =
  ((VAR_11 & VAR_2) ? (VAR_6 | VAR_7) : 0) |
  ((VAR_11 & VAR_3) ? (VAR_9 | VAR_5) : 0) |
  ((VAR_11 & VAR_1) ? VAR_8 : 0) |
  ((VAR_11 & VAR_0) ? VAR_4 : 0);
}
