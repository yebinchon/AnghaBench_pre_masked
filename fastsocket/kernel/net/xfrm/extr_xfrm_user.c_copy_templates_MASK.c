
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct xfrm_user_tmpl {int aalgos; int ealgos; int calgos; int family; int optional; int share; int mode; int reqid; int saddr; int id; } ;
struct xfrm_tmpl {int aalgos; int ealgos; int calgos; int allalgs; int encap_family; int optional; int share; int mode; int reqid; int saddr; int id; } ;
struct xfrm_policy {int xfrm_nr; struct xfrm_tmpl* xfrm_vec; } ;
struct xfrm_id {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct xfrm_policy *VAR_0, struct xfrm_user_tmpl *VAR_1,
      int VAR_2)
{
 int VAR_3;

 VAR_0->xfrm_nr = VAR_2;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  struct xfrm_tmpl *VAR_4 = &VAR_0->xfrm_vec[VAR_3];

  FUNC_0(&VAR_4->id, &VAR_1->id, sizeof(struct xfrm_id));
  FUNC_0(&VAR_4->saddr, &VAR_1->saddr,
         sizeof(xfrm_address_t));
  VAR_4->reqid = VAR_1->reqid;
  VAR_4->mode = VAR_1->mode;
  VAR_4->share = VAR_1->share;
  VAR_4->optional = VAR_1->optional;
  VAR_4->aalgos = VAR_1->aalgos;
  VAR_4->ealgos = VAR_1->ealgos;
  VAR_4->calgos = VAR_1->calgos;

  VAR_4->allalgs = !~(VAR_4->aalgos & VAR_4->ealgos & VAR_4->calgos);
  VAR_4->encap_family = VAR_1->family;
 }
}
