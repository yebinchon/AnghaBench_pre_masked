
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_replay_state {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct xfrm_lifetime_cur {int dummy; } ;
struct xfrm_aevent_id {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct xfrm_aevent_id))
        + FUNC_1(sizeof(struct xfrm_replay_state))
        + FUNC_1(sizeof(struct xfrm_lifetime_cur))
        + FUNC_1(sizeof(struct xfrm_mark))
        + FUNC_1(4)
        + FUNC_1(4);
}
