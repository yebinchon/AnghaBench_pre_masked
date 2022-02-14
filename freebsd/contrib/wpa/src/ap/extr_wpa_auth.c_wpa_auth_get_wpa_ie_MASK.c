
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_authenticator {size_t wpa_ie_len; int const* wpa_ie; } ;



const u8 * FUNC_0(struct wpa_authenticator *VAR_0, size_t *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 *VAR_1 = VAR_0->wpa_ie_len;
 return VAR_0->wpa_ie;
}
