
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrmu_spdinfo {int dummy; } ;
struct xfrmu_spdhinfo {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(4)
        + FUNC_1(sizeof(struct xfrmu_spdinfo))
        + FUNC_1(sizeof(struct xfrmu_spdhinfo));
}
