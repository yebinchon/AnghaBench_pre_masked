
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ lro_wqe_sz; scalar_t__ hw_lro_en; } ;
struct mlx5e_priv {TYPE_2__* ifp; TYPE_1__ params; } ;
struct TYPE_4__ {int if_mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct mlx5e_priv *VAR_7, u32 *VAR_8, u32 *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_10 = VAR_7->params.hw_lro_en ? VAR_7->params.lro_wqe_sz :
     FUNC_0(VAR_7->ifp->if_mtu);
 if (VAR_10 > VAR_2)
  return (-VAR_0);

 if (VAR_10 > VAR_3)
  VAR_10 = VAR_2;
 else if (VAR_10 > VAR_4)
  VAR_10 = VAR_3;
 else if (VAR_10 > VAR_1)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_1;






 for (VAR_11 = FUNC_1(VAR_10, VAR_6); !FUNC_2(VAR_11 + 1); VAR_11++)
  ;

 if (VAR_11 > VAR_5)
  return (-VAR_0);

 *VAR_8 = VAR_10;
 *VAR_9 = VAR_11;
 return (0);
}
