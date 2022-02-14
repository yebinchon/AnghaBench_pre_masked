
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_23__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_35__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_mergeinfo_catalog_t ;
struct TYPE_37__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_38__ {scalar_t__ url; scalar_t__ repos_root_url; scalar_t__ rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
struct TYPE_36__ {scalar_t__ url; scalar_t__ repos_root_url; } ;
struct TYPE_39__ {TYPE_23__ loc; int abspath; } ;
typedef TYPE_4__ merge_target_t ;
struct TYPE_40__ {int ancestral; TYPE_3__ const* loc2; TYPE_3__* loc1; } ;
typedef TYPE_5__ merge_source_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_3__**,int *,int *,TYPE_4__ const*,int *,TYPE_3__ const*,int *,int *,int *,int *,int *) ;
 TYPE_2__* FUNC_6 (TYPE_3__ const*,TYPE_23__*,int ,int ,int ,int *,int *,int *) ;
 TYPE_2__* FUNC_7 (int **,int ,int ,int *,int *,int *) ;
 TYPE_5__* FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_11 (TYPE_3__**,TYPE_3__ const*,TYPE_3__*,int *,int *,int *,int *) ;
 TYPE_3__* FUNC_12 (TYPE_3__*,int *) ;
 int VAR_3 ;
 TYPE_2__* FUNC_13 (int ,int *,int ,...) ;
 TYPE_2__* FUNC_14 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_15 (TYPE_1__**,int ,char*,int ,int *) ;
 TYPE_2__* FUNC_16 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(merge_source_t **VAR_4,
                       svn_client__pathrev_t **VAR_5,
                       svn_ra_session_t *VAR_6,
                       const svn_client__pathrev_t *VAR_7,
                       svn_ra_session_t *VAR_8,
                       const merge_target_t *VAR_9,
                       svn_client_ctx_t *VAR_10,
                       apr_pool_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  svn_client__pathrev_t *VAR_13;
  svn_client__pathrev_t *VAR_14;
  merge_source_t VAR_15;
  svn_mergeinfo_catalog_t VAR_16;
  svn_mergeinfo_catalog_t VAR_17;
  svn_error_t *VAR_18;
  apr_hash_t *VAR_19;

  FUNC_4(FUNC_9(VAR_6, VAR_7->url, VAR_12));
  FUNC_4(FUNC_9(VAR_8, VAR_9->loc.url, VAR_12));
  if (FUNC_10(VAR_7->url, VAR_7->repos_root_url) == 0
      || FUNC_10(VAR_9->loc.url, VAR_9->loc.repos_root_url) == 0)
    return FUNC_13(VAR_1, ((void*)0),
                             FUNC_1("Neither the reintegrate source nor target "
                               "can be the root of the repository"));


  VAR_18 = FUNC_7(&VAR_19,
                                          VAR_9->abspath, VAR_3,
                                          VAR_10, VAR_12, VAR_12);


  if (VAR_18 && VAR_18->apr_err == VAR_0)
    VAR_18 = FUNC_14(VAR_18, FUNC_1("Reintegrate merge not possible"));
  FUNC_0(VAR_18);

  FUNC_0(FUNC_5(&VAR_14,
                                   &VAR_17,
                                   &VAR_16,
                                   VAR_9,
                                   VAR_19,
                                   VAR_7,
                                   VAR_6,
                                   VAR_8,
                                   VAR_10,
                                   VAR_12, VAR_12));



  if (! VAR_14)
    {
      if (VAR_4)
        *VAR_4 = ((void*)0);
      if (VAR_5)
        *VAR_5 = ((void*)0);
      return VAR_2;
    }

  VAR_15.loc1 = VAR_14;
  VAR_15.loc2 = VAR_7;




  if (FUNC_10(VAR_15.loc1->url, VAR_9->loc.url))
    FUNC_0(FUNC_16(VAR_8, VAR_15.loc1->url, VAR_12));

  FUNC_0(FUNC_11(
            &VAR_13, VAR_15.loc2, VAR_15.loc1, VAR_8,
            VAR_10, VAR_12, VAR_12));

  if (! VAR_13)
    return FUNC_13(VAR_1, ((void*)0),
                             FUNC_1("'%s@%ld' must be ancestrally related to "
                               "'%s@%ld'"),
                             VAR_15.loc1->url, VAR_15.loc1->rev,
                             VAR_15.loc2->url, VAR_15.loc2->rev);



  VAR_15.ancestral = (VAR_14->rev == VAR_13->rev);

  if (VAR_15.loc1->rev > VAR_13->rev)
    {



      svn_mergeinfo_catalog_t VAR_20 = FUNC_3(VAR_12);

      FUNC_0(FUNC_6(VAR_7, &VAR_9->loc,
                                   VAR_16,
                                   VAR_17,
                                   VAR_20,
                                   VAR_8, VAR_12,
                                   VAR_12));

      if (FUNC_2(VAR_20))
        {
          svn_string_t *VAR_21;

          FUNC_0(FUNC_15(
            &VAR_21,
            VAR_20,
            "  ", FUNC_1("    Missing ranges: "), VAR_12));
          return FUNC_13(VAR_1,
                                   ((void*)0),
                                   FUNC_1("Reintegrate can only be used if "
                                     "revisions %ld through %ld were "
                                     "previously merged from %s to the "
                                     "reintegrate source, but this is "
                                     "not the case:\n%s"),
                                   VAR_13->rev + 1, VAR_15.loc2->rev,
                                   VAR_9->loc.url,
                                   VAR_21->data);
        }
    }



  if (VAR_4)
    *VAR_4 = FUNC_8(&VAR_15, VAR_11);

  if (VAR_5)
    *VAR_5 = FUNC_12(VAR_13, VAR_11);
  return VAR_2;
}
