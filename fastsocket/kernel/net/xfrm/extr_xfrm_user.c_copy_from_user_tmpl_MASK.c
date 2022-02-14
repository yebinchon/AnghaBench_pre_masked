
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_policy {int family; scalar_t__ xfrm_nr; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct xfrm_policy*,struct xfrm_user_tmpl*,int) ;
 struct xfrm_user_tmpl* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int,struct xfrm_user_tmpl*,int ) ;

__attribute__((used)) static int FUNC_4(struct xfrm_policy *VAR_1, struct nlattr **VAR_2)
{
 struct nlattr *VAR_3 = VAR_2[VAR_0];

 if (!VAR_3) {
  VAR_1->xfrm_nr = 0;
 } else {
  struct xfrm_user_tmpl *VAR_4 = FUNC_1(VAR_3);
  int VAR_5 = FUNC_2(VAR_3) / sizeof(*VAR_4);
  int VAR_6;

  VAR_6 = FUNC_3(VAR_5, VAR_4, VAR_1->family);
  if (VAR_6)
   return VAR_6;

  FUNC_0(VAR_1, VAR_4, VAR_5);
 }
 return 0;
}
