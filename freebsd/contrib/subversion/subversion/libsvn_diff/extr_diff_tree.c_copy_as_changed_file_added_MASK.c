
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {struct copy_as_changed_baton_t* baton; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_boolean_t ;
struct copy_as_changed_baton_t {TYPE_2__* processor; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_6__ {int (* file_added ) (char const*,int const*,int const*,char const*,char const*,int *,int *,void*,TYPE_2__*,int *) ;int (* file_changed ) (char const*,int const*,int const*,char const*,char const*,int *,int *,int,int *,void*,TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char const*,int const*,int const*,char const*,char const*,int *,int *,int,int *,void*,TYPE_2__*,int *) ;
 int FUNC_2 (char const*,int const*,int const*,char const*,char const*,int *,int *,void*,TYPE_2__*,int *) ;
 int FUNC_3 (int *,char const*,char const*,int *) ;
 int FUNC_4 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_2,
                           const svn_diff_source_t *VAR_3,
                           const svn_diff_source_t *VAR_4,
                           const char *VAR_5,
                           const char *VAR_6,
                                     apr_hash_t *VAR_7,
                                     apr_hash_t *VAR_8,
                           void *VAR_9,
                           const svn_diff_tree_processor_t *VAR_10,
                           apr_pool_t *VAR_11)
{
  struct copy_as_changed_baton_t *VAR_12 = VAR_10->baton;

  if (VAR_3)
    {
      apr_array_header_t *VAR_13;
      svn_boolean_t VAR_14;
      FUNC_0(FUNC_4(&VAR_13, VAR_8, VAR_7,
                             VAR_11));



      if (*VAR_5 && *VAR_6)
        {
          FUNC_0(FUNC_3(&VAR_14, VAR_5,
                                               VAR_6, VAR_11));
        }
      else
        VAR_14 = VAR_0;

      FUNC_0(VAR_12->processor->file_changed(VAR_2,
                                          VAR_3,
                                          VAR_4,
                                          VAR_5,
                                          VAR_6,
                                          VAR_7,
                                          VAR_8,
                                          !VAR_14,
                                          VAR_13,
                                          VAR_9,
                                          VAR_12->processor,
                                          VAR_11));
    }
  else
    {
      FUNC_0(VAR_12->processor->file_added(VAR_2,
                                        VAR_3,
                                        VAR_4,
                                        VAR_5,
                                        VAR_6,
                                        VAR_7,
                                        VAR_8,
                                        VAR_9,
                                        VAR_12->processor,
                                        VAR_11));
    }
  return VAR_1;
}
