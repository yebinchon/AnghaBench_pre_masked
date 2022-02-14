
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
struct eap_peap_data {int state; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_peap_data *VAR_3, int VAR_4)
{
 FUNC_2(VAR_2, "EAP-PEAP: %s -> %s",
     FUNC_0(VAR_3->state),
     FUNC_0(VAR_4));
 VAR_3->state = VAR_4;
 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  FUNC_1(VAR_3->ssl.conn);
}
