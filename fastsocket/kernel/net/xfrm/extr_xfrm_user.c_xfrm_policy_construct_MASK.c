
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_userpolicy_info {int dummy; } ;
struct TYPE_2__ {int dead; } ;
struct xfrm_policy {TYPE_1__ walk; int mark; int type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_policy*,struct xfrm_userpolicy_info*) ;
 int FUNC_1 (int *,struct nlattr**) ;
 int FUNC_2 (struct xfrm_policy*,struct nlattr**) ;
 int FUNC_3 (struct xfrm_policy*,struct nlattr**) ;
 int FUNC_4 (struct nlattr**,int *) ;
 struct xfrm_policy* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_policy *FUNC_7(struct net *VAR_2, struct xfrm_userpolicy_info *VAR_3, struct nlattr **VAR_4, int *VAR_5)
{
 struct xfrm_policy *VAR_6 = FUNC_5(VAR_2, VAR_1);
 int VAR_7;

 if (!VAR_6) {
  *VAR_5 = -VAR_0;
  return ((void*)0);
 }

 FUNC_0(VAR_6, VAR_3);

 VAR_7 = FUNC_1(&VAR_6->type, VAR_4);
 if (VAR_7)
  goto error;

 if (!(VAR_7 = FUNC_3(VAR_6, VAR_4)))
  VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (VAR_7)
  goto error;

 FUNC_4(VAR_4, &VAR_6->mark);

 return VAR_6;
 error:
 *VAR_5 = VAR_7;
 VAR_6->walk.dead = 1;
 FUNC_6(VAR_6);
 return ((void*)0);
}
