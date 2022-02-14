
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int result_pool; scalar_t__ empty_file; } ;
typedef TYPE_1__ wc_diff_wrap_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__*,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(wc_diff_wrap_baton_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  if (VAR_2->empty_file)
    return VAR_0;


  FUNC_0(FUNC_1(((void*)0), &VAR_2->empty_file, ((void*)0),
                                   VAR_1,
                                   VAR_2->result_pool, VAR_3));

  return VAR_0;
}
