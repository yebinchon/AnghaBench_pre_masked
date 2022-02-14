
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_user_polexpire {int dummy; } ;
struct xfrm_policy {int xfrm_nr; int security; } ;
struct xfrm_mark {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline size_t FUNC_4(struct xfrm_policy *VAR_0)
{
 return FUNC_0(sizeof(struct xfrm_user_polexpire))
        + FUNC_1(sizeof(struct xfrm_user_tmpl) * VAR_0->xfrm_nr)
        + FUNC_1(FUNC_3(VAR_0->security))
        + FUNC_1(sizeof(struct xfrm_mark))
        + FUNC_2();
}
