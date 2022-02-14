
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ new_executable_bit; int new_symlink_bit; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_error_t ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int * VAR_0 ;
 int FUNC_3 (scalar_t__*,int *,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_4(enum parse_state *VAR_3, char *VAR_4, svn_patch_t *VAR_5,
             apr_pool_t *VAR_6, apr_pool_t *VAR_7)
{
  FUNC_1(FUNC_3(&VAR_5->new_executable_bit,
                              &VAR_5->new_symlink_bit,
                              VAR_4 + FUNC_0("new mode ")));
  *VAR_3 = VAR_1;
  return VAR_0;
}
