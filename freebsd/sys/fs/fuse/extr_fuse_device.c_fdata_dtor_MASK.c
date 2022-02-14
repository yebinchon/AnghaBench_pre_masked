
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int tk_aw_mtx; int tk_aw_errno; } ;
struct fuse_data {int ms_mtx; int aw_mtx; int ks_rsel; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct fuse_data*) ;
 int FUNC_4 (struct fuse_data*) ;
 int FUNC_5 (struct fuse_ticket*) ;
 struct fuse_ticket* FUNC_6 (struct fuse_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct fuse_ticket* FUNC_9 (struct fuse_data*) ;
 int FUNC_10 (struct fuse_ticket*) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (struct fuse_ticket*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_2)
{
 struct fuse_data *VAR_3;
 struct fuse_ticket *VAR_4;

 VAR_3 = VAR_2;
 if (VAR_3 == ((void*)0))
  return;

 FUNC_3(VAR_3);

 FUNC_1();
 FUNC_7(VAR_3->aw_mtx);

 FUNC_11(&VAR_3->ks_rsel, VAR_1 + 1);

 while ((VAR_4 = FUNC_6(VAR_3))) {
  FUNC_7(VAR_4->tk_aw_mtx);
  FUNC_5(VAR_4);
  VAR_4->tk_aw_errno = VAR_0;
  FUNC_12(VAR_4);
  FUNC_8(VAR_4->tk_aw_mtx);
  FUNC_0(VAR_4);
  FUNC_10(VAR_4);
 }
 FUNC_8(VAR_3->aw_mtx);


 FUNC_7(VAR_3->ms_mtx);
 while ((VAR_4 = FUNC_9(VAR_3))) {
  FUNC_10(VAR_4);
 }
 FUNC_8(VAR_3->ms_mtx);
 FUNC_2();

 FUNC_4(VAR_3);
}
