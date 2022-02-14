
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int FUNC_0 (int *,int,int const*,int ,struct wpabuf const*) ;

void FUNC_1(struct wpa_supplicant *VAR_0, int VAR_1,
     const u8 *VAR_2, u8 VAR_3,
     const struct wpabuf *VAR_4)
{
 if (VAR_0->global->p2p_disabled || VAR_0->global->p2p == ((void*)0))
  return;
 FUNC_0(VAR_0->global->p2p, VAR_1, VAR_2, VAR_3,
   VAR_4);
}
