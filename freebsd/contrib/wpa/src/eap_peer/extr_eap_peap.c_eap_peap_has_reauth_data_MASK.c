
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {scalar_t__ phase2_success; TYPE_1__ ssl; } ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static Boolean FUNC_1(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_peap_data *VAR_2 = VAR_1;
 return FUNC_0(VAR_0->ssl_ctx, VAR_2->ssl.conn) &&
  VAR_2->phase2_success;
}
