
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int v; } ;
struct xfrm_policy {int security; TYPE_1__ mark; int selector; } ;
struct sock {int sk_mark; int sk_family; struct xfrm_policy** sk_policy; } ;
struct flowi {int secid; } ;


 struct xfrm_policy* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct xfrm_policy*) ;
 int VAR_1 ;
 int FUNC_6 (int *,struct flowi*,int ) ;

__attribute__((used)) static struct xfrm_policy *FUNC_7(struct sock *VAR_2, int VAR_3, struct flowi *VAR_4)
{
 struct xfrm_policy *VAR_5;

 FUNC_2(&VAR_1);
 if ((VAR_5 = VAR_2->sk_policy[VAR_3]) != ((void*)0)) {
  int VAR_6 = FUNC_6(&VAR_5->selector, VAR_4,
      VAR_2->sk_family);
  int VAR_7 = 0;

  if (VAR_6) {
   if ((VAR_2->sk_mark & VAR_5->mark.m) != VAR_5->mark.v) {
    VAR_5 = ((void*)0);
    goto out;
   }
   VAR_7 = FUNC_4(VAR_5->security,
            VAR_4->secid,
            FUNC_1(VAR_3));
   if (!VAR_7)
    FUNC_5(VAR_5);
   else if (VAR_7 == -VAR_0)
    VAR_5 = ((void*)0);
   else
    VAR_5 = FUNC_0(VAR_7);
  } else
   VAR_5 = ((void*)0);
 }
out:
 FUNC_3(&VAR_1);
 return VAR_5;
}
