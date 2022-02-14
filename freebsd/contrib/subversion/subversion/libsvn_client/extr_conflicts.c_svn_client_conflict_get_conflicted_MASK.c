
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int * legacy_tree_conflict; scalar_t__ prop_conflicts; int * legacy_text_conflict; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int **,scalar_t__,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_1,
                                   apr_array_header_t **VAR_2,
                                   svn_boolean_t *VAR_3,
                                   svn_client_conflict_t *VAR_4,
                                   apr_pool_t *VAR_5,
                                   apr_pool_t *VAR_6)
{
  if (VAR_1)
    *VAR_1 = (VAR_4->legacy_text_conflict != ((void*)0));

  if (VAR_2)
    {
      if (VAR_4->prop_conflicts)
        FUNC_0(FUNC_2(VAR_2, VAR_4->prop_conflicts,
                              VAR_5));
      else
        *VAR_2 = FUNC_1(VAR_5, 0,
                                           sizeof(const char*));
    }

  if (VAR_3)
    *VAR_3 = (VAR_4->legacy_tree_conflict != ((void*)0));

  return VAR_0;
}
