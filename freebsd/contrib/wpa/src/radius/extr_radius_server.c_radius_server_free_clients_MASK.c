
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_server_data {int dummy; } ;
struct radius_client {int pending_dac_disconnect_req; int pending_dac_coa_req; struct radius_client* shared_secret; int sessions; struct radius_client* next; } ;


 int FUNC_0 (struct radius_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radius_server_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct radius_server_data *VAR_0,
           struct radius_client *VAR_1)
{
 struct radius_client *VAR_2, *VAR_3;

 VAR_2 = VAR_1;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;

  FUNC_2(VAR_0, VAR_3->sessions);
  FUNC_0(VAR_3->shared_secret);
  FUNC_1(VAR_3->pending_dac_coa_req);
  FUNC_1(VAR_3->pending_dac_disconnect_req);
  FUNC_0(VAR_3);
 }
}
