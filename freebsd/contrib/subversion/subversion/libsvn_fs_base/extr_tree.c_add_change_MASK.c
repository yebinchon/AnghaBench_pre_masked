
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct TYPE_3__ {void* prop_mod; void* text_mod; int kind; int const* noderev_id; int path; } ;
typedef TYPE_1__ change_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const*,int *) ;
 int * FUNC_1 (int *,char const*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_0,
           const char *VAR_1,
           const char *VAR_2,
           const svn_fs_id_t *VAR_3,
           svn_fs_path_change_kind_t VAR_4,
           svn_boolean_t VAR_5,
           svn_boolean_t VAR_6,
           trail_t *VAR_7,
           apr_pool_t *VAR_8)
{
  change_t VAR_9;
  VAR_9.path = FUNC_0(VAR_2, VAR_8);
  VAR_9.noderev_id = VAR_3;
  VAR_9.kind = VAR_4;
  VAR_9.text_mod = VAR_5;
  VAR_9.prop_mod = VAR_6;
  return FUNC_1(VAR_0, VAR_1, &VAR_9, VAR_7, VAR_8);
}
