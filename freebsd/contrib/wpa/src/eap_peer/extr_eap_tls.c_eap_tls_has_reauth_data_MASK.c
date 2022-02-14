
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_tls_data {TYPE_1__ ssl; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static Boolean FUNC_1(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_tls_data *VAR_2 = VAR_1;
 return FUNC_0(VAR_2->ssl_ctx, VAR_2->ssl.conn);
}
