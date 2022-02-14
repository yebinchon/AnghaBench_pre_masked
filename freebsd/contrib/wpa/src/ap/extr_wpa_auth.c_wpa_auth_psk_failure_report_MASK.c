
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
struct TYPE_2__ {int (* psk_failure_report ) (int ,int const*) ;} ;


 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static inline void FUNC_1(
 struct wpa_authenticator *VAR_0, const u8 *VAR_1)
{
 if (VAR_0->cb->psk_failure_report)
  VAR_0->cb->psk_failure_report(VAR_0->cb_ctx, VAR_1);
}
