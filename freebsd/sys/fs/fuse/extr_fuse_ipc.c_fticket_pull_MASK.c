
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int dummy; } ;
struct TYPE_2__ {scalar_t__ error; } ;
struct fuse_ticket {TYPE_1__ tk_aw_ohead; } ;


 int FUNC_0 (struct fuse_ticket*,struct uio*) ;
 int FUNC_1 (struct fuse_ticket*,int ) ;
 int FUNC_2 (struct uio*) ;

int
FUNC_3(struct fuse_ticket *VAR_0, struct uio *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->tk_aw_ohead.error) {
  return 0;
 }
 VAR_2 = FUNC_1(VAR_0, FUNC_2(VAR_1));
 if (!VAR_2) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }
 return VAR_2;
}
