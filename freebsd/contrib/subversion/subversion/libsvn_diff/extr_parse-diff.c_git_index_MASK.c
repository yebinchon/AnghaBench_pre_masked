
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ new_executable_bit; scalar_t__ new_symlink_bit; scalar_t__ operation; scalar_t__ old_executable_bit; scalar_t__ old_symlink_bit; } ;
typedef TYPE_1__ svn_patch_t ;
typedef int svn_error_t ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_4(enum parse_state *VAR_4, char *VAR_5, svn_patch_t *VAR_6,
          apr_pool_t *VAR_7, apr_pool_t *VAR_8)
{
  VAR_5 = FUNC_3(VAR_5 + FUNC_0("index "), ' ');

  if (VAR_5 && VAR_6->new_executable_bit == VAR_3
           && VAR_6->new_symlink_bit == VAR_3
           && VAR_6->operation != VAR_1
           && VAR_6->operation != VAR_2)
    {
      FUNC_1(FUNC_2(&VAR_6->new_executable_bit,
                                  &VAR_6->new_symlink_bit,
                                  VAR_5 + 1));


      VAR_6->old_executable_bit = VAR_6->new_executable_bit;
      VAR_6->old_symlink_bit = VAR_6->new_symlink_bit;
    }



  return VAR_0;
}
