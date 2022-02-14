
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_err_cqe {int syndrome; int vendor_err_syndrome; } ;
struct mlx4_en_priv {int dummy; } ;
struct mlx4_cqe {int owner_sr_opcode; int badfcs_enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct mlx4_en_priv *VAR_4,
         struct mlx4_cqe *VAR_5)
{

 if (FUNC_2((VAR_5->owner_sr_opcode & VAR_2) ==
       VAR_1)) {
  FUNC_1(VAR_4, "CQE completed in error - vendor syndrom:%d syndrom:%d\n",
         ((struct mlx4_err_cqe *)VAR_5)->vendor_err_syndrome,
         ((struct mlx4_err_cqe *)VAR_5)->syndrome);
  return 1;
 }
 if (FUNC_2(VAR_5->badfcs_enc & VAR_0)) {
  FUNC_0(VAR_3, VAR_4, "Accepted frame with bad FCS\n");
  return 1;
 }

 return 0;
}
