
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_expire {int dummy; } ;
struct xfrm_mark {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct xfrm_user_expire))
        + FUNC_1(sizeof(struct xfrm_mark));
}
