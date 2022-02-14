
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int (* svn_branch__compat_fetch_func_t ) (int *,int **,int *,int *,void*,char const*,int ,int *,int *) ;
struct TYPE_3__ {scalar_t__ action; char* copyfrom_path; int changing_rev; int copyfrom_rev; } ;
typedef TYPE_1__ change_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*,int *) ;
 TYPE_1__* FUNC_3 (int *,char const*) ;
 char* FUNC_4 (char*,char const*,int *) ;
 char* FUNC_5 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_hash_t **VAR_3,
                 apr_hash_t *VAR_4,
                 const char *VAR_5,
                 svn_branch__compat_fetch_func_t VAR_6,
                 void *VAR_7,
                 apr_pool_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  const change_node_t *VAR_10 = FUNC_3(VAR_4, VAR_5);
  const char *VAR_11 = ((void*)0);
  svn_revnum_t VAR_12;

  if (VAR_10->action == VAR_1)
    {
      *VAR_3 = ((void*)0);
    }

  else if (VAR_10->action == VAR_0 && ! VAR_10->copyfrom_path)
    {
      *VAR_3 = FUNC_1(VAR_8);
    }
  else if (VAR_10->copyfrom_path)
    {
      VAR_11 = VAR_10->copyfrom_path;
      VAR_12 = VAR_10->copyfrom_rev;
    }
  else
    {



      const char *VAR_13
        = FUNC_2(VAR_4, VAR_5, VAR_9);

      if (VAR_13)
        {
          const change_node_t *VAR_14
            = FUNC_3(VAR_4, VAR_13);
          const char *VAR_15
            = FUNC_5(VAR_13, VAR_5);

          VAR_11 = FUNC_4(VAR_14->copyfrom_path,
                                         VAR_15, VAR_9);
          VAR_12 = VAR_14->copyfrom_rev;
        }
      else
        {

          VAR_11 = VAR_5;
          VAR_12 = VAR_10->changing_rev;
        }
    }

  if (VAR_11)
    {
      FUNC_0(VAR_6(((void*)0), VAR_3, ((void*)0), ((void*)0),
                         VAR_7, VAR_11, VAR_12,
                         VAR_8, VAR_9));
    }

  return VAR_2;
}
