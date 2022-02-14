
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_user_acquire {int dummy; } ;
struct xfrm_state {int security; } ;
struct xfrm_policy {int xfrm_nr; } ;
struct xfrm_mark {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline size_t FUNC_4(struct xfrm_state *VAR_0,
       struct xfrm_policy *VAR_1)
{
 return FUNC_0(sizeof(struct xfrm_user_acquire))
        + FUNC_1(sizeof(struct xfrm_user_tmpl) * VAR_1->xfrm_nr)
        + FUNC_1(sizeof(struct xfrm_mark))
        + FUNC_1(FUNC_3(VAR_0->security))
        + FUNC_2();
}
