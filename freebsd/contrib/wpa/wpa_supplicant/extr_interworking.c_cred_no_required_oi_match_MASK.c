
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_cred {int required_roaming_consortium_len; int required_roaming_consortium; } ;
struct wpa_bss {TYPE_1__* anqp; } ;
struct TYPE_2__ {int * roaming_consortium; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int ,int ) ;
 int * FUNC_1 (struct wpa_bss*,int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_cred *VAR_1, struct wpa_bss *VAR_2)
{
 const u8 *VAR_3;

 if (VAR_1->required_roaming_consortium_len == 0)
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_0);

 if (VAR_3 == ((void*)0) &&
     (VAR_2->anqp == ((void*)0) || VAR_2->anqp->roaming_consortium == ((void*)0)))
  return 1;

 return !FUNC_0(VAR_3,
      VAR_2->anqp ?
      VAR_2->anqp->roaming_consortium : ((void*)0),
      VAR_1->required_roaming_consortium,
      VAR_1->required_roaming_consortium_len);
}
