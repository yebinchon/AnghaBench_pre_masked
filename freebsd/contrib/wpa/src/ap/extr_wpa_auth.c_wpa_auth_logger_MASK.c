
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_authenticator {int cb_ctx; TYPE_1__* cb; } ;
typedef int logger_level ;
struct TYPE_2__ {int (* logger ) (int ,int const*,int ,char const*) ;} ;


 int FUNC_0 (int ,int const*,int ,char const*) ;

void FUNC_1(struct wpa_authenticator *VAR_0, const u8 *VAR_1,
       logger_level VAR_2, const char *VAR_3)
{
 if (VAR_0->cb->logger == ((void*)0))
  return;
 VAR_0->cb->logger(VAR_0->cb_ctx, VAR_1, VAR_2, VAR_3);
}
