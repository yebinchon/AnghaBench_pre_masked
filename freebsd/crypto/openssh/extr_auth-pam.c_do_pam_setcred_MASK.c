
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,void const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_5(int VAR_9)
{
 VAR_6 = FUNC_2(VAR_7, VAR_0,
     (const void *)&VAR_8);
 if (VAR_6 != VAR_3)
  FUNC_1("PAM: failed to set PAM_CONV: %s",
      FUNC_4(VAR_7, VAR_6));
 if (VAR_9) {
  FUNC_0("PAM: establishing credentials");
  VAR_6 = FUNC_3(VAR_7, VAR_1);
 } else {
  FUNC_0("PAM: reinitializing credentials");
  VAR_6 = FUNC_3(VAR_7, VAR_2);
 }
 if (VAR_6 == VAR_3) {
  VAR_5 = 1;
  return;
 }
 if (VAR_4)
  FUNC_1("PAM: pam_setcred(): %s",
      FUNC_4(VAR_7, VAR_6));
 else
  FUNC_0("PAM: pam_setcred(): %s",
      FUNC_4(VAR_7, VAR_6));
}
