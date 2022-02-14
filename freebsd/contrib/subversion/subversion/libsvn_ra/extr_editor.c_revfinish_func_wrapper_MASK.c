
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct wrapped_replay_baton_t {int editor; int (* revfinish_func ) (int ,void*,int ,int *,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,void*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_revnum_t VAR_1,
                       void *VAR_2,
                       const svn_delta_editor_t *VAR_3,
                       void *VAR_4,
                       apr_hash_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  struct wrapped_replay_baton_t *VAR_7 = VAR_2;

  FUNC_0(VAR_7->revfinish_func(VAR_1, VAR_2, VAR_7->editor, VAR_5,
                              VAR_6));

  return VAR_0;
}
