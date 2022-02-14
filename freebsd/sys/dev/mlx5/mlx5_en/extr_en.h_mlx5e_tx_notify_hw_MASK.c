
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ map; scalar_t__ bf_map; } ;
struct TYPE_6__ {int * db; } ;
struct mlx5e_sq {int bf_buf_size; int bf_offset; TYPE_2__* priv; TYPE_1__ uar; int pc; TYPE_3__ wq; } ;
struct TYPE_5__ {int doorbell_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void
FUNC_5(struct mlx5e_sq *VAR_1, u32 *VAR_2, int VAR_3)
{
 u16 VAR_4 = VAR_0 + VAR_1->bf_offset;


 FUNC_4();

 *VAR_1->wq.db = FUNC_2(VAR_1->pc);





 FUNC_4();

 if (VAR_3) {
  FUNC_1(VAR_1->uar.bf_map + VAR_4, VAR_2, VAR_3);


  FUNC_4();

 } else {
  FUNC_3(VAR_2, VAR_1->uar.map + VAR_4,
      FUNC_0(&VAR_1->priv->doorbell_lock));
 }

 VAR_1->bf_offset ^= VAR_1->bf_buf_size;
}
