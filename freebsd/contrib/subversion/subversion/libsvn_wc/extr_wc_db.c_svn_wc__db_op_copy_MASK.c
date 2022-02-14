
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct op_copy_baton {TYPE_1__* src_wcroot; TYPE_1__* dst_wcroot; int dst_op_root_relpath; int is_move; int const* work_items; int dst_relpath; int src_relpath; int member_0; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct op_copy_baton*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (TYPE_1__**,int *,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_1,
                   const char *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   svn_boolean_t VAR_5,
                   const svn_skel_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  struct op_copy_baton VAR_8 = {0};

  FUNC_1(FUNC_5(VAR_2));
  FUNC_1(FUNC_5(VAR_3));
  FUNC_1(FUNC_5(VAR_4));

  FUNC_0(FUNC_7(&VAR_8.src_wcroot,
                                                &VAR_8.src_relpath, VAR_1,
                                                VAR_2,
                                                VAR_7, VAR_7));
  FUNC_3(VAR_8.src_wcroot);

  FUNC_0(FUNC_7(&VAR_8.dst_wcroot,
                                                &VAR_8.dst_relpath,
                                                VAR_1, VAR_3,
                                                VAR_7, VAR_7));
  FUNC_3(VAR_8.dst_wcroot);

  VAR_8.work_items = VAR_6;
  VAR_8.is_move = VAR_5;
  VAR_8.dst_op_root_relpath = FUNC_6(VAR_8.dst_wcroot->abspath,
                                                     VAR_4);



  FUNC_2(FUNC_4(VAR_8.src_wcroot, &VAR_8, VAR_7),
                      VAR_8.src_wcroot);

  return VAR_0;
}
