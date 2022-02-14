
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct fuse_ticket {int tk_aw_errno; int tk_aw_mtx; } ;


 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 (struct fuse_ticket*,struct uio*) ;
 int FUNC_2 (struct fuse_ticket*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fuse_ticket*) ;

__attribute__((used)) static int
FUNC_6(struct fuse_ticket *VAR_0, struct uio *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_3(VAR_0->tk_aw_mtx);

 if (!FUNC_0(VAR_0)) {
  FUNC_2(VAR_0);
  VAR_0->tk_aw_errno = VAR_2;
  FUNC_5(VAR_0);
 }
 FUNC_4(VAR_0->tk_aw_mtx);

 return VAR_2;
}
