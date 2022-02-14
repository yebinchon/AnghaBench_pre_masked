
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
struct TYPE_2__ {int (* send_eapol ) (int ,int const*,int const*,size_t,int) ;} ;


 int FUNC_0 (int ,int const*,int const*,size_t,int) ;

__attribute__((used)) static inline int
FUNC_1(struct wpa_authenticator *VAR_0, const u8 *VAR_1,
      const u8 *VAR_2, size_t VAR_3, int VAR_4)
{
 if (VAR_0->cb->send_eapol == ((void*)0))
  return -1;
 return VAR_0->cb->send_eapol(VAR_0->cb_ctx, VAR_1, VAR_2, VAR_3,
     VAR_4);
}
