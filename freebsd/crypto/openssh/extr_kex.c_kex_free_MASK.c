
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct kex {struct kex* name; struct kex* hostkey_alg; struct kex* failed_choice; struct kex* server_version_string; struct kex* client_version_string; struct kex* session_id; int my; int peer; int ** newkeys; int ec_client_key; int dh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (struct kex*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct kex *VAR_1)
{
 u_int VAR_2;







 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_3(VAR_1->newkeys[VAR_2]);
  VAR_1->newkeys[VAR_2] = ((void*)0);
 }
 FUNC_4(VAR_1->peer);
 FUNC_4(VAR_1->my);
 FUNC_2(VAR_1->session_id);
 FUNC_2(VAR_1->client_version_string);
 FUNC_2(VAR_1->server_version_string);
 FUNC_2(VAR_1->failed_choice);
 FUNC_2(VAR_1->hostkey_alg);
 FUNC_2(VAR_1->name);
 FUNC_2(VAR_1);
}
