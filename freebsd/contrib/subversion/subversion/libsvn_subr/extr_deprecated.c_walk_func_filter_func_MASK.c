
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct walk_func_filter_baton_t {int walk_baton; int (* walk_func ) (int ,char const*,TYPE_1__ const*,int *) ;} ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ,char const*,TYPE_1__ const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3,
                      const char *VAR_4,
                      const apr_finfo_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  struct walk_func_filter_baton_t *VAR_7 = VAR_3;

  if (VAR_5->filetype == VAR_0 || VAR_5->filetype == VAR_1)
    FUNC_0(VAR_7->walk_func(VAR_7->walk_baton, VAR_4, VAR_5, VAR_6));

  return VAR_2;
}
