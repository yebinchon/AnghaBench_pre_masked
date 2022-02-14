
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {struct radius_session* nas_ip; struct radius_session* username; int last_reply; struct radius_session* last_from_addr; int last_msg; int eap; } ;
struct radius_server_data {int num_sess; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct radius_server_data*,struct radius_session*) ;
 int FUNC_2 (struct radius_session*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct radius_server_data *VAR_2,
           struct radius_session *VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_0(VAR_3->eap);
 FUNC_3(VAR_3->last_msg);
 FUNC_2(VAR_3->last_from_addr);
 FUNC_3(VAR_3->last_reply);
 FUNC_2(VAR_3->username);
 FUNC_2(VAR_3->nas_ip);
 FUNC_2(VAR_3);
 VAR_2->num_sess--;
}
