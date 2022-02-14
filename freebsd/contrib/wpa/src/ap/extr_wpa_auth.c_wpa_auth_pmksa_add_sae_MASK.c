
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
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*,int ,int const*,int *,int ,int ,int const*,int ,int *,int ) ;
 int FUNC_1 (int ,char*,int const*,int ) ;

int FUNC_2(struct wpa_authenticator *VAR_3, const u8 *VAR_4,
      const u8 *VAR_5, const u8 *VAR_6)
{
 if (VAR_3->conf.disable_pmksa_caching)
  return -1;

 FUNC_1(VAR_0, "RSN: Cache PMK from SAE", VAR_5, VAR_1);
 if (FUNC_0(VAR_3->pmksa, VAR_5, VAR_1, VAR_6,
     ((void*)0), 0,
     VAR_3->addr, VAR_4, 0, ((void*)0),
     VAR_2))
  return 0;

 return -1;
}
