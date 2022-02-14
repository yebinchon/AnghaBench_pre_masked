
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pam_saved_cred {scalar_t__ euid; int egid; int groups; int ngroups; } ;
typedef int pam_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ,void const**) ;
 int FUNC_4 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int
FUNC_8(pam_handle_t *VAR_3)
{
 const struct pam_saved_cred *VAR_4;
 const void *VAR_5;
 int VAR_6;

 FUNC_0();
 VAR_6 = FUNC_3(VAR_3, VAR_0, &VAR_5);
 if (VAR_6 != VAR_1)
  FUNC_1(VAR_6);
 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_2);
 VAR_4 = VAR_5;
 if (VAR_4->euid != FUNC_2()) {
  if (FUNC_6(VAR_4->euid) < 0 ||
      FUNC_7(VAR_4->ngroups, VAR_4->groups) < 0 ||
      FUNC_5(VAR_4->egid) < 0)
   FUNC_1(VAR_2);
 }
 FUNC_4(VAR_3, VAR_0, ((void*)0), ((void*)0));
 FUNC_1(VAR_1);
}
