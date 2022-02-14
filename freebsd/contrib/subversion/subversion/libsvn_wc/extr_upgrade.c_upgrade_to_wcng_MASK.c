
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_wc_upgrade_get_repos_info_t ;
struct TYPE_21__ {int uuid; int repos; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct upgrade_data_t {int sdb; int root_abspath; int wc_id; int repos_id; } ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (char const*,int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,char const*,int ,void*,int *,int *,int *) ;
 TYPE_2__* FUNC_6 (char const*,int ,int ,int,int ,int *) ;
 TYPE_2__* FUNC_7 (int **,char const*,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_8 (int **,char const*,int *,int *) ;
 TYPE_2__* FUNC_9 (int **,char const*,int *,int *) ;
 char* FUNC_10 (char const*,int ,int *) ;
 char* FUNC_11 (char const*,char const*) ;
 TYPE_2__* FUNC_12 (int ,int *,int ) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,int ) ;
 TYPE_2__* FUNC_16 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_7 ;
 char* FUNC_17 (char const*,int ,int *) ;
 TYPE_2__* FUNC_18 (int **,char const*,int *,int *) ;
 TYPE_2__* FUNC_19 (void**,void*,int *,int ,int ,int ,char const*,int ,int *,int *,int *,int *) ;
 TYPE_2__* FUNC_20 (int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(void **VAR_8,
                void *VAR_9,
                svn_wc__db_t *VAR_10,
                const char *VAR_11,
                int VAR_12,
                apr_int64_t VAR_13,
                svn_wc_upgrade_get_repos_info_t VAR_14,
                void *VAR_15,
                apr_hash_t *VAR_16,
                const struct upgrade_data_t *VAR_17,
                apr_pool_t *VAR_18,
                apr_pool_t *VAR_19)
{
  const char *VAR_20 = FUNC_17(VAR_11, VAR_0,
                                               VAR_19);
  svn_node_kind_t VAR_21;
  apr_hash_t *VAR_22;
  svn_wc_entry_t *VAR_23;
  const char *VAR_24, *VAR_25;
  apr_hash_t *VAR_26;
  svn_error_t *VAR_27;




  FUNC_0(FUNC_16(VAR_20, &VAR_21,
                            VAR_19));
  if (VAR_21 == VAR_7)
    return FUNC_12(VAR_2, ((void*)0),
                            FUNC_1("Cannot upgrade with existing logs; run a "
                              "cleanup operation on this working copy using "
                              "a client version which is compatible with this "
                              "working copy's format (such as the version "
                              "you are upgrading from), then retry the "
                              "upgrade with the current version"));




  FUNC_0(FUNC_4(VAR_11, VAR_19));
  FUNC_0(FUNC_18(&VAR_22, VAR_11,
                                   VAR_19, VAR_19));

  VAR_23 = FUNC_14(VAR_22, VAR_4);
  FUNC_0(FUNC_5(VAR_23, VAR_11,
                            VAR_14, VAR_15,
                            VAR_16,
                            VAR_19, VAR_19));


  if (!FUNC_14(VAR_16, VAR_23->repos))
    {
      apr_pool_t *VAR_28 = FUNC_2(VAR_16);

      FUNC_15(VAR_16,
                    FUNC_3(VAR_28, VAR_23->repos),
                    FUNC_3(VAR_28, VAR_23->uuid));
    }

  VAR_24 = FUNC_10(VAR_11,
                                                       VAR_17->root_abspath,
                                                       VAR_19);
  VAR_25 = FUNC_11(VAR_24, VAR_11);


  FUNC_0(FUNC_7(&VAR_26, VAR_11, VAR_17->root_abspath,
                             VAR_17->sdb, VAR_19, VAR_19));


  VAR_27 = FUNC_19(VAR_8, VAR_9, VAR_10, VAR_17->sdb,
                                       VAR_17->repos_id, VAR_17->wc_id,
                                       VAR_11, VAR_17->root_abspath,
                                       VAR_22, VAR_26,
                                       VAR_18, VAR_19);
  if (VAR_27 && VAR_27->apr_err == VAR_1)
    return FUNC_13(VAR_27,
                                FUNC_1("This working copy is corrupt and "
                                  "cannot be upgraded. Please check out "
                                  "a new working copy."));
  else
    FUNC_0(VAR_27);



  if (VAR_12 != VAR_5)
    {
      apr_hash_t *VAR_29;

      if (VAR_12 <= VAR_6)
        FUNC_0(FUNC_8(&VAR_29, VAR_11,
                                  VAR_19, VAR_19));
      else
        FUNC_0(FUNC_9(&VAR_29, VAR_11,
                             VAR_19, VAR_19));

      FUNC_0(FUNC_20(VAR_17->sdb, VAR_25, VAR_13,
                                      VAR_29, VAR_19));
    }






  FUNC_0(FUNC_6(VAR_11, VAR_17->root_abspath, VAR_17->sdb, VAR_12,
                        VAR_13, VAR_19));

  return VAR_3;
}
