
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ disable_pmksa_caching; } ;
struct wpa_authenticator {int addr; int pmksa; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,size_t,int const*,int *,int ,int ,int const*,int,int *,int) ;
 int FUNC_1 (int ,char*,int const*,int ) ;

int FUNC_2(struct wpa_authenticator *VAR_2, const u8 *VAR_3,
   const u8 *VAR_4, size_t VAR_5, const u8 *VAR_6,
   int VAR_7, int VAR_8)
{
 if (VAR_2->conf.disable_pmksa_caching)
  return -1;

 FUNC_1(VAR_0, "RSN: Cache PMK (2)", VAR_4, VAR_1);
 if (FUNC_0(VAR_2->pmksa, VAR_4, VAR_5, VAR_6,
     ((void*)0), 0, VAR_2->addr, VAR_3, VAR_7,
     ((void*)0), VAR_8))
  return 0;

 return -1;
}
