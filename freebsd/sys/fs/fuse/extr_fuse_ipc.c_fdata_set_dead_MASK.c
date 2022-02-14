
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_data {int ms_mtx; int ticketer; int ks_rsel; int dataflags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct fuse_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fuse_data*) ;

void
FUNC_8(struct fuse_data *VAR_2)
{
 FUNC_0();
 if (FUNC_2(VAR_2)) {
  FUNC_1();
  return;
 }
 FUNC_3(VAR_2->ms_mtx);
 VAR_2->dataflags |= VAR_0;
 FUNC_7(VAR_2);
 FUNC_5(&VAR_2->ks_rsel, VAR_1 + 1);
 FUNC_6(&VAR_2->ticketer);
 FUNC_4(VAR_2->ms_mtx);
 FUNC_1();
}
