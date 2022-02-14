
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct TYPE_4__ {scalar_t__ base; } ;
struct fuse_ticket {TYPE_2__ tk_ms_fiov; TYPE_1__* tk_data; } ;
struct fuse_in_header {int nodeid; } ;
struct TYPE_3__ {int mp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int) ;

int
FUNC_1(struct fuse_ticket *VAR_1, struct uio *VAR_2)
{
 FUNC_0(VAR_1->tk_data->mp, VAR_0, ((void*)0),
     ((struct fuse_in_header *)VAR_1->tk_ms_fiov.base)->nodeid, 1);

 return 0;
}
