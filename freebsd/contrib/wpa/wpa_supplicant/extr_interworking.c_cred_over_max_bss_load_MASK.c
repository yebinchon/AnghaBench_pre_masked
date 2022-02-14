
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct wpa_cred {int const max_bss_load; } ;
struct wpa_bss {TYPE_1__* anqp; } ;
struct TYPE_2__ {int * domain_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,struct wpa_cred*,int *) ;
 int* FUNC_1 (struct wpa_bss*,int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
      struct wpa_cred *VAR_2, struct wpa_bss *VAR_3)
{
 const u8 *VAR_4;
 int VAR_5;

 if (!VAR_2->max_bss_load)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 == ((void*)0) || VAR_4[1] < 3)
  return 0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3->anqp ?
     VAR_3->anqp->domain_name : ((void*)0));
 if (VAR_5 <= 0)
  return 0;

 return VAR_4[4] > VAR_2->max_bss_load;
}
