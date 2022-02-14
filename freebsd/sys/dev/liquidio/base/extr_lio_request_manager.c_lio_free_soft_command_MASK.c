
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int alloc_buf_count; int head; } ;
struct octeon_device {TYPE_1__ sc_buf_pool; } ;
struct lio_soft_command {int node; } ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct octeon_device *VAR_1,
        struct lio_soft_command *VAR_2)
{

 FUNC_2(&VAR_1->sc_buf_pool.lock);

 FUNC_0(&VAR_1->sc_buf_pool.head, &VAR_2->node, VAR_0);

 FUNC_1(&VAR_1->sc_buf_pool.alloc_buf_count, 1);

 FUNC_3(&VAR_1->sc_buf_pool.lock);
}
