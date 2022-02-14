
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long* qend; } ;
struct mlx5_qp {unsigned long long* sq_start; TYPE_1__ sq; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned long long *VAR_0, unsigned long long *VAR_1,
    unsigned VAR_2, struct mlx5_qp *VAR_3)
{
 while (VAR_2 > 0) {
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
  VAR_2 -= 8 * sizeof(unsigned long long);
  if (FUNC_0(VAR_1 == VAR_3->sq.qend))
   VAR_1 = VAR_3->sq_start;
 }
}
