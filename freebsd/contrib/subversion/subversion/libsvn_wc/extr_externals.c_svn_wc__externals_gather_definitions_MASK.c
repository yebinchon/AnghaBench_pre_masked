
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,char const*,int ) ;
 TYPE_3__* FUNC_7 (int **,int **,int ,char const*,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 TYPE_3__* FUNC_9 (TYPE_2__ const**,TYPE_1__*,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_10(apr_hash_t **VAR_5,
                                     apr_hash_t **VAR_6,
                                     svn_wc_context_t *VAR_7,
                                     const char *VAR_8,
                                     svn_depth_t VAR_9,
                                     apr_pool_t *VAR_10,
                                     apr_pool_t *VAR_11)
{
  if (VAR_9 == VAR_3
      || VAR_9 == VAR_4)
    {
      return FUNC_5(
        FUNC_7(VAR_5, VAR_6,
                                                VAR_7->db, VAR_8,
                                                VAR_10, VAR_11));
    }
  else
    {
      const svn_string_t *VAR_12;
      svn_error_t *VAR_13;
      *VAR_5 = FUNC_1(VAR_10);

      VAR_8 = FUNC_2(VAR_10, VAR_8);

      VAR_13 = FUNC_9(&VAR_12, VAR_7, VAR_8,
                             VAR_2, VAR_10, VAR_11);

      if (VAR_13)
        {
          if (VAR_13->apr_err != VAR_0)
            return FUNC_5(VAR_13);

          FUNC_4(VAR_13);
          VAR_12 = ((void*)0);
        }

      if (VAR_12)
        FUNC_6(*VAR_5, VAR_8, VAR_12->data);

      if (VAR_12 && VAR_6)
        {
          svn_depth_t VAR_14;
          *VAR_6 = FUNC_1(VAR_10);

          FUNC_0(FUNC_8(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), &VAR_14, ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       VAR_7->db, VAR_8,
                                       VAR_11, VAR_11));

          FUNC_6(*VAR_6, VAR_8, FUNC_3(VAR_14));
        }

      return VAR_1;
    }
}
