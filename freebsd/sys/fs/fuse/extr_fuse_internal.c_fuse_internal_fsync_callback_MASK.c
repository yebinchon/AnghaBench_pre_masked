
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct TYPE_3__ {scalar_t__ error; } ;
struct fuse_ticket {TYPE_2__* tk_data; TYPE_1__ tk_aw_ohead; } ;
struct TYPE_4__ {int mp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fuse_ticket*) ;

int
FUNC_2(struct fuse_ticket *VAR_1, struct uio *VAR_2)
{
 if (VAR_1->tk_aw_ohead.error == VAR_0) {
  FUNC_0(VAR_1->tk_data->mp, FUNC_1(VAR_1));
 }
 return 0;
}
