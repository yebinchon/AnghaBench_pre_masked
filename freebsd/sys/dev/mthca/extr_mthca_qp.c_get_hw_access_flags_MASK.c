
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mthca_qp {int atomic_rd_en; int resp_depth; } ;
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
 int FUNC_0 (int) ;

__attribute__((used)) static __be32 FUNC_1(struct mthca_qp *VAR_8, const struct ib_qp_attr *VAR_9,
      int VAR_10)
{
 u8 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;

 if (VAR_10 & VAR_4)
  VAR_11 = VAR_9->max_dest_rd_atomic;
 else
  VAR_11 = VAR_8->resp_depth;

 if (VAR_10 & VAR_3)
  VAR_12 = VAR_9->qp_access_flags;
 else
  VAR_12 = VAR_8->atomic_rd_en;

 if (!VAR_11)
  VAR_12 &= VAR_2;

 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_5;
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_7;

 return FUNC_0(VAR_13);
}
