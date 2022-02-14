
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * tqe_prev; int * tqe_next; } ;
struct fuse_ticket {TYPE_2__ tk_aw_link; TYPE_1__* tk_data; } ;
struct TYPE_3__ {int aw_head; int aw_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct fuse_ticket*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(struct fuse_ticket *VAR_2)
{
 FUNC_1(&VAR_2->tk_data->aw_mtx, VAR_0);
 FUNC_0(&VAR_2->tk_data->aw_head, VAR_2, VAR_1);




}
