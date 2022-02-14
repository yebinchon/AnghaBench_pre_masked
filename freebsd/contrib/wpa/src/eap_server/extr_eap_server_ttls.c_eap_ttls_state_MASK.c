
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {int state; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_ttls_data *VAR_2, int VAR_3)
{
 FUNC_2(VAR_1, "EAP-TTLS: %s -> %s",
     FUNC_0(VAR_2->state),
     FUNC_0(VAR_3));
 VAR_2->state = VAR_3;
 if (VAR_3 == VAR_0)
  FUNC_1(VAR_2->ssl.conn);
}
