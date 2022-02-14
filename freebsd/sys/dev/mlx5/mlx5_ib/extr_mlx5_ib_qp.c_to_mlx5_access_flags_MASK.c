
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int atomic_rd_en; int resp_depth; } ;
struct mlx5_ib_qp {TYPE_1__ trans_qp; } ;
struct ib_qp_attr {int qp_access_flags; int max_dest_rd_atomic; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __be32 FUNC_1(struct mlx5_ib_qp *VAR_9, const struct ib_qp_attr *VAR_10,
       int VAR_11)
{
 u32 VAR_12 = 0;
 u8 VAR_13;
 u32 VAR_14;

 if (VAR_11 & VAR_4)
  VAR_13 = VAR_10->max_dest_rd_atomic;
 else
  VAR_13 = VAR_9->trans_qp.resp_depth;

 if (VAR_11 & VAR_3)
  VAR_14 = VAR_10->qp_access_flags;
 else
  VAR_14 = VAR_9->trans_qp.atomic_rd_en;

 if (!VAR_13)
  VAR_14 &= VAR_2;

 if (VAR_14 & VAR_1)
  VAR_12 |= VAR_7;
 if (VAR_14 & VAR_0)
  VAR_12 |= (VAR_6 | VAR_5);
 if (VAR_14 & VAR_2)
  VAR_12 |= VAR_8;

 return FUNC_0(VAR_12);
}
