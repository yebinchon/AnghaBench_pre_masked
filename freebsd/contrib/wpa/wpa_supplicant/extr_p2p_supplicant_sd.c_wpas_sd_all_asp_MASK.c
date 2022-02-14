
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
typedef int q ;
struct TYPE_2__ {int p2p; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpabuf*,int,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_0,
       struct wpabuf *VAR_1, u8 VAR_2)
{





 const u8 VAR_3[] = { 1, (const u8) '*', 0 };

 if (FUNC_0(VAR_0->global->p2p))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, sizeof(VAR_3));
}
