
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * db; } ;
struct TYPE_4__ {TYPE_1__ db; } ;
struct mlx4_en_rx_ring {int prod; TYPE_2__ wqres; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct mlx4_en_rx_ring *VAR_0)
{
 *VAR_0->wqres.db.db = FUNC_0(VAR_0->prod & 0xffff);
}
