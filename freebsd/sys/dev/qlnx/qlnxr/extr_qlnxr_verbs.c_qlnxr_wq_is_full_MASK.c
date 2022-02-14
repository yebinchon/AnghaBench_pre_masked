
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlnxr_qp_hwq_info {int prod; int max_wr; int cons; } ;



__attribute__((used)) static inline int
FUNC_0(struct qlnxr_qp_hwq_info *VAR_0)
{
 return (((VAR_0->prod + 1) % VAR_0->max_wr) == VAR_0->cons);
}
