
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,void const*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_5(void)
{
 if (VAR_6)
  FUNC_1("Password expired (unable to change with privsep)");
 VAR_3 = FUNC_3(VAR_4, VAR_1,
     (const void *)&VAR_5);
 if (VAR_3 != VAR_2)
  FUNC_1("PAM: failed to set PAM_CONV: %s",
      FUNC_4(VAR_4, VAR_3));
 FUNC_0("PAM: changing password");
 VAR_3 = FUNC_2(VAR_4, VAR_0);
 if (VAR_3 != VAR_2)
  FUNC_1("PAM: pam_chauthtok(): %s",
      FUNC_4(VAR_4, VAR_3));
}
