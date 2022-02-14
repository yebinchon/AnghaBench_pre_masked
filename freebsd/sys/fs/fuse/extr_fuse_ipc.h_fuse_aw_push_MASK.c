
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_ticket {TYPE_1__* tk_data; int tk_refcount; } ;
struct TYPE_2__ {int aw_head; int aw_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct fuse_ticket*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_3(struct fuse_ticket *VAR_2)
{
 FUNC_1(&VAR_2->tk_data->aw_mtx, VAR_0);
 FUNC_2(&VAR_2->tk_refcount);
 FUNC_0(&VAR_2->tk_data->aw_head, VAR_2, VAR_1);
}
