
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int callback_baton; TYPE_1__* callbacks; } ;
typedef TYPE_2__ wc_diff_wrap_baton_t ;
typedef int svn_error_t ;
struct TYPE_7__ {TYPE_2__* baton; } ;
typedef TYPE_3__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* dir_closed ) (int *,int *,int *,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int *,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_2,
                const svn_diff_source_t *VAR_3,
                const svn_diff_source_t *VAR_4,
                void *VAR_5,
                const svn_diff_tree_processor_t *VAR_6,
                apr_pool_t *VAR_7)
{
  wc_diff_wrap_baton_t *VAR_8 = VAR_6->baton;



  FUNC_0(VAR_8->callbacks->dir_closed(((void*)0), ((void*)0), ((void*)0),
                                    VAR_2,
                                    VAR_0 ,
                                    VAR_8->callback_baton,
                                    VAR_7));

return VAR_1;
}
