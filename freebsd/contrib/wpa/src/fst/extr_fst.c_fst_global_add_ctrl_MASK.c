
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_ctrl {scalar_t__ (* init ) () ;} ;
struct fst_ctrl_handle {int global_ctrls_lentry; struct fst_ctrl ctrl; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct fst_ctrl_handle*) ;
 struct fst_ctrl_handle* FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;

struct fst_ctrl_handle * FUNC_4(const struct fst_ctrl *VAR_1)
{
 struct fst_ctrl_handle *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 if (VAR_1->init && VAR_1->init()) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_2->ctrl = *VAR_1;
 FUNC_0(&VAR_0, &VAR_2->global_ctrls_lentry);

 return VAR_2;
}
