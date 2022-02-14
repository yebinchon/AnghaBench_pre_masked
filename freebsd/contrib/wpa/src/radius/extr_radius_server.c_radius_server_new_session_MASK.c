
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {struct radius_session* next; scalar_t__ sess_id; struct radius_client* client; struct radius_server_data* server; } ;
struct radius_server_data {scalar_t__ num_sess; int next_sess_id; } ;
struct radius_client {struct radius_session* sessions; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct radius_server_data*,struct radius_session*) ;
 struct radius_session* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static struct radius_session *
FUNC_3(struct radius_server_data *VAR_3,
     struct radius_client *VAR_4)
{
 struct radius_session *VAR_5;

 if (VAR_3->num_sess >= VAR_0) {
  FUNC_0("Maximum number of existing session - no room "
        "for a new session");
  return ((void*)0);
 }

 VAR_5 = FUNC_2(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->server = VAR_3;
 VAR_5->client = VAR_4;
 VAR_5->sess_id = VAR_3->next_sess_id++;
 VAR_5->next = VAR_4->sessions;
 VAR_4->sessions = VAR_5;
 FUNC_1(VAR_1, 0,
          VAR_2, VAR_3, VAR_5);
 VAR_3->num_sess++;
 return VAR_5;
}
