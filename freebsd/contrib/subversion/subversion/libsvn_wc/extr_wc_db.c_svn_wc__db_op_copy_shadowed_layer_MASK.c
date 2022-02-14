
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct op_copy_baton {int src_wcroot; int * work_items; int * dst_op_root_relpath; int is_move; int dst_wcroot; int dst_relpath; int src_relpath; int member_0; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct op_copy_baton*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc__db_t *VAR_1,
                                  const char *VAR_2,
                                  const char *VAR_3,
                                  svn_boolean_t VAR_4,
                                  apr_pool_t *VAR_5)
{
  struct op_copy_baton VAR_6 = {0};

  FUNC_1(FUNC_5(VAR_2));
  FUNC_1(FUNC_5(VAR_3));

  FUNC_0(FUNC_6(&VAR_6.src_wcroot,
                                                &VAR_6.src_relpath, VAR_1,
                                                VAR_2,
                                                VAR_5, VAR_5));
  FUNC_3(VAR_6.src_wcroot);

  FUNC_0(FUNC_6(&VAR_6.dst_wcroot,
                                                &VAR_6.dst_relpath,
                                                VAR_1, VAR_3,
                                                VAR_5, VAR_5));
  FUNC_3(VAR_6.dst_wcroot);

  VAR_6.is_move = VAR_4;
  VAR_6.dst_op_root_relpath = ((void*)0);

  VAR_6.work_items = ((void*)0);



  FUNC_2(FUNC_4(VAR_6.src_wcroot, &VAR_6,
                                                 VAR_5),
                      VAR_6.src_wcroot);

  return VAR_0;
}
