
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct mergeinfo_diff_baton {int * pool; int consider_inheritance; void* added; void* deleted; void* to; void* from; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (void*,void*,int ,struct mergeinfo_diff_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_mergeinfo_t VAR_1, svn_mergeinfo_t VAR_2,
                             svn_mergeinfo_t VAR_3, svn_mergeinfo_t VAR_4,
                             svn_boolean_t VAR_5,
                             apr_pool_t *VAR_6,
                             apr_pool_t *VAR_7)
{
  struct mergeinfo_diff_baton VAR_8;
  VAR_8.from = VAR_1;
  VAR_8.to = VAR_2;
  VAR_8.deleted = VAR_3;
  VAR_8.added = VAR_4;
  VAR_8.consider_inheritance = VAR_5;
  VAR_8.pool = VAR_6;

  return FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_8, VAR_7);
}
