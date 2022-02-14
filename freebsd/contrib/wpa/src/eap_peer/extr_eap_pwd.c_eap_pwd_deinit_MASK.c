
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eap_sm {int dummy; } ;
struct TYPE_3__ {TYPE_2__* range; } ;
struct eap_pwd_data {int id_peer_len; int id_server_len; int password_len; TYPE_1__ allowed_groups; int outbuf; int inbuf; TYPE_2__* grp; struct eap_pwd_data* password; struct eap_pwd_data* id_server; struct eap_pwd_data* id_peer; int server_element; int my_element; int k; int my_scalar; int server_scalar; int private_value; } ;
struct TYPE_4__ {int pwe; int group; } ;


 int FUNC_0 (struct eap_pwd_data*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_pwd_data *VAR_2 = VAR_1;

 FUNC_1(VAR_2->private_value, 1);
 FUNC_1(VAR_2->server_scalar, 1);
 FUNC_1(VAR_2->my_scalar, 1);
 FUNC_1(VAR_2->k, 1);
 FUNC_3(VAR_2->my_element, 1);
 FUNC_3(VAR_2->server_element, 1);
 FUNC_0(VAR_2->id_peer, VAR_2->id_peer_len);
 FUNC_0(VAR_2->id_server, VAR_2->id_server_len);
 FUNC_0(VAR_2->password, VAR_2->password_len);
 if (VAR_2->grp) {
  FUNC_2(VAR_2->grp->group);
  FUNC_3(VAR_2->grp->pwe, 1);
  FUNC_4(VAR_2->grp);
 }
 FUNC_5(VAR_2->inbuf);
 FUNC_5(VAR_2->outbuf);
 FUNC_4(VAR_2->allowed_groups.range);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}
