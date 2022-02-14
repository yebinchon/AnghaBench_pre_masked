
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef int * svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int **,int *,char const*,int ,int ,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_2 (int **,scalar_t__*,scalar_t__,int ,char const*,int *,int *,scalar_t__,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int **,char const*,int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int VAR_4 ;
 char* FUNC_7 (char const*,char const*,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,char const**,char const**,int *,int *,int *,int ,char const*,scalar_t__,int *,int *) ;
 int FUNC_11 (int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_12(
  svn_mergeinfo_catalog_t *VAR_5,
  svn_boolean_t *VAR_6,
  svn_boolean_t *VAR_7,
  svn_boolean_t VAR_8,
  svn_boolean_t VAR_9,
  svn_boolean_t VAR_10,
  svn_mergeinfo_inheritance_t VAR_11,
  svn_ra_session_t *VAR_12,
  const char *VAR_13,
  svn_client_ctx_t *VAR_14,
  apr_pool_t *VAR_15,
  apr_pool_t *VAR_16)
{
  const char *VAR_17;
  svn_revnum_t VAR_18;
  const char *VAR_19;
  const char *VAR_20;
  const char *VAR_21;
  svn_mergeinfo_catalog_t VAR_22 = ((void*)0);
  svn_mergeinfo_catalog_t VAR_23 = ((void*)0);

  FUNC_0(FUNC_4(&VAR_19, VAR_13,
                                  VAR_16));

  if (VAR_7)
    *VAR_7 = VAR_0;





  FUNC_0(FUNC_10(((void*)0), &VAR_18, &VAR_21,
                                  &VAR_20, ((void*)0), ((void*)0), ((void*)0),
                                  VAR_14->wc_ctx, VAR_19, VAR_0,
                                  VAR_16, VAR_16));

  if (VAR_21)
    VAR_17 = FUNC_7(VAR_20, VAR_21, VAR_16);
  else
    VAR_17 = ((void*)0);

  if (!VAR_9)
    {
      svn_boolean_t VAR_24;
      FUNC_0(FUNC_2(&VAR_22,
                                                   &VAR_24,
                                                   VAR_8,
                                                   VAR_11,
                                                   VAR_19,
                                                   ((void*)0), ((void*)0),
                                                   VAR_10,
                                                   VAR_14,
                                                   VAR_15,
                                                   VAR_16));
      if (VAR_6)
        *VAR_6 = VAR_24;




      if (! (VAR_24
             || (VAR_11 == VAR_4)
             || (VAR_21
                 && VAR_22
                 && FUNC_5(VAR_22, VAR_21))))
        {
          VAR_9 = VAR_3;


          VAR_8 = VAR_0;
        }
    }

  if (VAR_9)
    {

      if (VAR_17 != ((void*)0))
        {
          apr_hash_t *VAR_25;




          FUNC_0(FUNC_11(&VAR_25,
                                            VAR_14->wc_ctx, VAR_19,
                                            VAR_15, VAR_16));
          if (!FUNC_5(VAR_25, VAR_2))
            {
              apr_pool_t *VAR_26 = ((void*)0);

              if (! VAR_12)
                {
                  VAR_26 = FUNC_8(VAR_16);
                  FUNC_0(FUNC_3(&VAR_12, VAR_17, ((void*)0),
                                                      VAR_14,
                                                      VAR_26, VAR_26));
                }

              FUNC_0(FUNC_1(
                        &VAR_23, VAR_12,
                        VAR_17, VAR_18, VAR_11,
                        VAR_3, VAR_8,
                        VAR_15, VAR_16));

              if (VAR_23
                  && FUNC_5(VAR_23, VAR_21))
                {
                  if (VAR_6)
                    *VAR_6 = VAR_3;
                  if (VAR_7)
                    *VAR_7 = VAR_3;
                }




              if (VAR_26)
                {
                  FUNC_9(VAR_26);
                }
            }
        }
    }


  if (VAR_22)
    {
      *VAR_5 = VAR_22;
      if (VAR_23)
        FUNC_0(FUNC_6(*VAR_5,
                                            VAR_23,
                                            VAR_15, VAR_16));
    }
  else if (VAR_23)
    {
      *VAR_5 = VAR_23;
    }
  else
    {
      *VAR_5 = ((void*)0);
    }

  return VAR_1;
}
