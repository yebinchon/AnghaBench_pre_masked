
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_ticket {TYPE_1__* tk_data; int * tk_aw_handler; } ;
typedef int fuse_handler_t ;
struct TYPE_2__ {int aw_mtx; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct fuse_ticket*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct fuse_ticket *VAR_0, fuse_handler_t * VAR_1)
{
 if (FUNC_0(VAR_0->tk_data)) {
  return;
 }
 VAR_0->tk_aw_handler = VAR_1;

 FUNC_2(VAR_0->tk_data->aw_mtx);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->tk_data->aw_mtx);
}
