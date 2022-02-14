
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wc_id; int sdb; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;
struct svn_wc__db_base_info_t {scalar_t__ kind; scalar_t__ status; scalar_t__ revnum; char* repos_relpath; scalar_t__ update_root; } ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 struct svn_wc__db_base_info_t* FUNC_5 (int *) ;
 int * FUNC_6 (int **,TYPE_1__*,char const*,int ,int *,int *) ;
 int * FUNC_7 (TYPE_1__*,char const*,int *,scalar_t__,int,char const*,int ,int *) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char const* FUNC_9 (int ,char const*,int *) ;
 int * FUNC_10 (int *,char const*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int * FUNC_15 (int *,char*,int ,char const*) ;
 int * FUNC_16 (int **,int ,int ) ;
 int * FUNC_17 (int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_18(svn_wc__db_wcroot_t *VAR_12,
                   const char *VAR_13,
                   svn_wc__db_status_t VAR_14,
                   svn_node_kind_t VAR_15,
                   svn_revnum_t VAR_16,
                   const char *VAR_17,
                   apr_int64_t VAR_18,
                   const char *VAR_19,
                   svn_revnum_t VAR_20,
                   svn_depth_t VAR_21,
                   apr_hash_t *VAR_22,
                   apr_hash_t *VAR_23,
                   svn_boolean_t VAR_24,
                   svn_boolean_t VAR_25,
                   svn_wc__db_t *VAR_26,
                   apr_pool_t *VAR_27)
{
  apr_pool_t *VAR_28;
  apr_hash_t *VAR_29;
  apr_hash_index_t *VAR_30;
  svn_boolean_t VAR_31 = VAR_0;
  svn_depth_t VAR_32 = VAR_21;
  apr_array_header_t *VAR_33 = ((void*)0);

  if (VAR_19 != ((void*)0)
      && FUNC_8(VAR_17, VAR_19))
    VAR_31 = VAR_3;

  if (VAR_23)
    VAR_33 = FUNC_10(VAR_23,
                           FUNC_9(VAR_12->abspath, VAR_13,
                                           VAR_27));

  if (VAR_33
      || VAR_31
      || (FUNC_1(VAR_20) && VAR_20 != VAR_16))
    {
      FUNC_0(FUNC_7(VAR_12, VAR_13,
                                                 VAR_33, VAR_20,
                                                 VAR_31,
                                                 VAR_19,
                                                 VAR_18,
                                                 VAR_27));
    }


  if (VAR_21 <= VAR_4
      || VAR_15 != VAR_7
      || VAR_14 == VAR_11
      || VAR_14 == VAR_9
      || VAR_14 == VAR_10)
    return VAR_2;



  VAR_32 = VAR_21;

  if (VAR_21 == VAR_6 || VAR_21 == VAR_5)
    VAR_32 = VAR_4;

  VAR_28 = FUNC_12(VAR_27);

  FUNC_0(FUNC_6(&VAR_29, VAR_12, VAR_13, 0,
                                 VAR_27, VAR_28));
  for (VAR_30 = FUNC_2(VAR_27, VAR_29); VAR_30; VAR_30 = FUNC_3(VAR_30))
    {
      const char *VAR_34 = FUNC_4(VAR_30);
      const struct svn_wc__db_base_info_t *VAR_35;
      const char *VAR_36;
      const char *VAR_37 = ((void*)0);

      FUNC_11(VAR_28);

      VAR_35 = FUNC_5(VAR_30);

      if (VAR_35->update_root && VAR_35->kind == VAR_8)
        continue;

      if (VAR_21 < VAR_6 && VAR_35->kind == VAR_7)
          continue;

      VAR_36 = FUNC_14(VAR_13, VAR_34,
                                             VAR_28);


      if (FUNC_10(VAR_22, VAR_36))
          continue;
      if (VAR_35->status == VAR_10
          || (VAR_35->status == VAR_11 &&
              VAR_35->revnum != VAR_20))
        {
          svn_sqlite__stmt_t *VAR_38;
          FUNC_0(FUNC_16(&VAR_38, VAR_12->sdb,
                                    VAR_1));
          FUNC_0(FUNC_15(VAR_38, "is", VAR_12->wc_id, VAR_36));
          FUNC_0(FUNC_17(VAR_38));
          continue;
        }


      if (VAR_19)
        VAR_37 = FUNC_14(VAR_19,
                                               VAR_34, VAR_28);

      FUNC_0(FUNC_18(VAR_12, VAR_36,
                                 VAR_35->status,
                                 VAR_35->kind,
                                 VAR_35->revnum,
                                 VAR_35->repos_relpath,
                                 VAR_18,
                                 VAR_37, VAR_20,
                                 VAR_32,
                                 VAR_22, VAR_23,
                                 VAR_0 ,
                                 (VAR_21 < VAR_6), VAR_26,
                                 VAR_28));
    }


  FUNC_13(VAR_28);

  return VAR_2;
}
