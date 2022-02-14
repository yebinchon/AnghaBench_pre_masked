
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct mlx5_ib_qp {int dummy; } ;
struct mlx5_cqe64 {int byte_cnt; } ;
typedef int __be64 ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_ib_qp*,int ) ;
 void* FUNC_3 (struct mlx5_ib_qp*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_qp *VAR_0, struct mlx5_cqe64 *VAR_1,
     uint16_t VAR_2)
{
 void *VAR_3;
 int VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_0, VAR_2))
  return;

 VAR_4 = FUNC_0(VAR_1->byte_cnt);
 VAR_3 = FUNC_3(VAR_0, VAR_2);

 if (VAR_4 == 4) {
  *(uint32_t *)VAR_3 = FUNC_0(*((__be32 *)VAR_3));
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 8) {
   *(uint64_t *)VAR_3 = FUNC_1(*((__be64 *)VAR_3));
   VAR_3 += 8;
  }
 }

 return;
}
