
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {int dummy; } ;
struct rta_cacheinfo {int dummy; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct rtmsg))
        + FUNC_1(16)
        + FUNC_1(16)
        + FUNC_1(16)
        + FUNC_1(16)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + VAR_0 * FUNC_1(4)
        + FUNC_1(sizeof(struct rta_cacheinfo));
}
