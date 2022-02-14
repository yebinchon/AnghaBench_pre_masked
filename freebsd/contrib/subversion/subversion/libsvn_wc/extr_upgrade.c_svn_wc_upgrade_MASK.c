
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc_upgrade_get_repos_info_t ;
typedef int svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,int *,int *) ;
struct TYPE_11__ {int uuid; int repos; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct upgrade_data_t {char const* root_abspath; int sdb; int wc_id; int repos_id; int * member_0; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,void*,int *,int *,int *) ;
 int FUNC_6 (char const*,int *) ;
 char const* FUNC_7 (char*,char*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (char const*,char const*,int ,int *) ;
 int FUNC_14 (char const*,int ,int *,int *,int *) ;
 char* FUNC_15 (char const*,char*,int *) ;
 TYPE_2__* FUNC_16 (int*,scalar_t__*,int *,char const*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int *,int ,int ,int *,int *) ;
 int FUNC_19 (int *,int *,int *,int *,char const*,int ,int ,int *) ;
 int FUNC_20 (int *,char const*,int ,int ,int *) ;
 int FUNC_21 (int *,char const*,int *) ;
 int FUNC_22 (int *,char const*,int *,int *) ;
 int FUNC_23 (char const*,int *) ;
 int FUNC_24 (int **,char const*,int *,int *) ;
 int FUNC_25 (int **,int *,char const*,char const*,char const*,int *,int *) ;
 int FUNC_26 (int **,int *) ;
 int * FUNC_27 (int *,int *,int *) ;
 int FUNC_28 (int *,char const*,int ,void*,int *) ;
 int * FUNC_29 (char const*,int ,int *) ;
 int VAR_8 ;
 int FUNC_30 (int *,int *,char const*,int ,void*,int *,struct upgrade_data_t*,int ,void*,int (*) (void*,int *,int *),void*,int *,int *) ;

svn_error_t *
FUNC_31(svn_wc_context_t *VAR_9,
               const char *VAR_10,
               svn_wc_upgrade_get_repos_info_t VAR_11,
               void *VAR_12,
               svn_cancel_func_t VAR_13,
               void *VAR_14,
               svn_wc_notify_func2_t VAR_15,
               void *VAR_16,
               apr_pool_t *VAR_17)
{
  svn_wc__db_t *VAR_18;
  struct upgrade_data_t VAR_19 = { ((void*)0) };
  svn_skel_t *VAR_20, *VAR_21 = ((void*)0);
  const char *VAR_22, *VAR_23, *VAR_24, *VAR_25;
  apr_hash_t *VAR_26 = FUNC_3(VAR_17);
  svn_wc_entry_t *VAR_27;
  apr_hash_t *VAR_28;
  const char *VAR_29;
  svn_error_t *VAR_30;
  int VAR_31;
  svn_boolean_t VAR_32;


  FUNC_0(FUNC_18(&VAR_18, ((void*)0) , VAR_7, VAR_0,
                          VAR_17, VAR_17));


  VAR_30 = FUNC_16(&VAR_31, &VAR_32,
                               VAR_18, VAR_10,
                               VAR_17);
  if (VAR_30)
    {
      if (VAR_30->apr_err != VAR_3)
        {
          return FUNC_10(
                    FUNC_9(
                            VAR_30,
                            FUNC_17(VAR_18)));
        }

      FUNC_8(VAR_30);

    }
  else
    {

      FUNC_0(FUNC_17(VAR_18));

      FUNC_1(VAR_31 == VAR_6);

      if (VAR_32 && VAR_15)
        {
          svn_wc_notify_t *VAR_33;

          VAR_33 = FUNC_29(VAR_10,
                                        VAR_8,
                                        VAR_17);

          VAR_15(VAR_16, VAR_33, VAR_17);
        }

      return VAR_4;
    }

  FUNC_0(FUNC_6(VAR_10, VAR_17));
  FUNC_0(FUNC_24(&VAR_28, VAR_10,
                                   VAR_17, VAR_17));

  VAR_27 = FUNC_11(VAR_28, VAR_5);
  FUNC_0(FUNC_5(VAR_27, VAR_10, VAR_11,
                            VAR_12, VAR_26,
                            VAR_17, VAR_17));


  if (!FUNC_11(VAR_26, VAR_27->repos))
    FUNC_12(VAR_26,
                  FUNC_4(VAR_17, VAR_27->repos),
                  FUNC_4(VAR_17, VAR_27->uuid));


  VAR_19.root_abspath = FUNC_7(FUNC_15(VAR_10, "tmp",
                                                        VAR_17),
                                       "wcng", VAR_17);
  VAR_29 = FUNC_15(VAR_19.root_abspath, "",
                                       VAR_17);
  FUNC_0(FUNC_14(VAR_29, VAR_7, ((void*)0), ((void*)0),
                             VAR_17));
  FUNC_0(FUNC_23(VAR_29, VAR_17));


  FUNC_0(FUNC_19(&VAR_19.sdb,
                                   &VAR_19.repos_id, &VAR_19.wc_id,
                                   VAR_18, VAR_19.root_abspath,
                                   VAR_27->repos, VAR_27->uuid,
                                   VAR_17));







  FUNC_0(FUNC_20(VAR_18, VAR_19.root_abspath, 0, VAR_0,
                                   VAR_17));

  FUNC_2(
    FUNC_30(((void*)0), VAR_18, VAR_10,
                         VAR_11, VAR_12,
                         VAR_26, &VAR_19,
                         VAR_13, VAR_14,
                         VAR_15, VAR_16,
                         VAR_17, VAR_17),
    VAR_19.sdb);


  VAR_22 = FUNC_15(VAR_19.root_abspath, VAR_1,
                                    VAR_17);
  VAR_23 = FUNC_15(VAR_10, VAR_1,
                                  VAR_17);
  FUNC_0(FUNC_23(VAR_22, VAR_17));
  FUNC_0(FUNC_25(&VAR_20, VAR_18, VAR_10,
                                     VAR_22, VAR_23,
                                     VAR_17, VAR_17));
  VAR_21 = FUNC_27(VAR_21, VAR_20, VAR_17);


  FUNC_0(FUNC_26(&VAR_20, VAR_17));
  VAR_21 = FUNC_27(VAR_21, VAR_20, VAR_17);
  FUNC_0(FUNC_22(VAR_18, VAR_19.root_abspath, VAR_21, VAR_17));

  FUNC_0(FUNC_21(VAR_18, VAR_19.root_abspath, VAR_17));
  FUNC_0(FUNC_17(VAR_18));


  VAR_24 = FUNC_15(VAR_19.root_abspath, VAR_2, VAR_17);
  VAR_25 = FUNC_15(VAR_10, VAR_2, VAR_17);
  FUNC_0(FUNC_13(VAR_24, VAR_25, VAR_0, VAR_17));


  FUNC_0(FUNC_18(&VAR_18, ((void*)0) , VAR_0, VAR_0,
                          VAR_17, VAR_17));
  FUNC_0(FUNC_28(VAR_18, VAR_10, VAR_13, VAR_14,
                         VAR_17));
  FUNC_0(FUNC_17(VAR_18));


  FUNC_0(FUNC_14(VAR_19.root_abspath, VAR_0, ((void*)0), ((void*)0),
                             VAR_17));

  return VAR_4;
}
