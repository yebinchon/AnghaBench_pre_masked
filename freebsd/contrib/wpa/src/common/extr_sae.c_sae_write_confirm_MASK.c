
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sae_data {int send_confirm; TYPE_1__* tmp; int peer_commit_scalar; } ;
struct TYPE_2__ {int peer_commit_element_ffc; int own_commit_element_ffc; int own_commit_scalar; int peer_commit_element_ecc; int own_commit_element_ecc; scalar_t__ ec; } ;


 int VAR_0 ;
 int FUNC_0 (struct sae_data*,int const*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct sae_data*,int const*,int ,int ,int ,int ,int *) ;
 int * FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int) ;

void FUNC_4(struct sae_data *VAR_1, struct wpabuf *VAR_2)
{
 const u8 *VAR_3;

 if (VAR_1->tmp == ((void*)0))
  return;


 VAR_3 = FUNC_2(VAR_2, 0);
 FUNC_3(VAR_2, VAR_1->send_confirm);
 if (VAR_1->send_confirm < 0xffff)
  VAR_1->send_confirm++;

 if (VAR_1->tmp->ec)
  FUNC_0(VAR_1, VAR_3, VAR_1->tmp->own_commit_scalar,
       VAR_1->tmp->own_commit_element_ecc,
       VAR_1->peer_commit_scalar,
       VAR_1->tmp->peer_commit_element_ecc,
       FUNC_2(VAR_2, VAR_0));
 else
  FUNC_1(VAR_1, VAR_3, VAR_1->tmp->own_commit_scalar,
       VAR_1->tmp->own_commit_element_ffc,
       VAR_1->peer_commit_scalar,
       VAR_1->tmp->peer_commit_element_ffc,
       FUNC_2(VAR_2, VAR_0));
}
