
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_tmpl {int calgos; int ealgos; int aalgos; int optional; int share; int mode; int reqid; int saddr; int family; int id; } ;
struct xfrm_tmpl {int calgos; int ealgos; int aalgos; int optional; int share; int mode; int reqid; int saddr; int encap_family; int id; } ;
struct xfrm_policy {int xfrm_nr; struct xfrm_tmpl* xfrm_vec; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct xfrm_user_tmpl*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct xfrm_user_tmpl*) ;

__attribute__((used)) static int FUNC_3(struct xfrm_policy *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_user_tmpl VAR_4[VAR_1];
 int VAR_5;

 if (VAR_2->xfrm_nr == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->xfrm_nr; VAR_5++) {
  struct xfrm_user_tmpl *VAR_6 = &VAR_4[VAR_5];
  struct xfrm_tmpl *VAR_7 = &VAR_2->xfrm_vec[VAR_5];

  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  FUNC_0(&VAR_6->id, &VAR_7->id, sizeof(VAR_6->id));
  VAR_6->family = VAR_7->encap_family;
  FUNC_0(&VAR_6->saddr, &VAR_7->saddr, sizeof(VAR_6->saddr));
  VAR_6->reqid = VAR_7->reqid;
  VAR_6->mode = VAR_7->mode;
  VAR_6->share = VAR_7->share;
  VAR_6->optional = VAR_7->optional;
  VAR_6->aalgos = VAR_7->aalgos;
  VAR_6->ealgos = VAR_7->ealgos;
  VAR_6->calgos = VAR_7->calgos;
 }

 return FUNC_2(VAR_3, VAR_0,
         sizeof(struct xfrm_user_tmpl) * VAR_2->xfrm_nr, VAR_4);
}
