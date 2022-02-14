
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int cancel_baton; int cancel_func; int status_baton; int status_func; int ignores; int no_ignore; int get_all; int default_depth; int target_abspath; int db; scalar_t__ root_opened; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
           apr_pool_t *VAR_3)
{
  struct edit_baton *VAR_4 = VAR_2;




  if (VAR_4->root_opened)
    return VAR_1;

  FUNC_0(FUNC_1(VAR_4->db,
                                       VAR_4->target_abspath,
                                       VAR_4->default_depth,
                                       VAR_4->get_all,
                                       VAR_4->no_ignore,
                                       VAR_0,
                                       VAR_4->ignores,
                                       VAR_4->status_func,
                                       VAR_4->status_baton,
                                       VAR_4->cancel_func,
                                       VAR_4->cancel_baton,
                                       VAR_3));

  return VAR_1;
}
