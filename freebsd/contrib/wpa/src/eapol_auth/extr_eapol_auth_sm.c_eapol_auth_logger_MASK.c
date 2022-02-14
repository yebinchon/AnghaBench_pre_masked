
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ctx; } ;
struct TYPE_3__ {int (* logger ) (int ,int const*,int ,char const*) ;} ;
struct eapol_authenticator {TYPE_2__ conf; TYPE_1__ cb; } ;
typedef int eapol_logger_level ;


 int FUNC_0 (int ,int const*,int ,char const*) ;

__attribute__((used)) static void FUNC_1(struct eapol_authenticator *VAR_0,
         const u8 *VAR_1, eapol_logger_level VAR_2,
         const char *VAR_3)
{
 if (VAR_0->cb.logger == ((void*)0))
  return;
 VAR_0->cb.logger(VAR_0->conf.ctx, VAR_1, VAR_2, VAR_3);
}
