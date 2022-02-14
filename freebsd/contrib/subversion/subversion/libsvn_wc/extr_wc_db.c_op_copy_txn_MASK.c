
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
struct op_copy_baton {int work_items; int dst_relpath; int * dst_wcroot; int src_relpath; int src_wcroot; int dst_op_root_relpath; scalar_t__ is_move; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int ,int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc__db_wcroot_t *VAR_1,
            struct op_copy_baton *VAR_2,
            apr_pool_t *VAR_3)
{
  int VAR_4;

  if (VAR_1 != VAR_2->dst_wcroot)
    {



      FUNC_1(FUNC_4(VAR_2->dst_wcroot, VAR_2, VAR_3),
                          VAR_2->dst_wcroot);

      return VAR_0;
    }



  if (VAR_2->is_move)
    VAR_4 = FUNC_3(VAR_2->dst_op_root_relpath);
  else
    VAR_4 = 0;

  FUNC_0(FUNC_2(VAR_2->src_wcroot, VAR_2->src_relpath,
                     VAR_2->dst_wcroot, VAR_2->dst_relpath,
                     VAR_2->work_items, VAR_4, VAR_3));

  return VAR_0;
}
