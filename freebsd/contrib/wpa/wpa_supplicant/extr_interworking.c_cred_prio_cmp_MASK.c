
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {scalar_t__ priority; scalar_t__ sp_priority; int * provisioning_sp; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct wpa_cred *VAR_0, const struct wpa_cred *VAR_1)
{
 if (VAR_0->priority > VAR_1->priority)
  return 1;
 if (VAR_0->priority < VAR_1->priority)
  return -1;
 if (VAR_0->provisioning_sp == ((void*)0) || VAR_1->provisioning_sp == ((void*)0) ||
     FUNC_0(VAR_0->provisioning_sp, VAR_1->provisioning_sp) != 0)
  return 0;
 if (VAR_0->sp_priority < VAR_1->sp_priority)
  return 1;
 if (VAR_0->sp_priority > VAR_1->sp_priority)
  return -1;
 return 0;
}
