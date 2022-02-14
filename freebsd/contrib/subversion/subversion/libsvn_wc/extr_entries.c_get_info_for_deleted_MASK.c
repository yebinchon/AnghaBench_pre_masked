
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int revision; int deleted; int uuid; int repos; int has_props; int depth; int cmt_author; int cmt_date; int cmt_rev; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (scalar_t__*,int *,int *,char const**,int *,int *,int *,int *,int *,int const**,int *,int **,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_9 (int *,int *,char const**,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_10 (int *,int *,char const**,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc_entry_t *VAR_3,
                     svn_node_kind_t *VAR_4,
                     const char **VAR_5,
                     const svn_checksum_t **VAR_6,
                     svn_wc__db_lock_t **VAR_7,
                     svn_wc__db_t *VAR_8,
                     const char *VAR_9,
                     svn_wc__db_wcroot_t *VAR_10,
                     const char *VAR_11,
                     const svn_wc_entry_t *VAR_12,
                     svn_boolean_t VAR_13,
                     svn_boolean_t VAR_14,
                     apr_pool_t *VAR_15,
                     apr_pool_t *VAR_16)
{
  if (VAR_13 && !VAR_14)
    {
      apr_int64_t VAR_17;

      FUNC_0(FUNC_6(
                                       ((void*)0), VAR_4,
                                       &VAR_3->revision,
                                       VAR_5,
                                       &VAR_17,
                                       &VAR_3->cmt_rev,
                                       &VAR_3->cmt_date,
                                       &VAR_3->cmt_author,
                                       &VAR_3->depth,
                                       VAR_6,
                                       ((void*)0),
                                       VAR_7,
                                       &VAR_3->has_props, ((void*)0),
                                       ((void*)0),
                                       VAR_10, VAR_11,
                                       VAR_15,
                                       VAR_16));
      FUNC_0(FUNC_7(&VAR_3->repos, &VAR_3->uuid,
                                          VAR_10, VAR_17, VAR_15));
    }
  else
    {
      const char *VAR_18;
      const char *VAR_19;
      const char *VAR_20;
      apr_int64_t VAR_21;





      FUNC_0(FUNC_8(((void*)0), VAR_4,
                                            &VAR_3->cmt_rev,
                                            &VAR_3->cmt_date,
                                            &VAR_3->cmt_author,
                                            &VAR_3->depth,
                                            VAR_6,
                                            ((void*)0),
                                            &VAR_3->has_props, ((void*)0),
                                            VAR_8,
                                            VAR_9,
                                            VAR_15,
                                            VAR_16));


     FUNC_0(FUNC_10(
                                      ((void*)0),
                                      ((void*)0),
                                      &VAR_18, ((void*)0),
                                      VAR_10, VAR_11,
                                      VAR_16, VAR_16));

      FUNC_1(VAR_18 != ((void*)0));
      VAR_20 = FUNC_3(VAR_18, VAR_16);



      FUNC_0(FUNC_9(
                                       ((void*)0), ((void*)0),
                                       &VAR_19,
                                       &VAR_21,
                                       ((void*)0), ((void*)0), ((void*)0),
                                       VAR_10, VAR_20,
                                       VAR_15, VAR_16));
      FUNC_0(FUNC_7(&VAR_3->repos, &VAR_3->uuid,
                                          VAR_10, VAR_21, VAR_15));


      *VAR_5 = FUNC_4(VAR_19,
                                        FUNC_5(
                                                            VAR_20,
                                                            VAR_11),
                                        VAR_15);




      if (VAR_13)
        {
          svn_wc__db_status_t VAR_22;
          FUNC_0(FUNC_6(
                                           &VAR_22, ((void*)0), &VAR_3->revision,
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), VAR_7, ((void*)0), ((void*)0),
                                           ((void*)0),
                                           VAR_10, VAR_11,
                                           VAR_15, VAR_16));

          if (VAR_22 == VAR_2)
            VAR_3->deleted = VAR_1;
        }
    }


  if (!FUNC_2(VAR_3->revision) && VAR_12 != ((void*)0))
    {


      VAR_3->revision = VAR_12->revision;
    }

  return VAR_0;
}
