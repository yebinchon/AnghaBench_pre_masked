
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc_operation_t ;
typedef int svn_wc__db_t ;
struct TYPE_10__ {TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int next; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (TYPE_2__**,TYPE_2__*,int ) ;
 int FUNC_2 (char const**,char const**,char const*,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,char const**,char const*,char const*,int ,int ,int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,int *,int *,scalar_t__*,int *,int *,char const*,TYPE_2__*,int *,int *) ;
 int FUNC_7 (char const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_8 (TYPE_2__**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(svn_skel_t **VAR_6,
                                svn_wc__db_t *VAR_7,
                                const char *VAR_8,
                                svn_skel_t *VAR_9,
                                apr_pool_t *VAR_10,
                                apr_pool_t *VAR_11)
{
  svn_boolean_t VAR_12;
  svn_wc_operation_t VAR_13;
  *VAR_6 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_13, ((void*)0),
                                     ((void*)0), &VAR_12, ((void*)0),
                                     VAR_7, VAR_8,
                                     VAR_9,
                                     VAR_11, VAR_11));

  if (VAR_12)
    {
      const char *VAR_14 = ((void*)0);
      svn_node_kind_t VAR_15;
      const char *VAR_16;
      const char *VAR_17;
      const char *VAR_18;






      FUNC_0(FUNC_3(VAR_8, &VAR_15, VAR_11));

      if (VAR_15 == VAR_5)
        {
          VAR_16 = VAR_8;
          VAR_17 = VAR_3;
        }
      else
        FUNC_2(&VAR_16, &VAR_17, VAR_8,
                         VAR_11);

      FUNC_0(FUNC_4(((void*)0), &VAR_14,
                                         VAR_16,
                                         VAR_17,
                                         VAR_2,
                                         VAR_4,
                                         VAR_11, VAR_11));

      FUNC_0(FUNC_7(&VAR_18, VAR_7, VAR_8,
                                    VAR_14, VAR_10, VAR_10));


      {
        svn_skel_t *VAR_19;
        FUNC_0(FUNC_1(&VAR_19, VAR_9,
                                       VAR_1));

        FUNC_5(VAR_18, VAR_19->children->next,
                            VAR_10);
      }
      FUNC_0(FUNC_8(VAR_6,
                                            VAR_7, VAR_8,
                                            VAR_11, VAR_11));
    }

  return VAR_0;
}
