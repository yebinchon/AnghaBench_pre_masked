
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int original_no_final_eol; int modified_no_final_eol; TYPE_1__* patch; int original_text_range; int modified_text_range; int apr_file; } ;
typedef TYPE_2__ svn_diff_hunk_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ reverse; } ;


 int FUNC_0 (int ,int *,int **,char const**,int *,char,int ,int *,int *) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_diff_hunk_t *VAR_0,
                                     svn_stringbuf_t **VAR_1,
                                     const char **VAR_2,
                                     svn_boolean_t *VAR_3,
                                     apr_pool_t *VAR_4,
                                     apr_pool_t *VAR_5)
{
  return FUNC_1(
    FUNC_0(VAR_0->apr_file,
                                       VAR_0->patch->reverse ?
                                         &VAR_0->modified_text_range :
                                         &VAR_0->original_text_range,
                                       VAR_1, VAR_2, VAR_3,
                                       VAR_0->patch->reverse ? '-' : '+',
                                       VAR_0->patch->reverse
                                          ? VAR_0->modified_no_final_eol
                                          : VAR_0->original_no_final_eol,
                                       VAR_4, VAR_5));
}
