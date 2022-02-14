
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ next_patch_offset; int apr_file; } ;
typedef TYPE_1__ svn_patch_file_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*,int,int ,int *) ;

svn_error_t *
FUNC_3(svn_patch_file_t **VAR_4,
                         const char *VAR_5,
                         apr_pool_t *VAR_6)
{
  svn_patch_file_t *VAR_7;

  VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));
  FUNC_0(FUNC_2(&VAR_7->apr_file, VAR_5,
                           VAR_2 | VAR_0, VAR_1,
                           VAR_6));
  VAR_7->next_patch_offset = 0;
  *VAR_4 = VAR_7;

  return VAR_3;
}
