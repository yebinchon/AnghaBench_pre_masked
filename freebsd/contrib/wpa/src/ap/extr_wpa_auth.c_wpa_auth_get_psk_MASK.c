
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
struct TYPE_2__ {int const* (* get_psk ) (int ,int const*,int const*,int const*,size_t*,int*) ;} ;


 int const* FUNC_0 (int ,int const*,int const*,int const*,size_t*,int*) ;

__attribute__((used)) static inline const u8 * FUNC_1(struct wpa_authenticator *VAR_0,
       const u8 *VAR_1,
       const u8 *VAR_2,
       const u8 *VAR_3, size_t *VAR_4,
       int *VAR_5)
{
 if (VAR_0->cb->get_psk == ((void*)0))
  return ((void*)0);
 return VAR_0->cb->get_psk(VAR_0->cb_ctx, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5);
}
