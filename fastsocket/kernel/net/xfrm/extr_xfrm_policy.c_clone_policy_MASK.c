
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tmpl {int dummy; } ;
struct xfrm_policy {int xfrm_nr; int xfrm_vec; int type; int index; int flags; int action; int mark; int curlft; int lft; int security; int selector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xfrm_policy*,scalar_t__) ;
 int FUNC_1 (struct xfrm_policy*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_9(struct xfrm_policy *VAR_3, int VAR_4)
{
 struct xfrm_policy *VAR_5 = FUNC_7(FUNC_8(VAR_3), VAR_0);

 if (VAR_5) {
  VAR_5->selector = VAR_3->selector;
  if (FUNC_3(VAR_3->security,
            &VAR_5->security)) {
   FUNC_1(VAR_5);
   return ((void*)0);
  }
  VAR_5->lft = VAR_3->lft;
  VAR_5->curlft = VAR_3->curlft;
  VAR_5->mark = VAR_3->mark;
  VAR_5->action = VAR_3->action;
  VAR_5->flags = VAR_3->flags;
  VAR_5->xfrm_nr = VAR_3->xfrm_nr;
  VAR_5->index = VAR_3->index;
  VAR_5->type = VAR_3->type;
  FUNC_2(VAR_5->xfrm_vec, VAR_3->xfrm_vec,
         VAR_5->xfrm_nr*sizeof(struct xfrm_tmpl));
  FUNC_4(&VAR_2);
  FUNC_0(VAR_5, VAR_1+VAR_4);
  FUNC_5(&VAR_2);
  FUNC_6(VAR_5);
 }
 return VAR_5;
}
