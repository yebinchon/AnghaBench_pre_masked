
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sdb; int wc_id; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {scalar_t__ repos_id; scalar_t__ status; scalar_t__ kind; scalar_t__ conflict; int work_items; scalar_t__ insert_base_deleted; scalar_t__ delete_working; scalar_t__ file_external; int children; int revision; int * repos_relpath; scalar_t__ new_actual_props; int * props; scalar_t__ update_actual_props; int * dav_cache; int iprops; int checksum; int * target; int changed_author; int changed_date; int changed_rev; int depth; scalar_t__ keep_recorded_info; int repos_uuid; int repos_root_url; } ;
typedef TYPE_2__ insert_base_baton_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_14__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,char const*,scalar_t__,int ,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int ,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int ,char const*,scalar_t__,int *,int ,int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_1__*,char const*,int *) ;
 int VAR_10 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_14 (int ,int ,int ,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_15 (TYPE_3__**,int *,int *,int *) ;
 char* FUNC_16 (char const*,int *) ;
 int FUNC_17 (int *,int,int ,int *) ;
 int FUNC_18 (int *,int,int) ;
 int FUNC_19 (int *,int,scalar_t__) ;
 int FUNC_20 (int *,int,int ,int *) ;
 int FUNC_21 (int *,int,int *,int *) ;
 int FUNC_22 (int *,char*,int ,char const*,...) ;
 scalar_t__ FUNC_23 (int *,int) ;
 int FUNC_24 (int **,int ,int ) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int*,int *) ;
 int FUNC_28 (int *) ;
 int * FUNC_29 (int ,int ) ;
 int FUNC_30 (TYPE_1__*,char const*,scalar_t__,int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static svn_error_t *
FUNC_31(const insert_base_baton_t *VAR_19,
                 svn_wc__db_wcroot_t *VAR_20,
                 const char *VAR_21,
                 apr_pool_t *VAR_22)
{
  apr_int64_t VAR_23 = VAR_19->repos_id;
  svn_sqlite__stmt_t *VAR_24;
  svn_filesize_t VAR_25 = VAR_6;
  apr_int64_t VAR_26;
  svn_boolean_t VAR_27;



  const char *VAR_28 =
    (*VAR_21 == '\0') ? ((void*)0)
    : FUNC_16(VAR_21, VAR_22);

  if (VAR_19->repos_id == VAR_0)
    FUNC_0(FUNC_6(&VAR_23, VAR_19->repos_root_url, VAR_19->repos_uuid,
                            VAR_20->sdb, VAR_22));

  FUNC_1(VAR_23 != VAR_0);
  FUNC_1(VAR_19->repos_relpath != ((void*)0));

  if (VAR_19->keep_recorded_info)
    {
      svn_boolean_t VAR_29;
      FUNC_0(FUNC_24(&VAR_24, VAR_20->sdb,
                                        VAR_4));
      FUNC_0(FUNC_22(VAR_24, "is", VAR_20->wc_id, VAR_21));
      FUNC_0(FUNC_27(&VAR_29, VAR_24));
      if (VAR_29)
        {

          VAR_25 = FUNC_9(VAR_24, 6);
          VAR_26 = FUNC_23(VAR_24, 12);
        }
      FUNC_0(FUNC_26(VAR_24));
    }

  VAR_27 = (VAR_19->status == VAR_16
             || VAR_19->status == VAR_15);

  FUNC_0(FUNC_24(&VAR_24, VAR_20->sdb, VAR_3));
  FUNC_0(FUNC_22(VAR_24, "isdsisr"
                            "tstr"
                            "isnnnnns",
                            VAR_20->wc_id,
                            VAR_21,
                            0,
                            VAR_28,
                            VAR_23,
                            VAR_19->repos_relpath,
                            VAR_19->revision,
                            VAR_10, VAR_19->status,
                            (VAR_19->kind == VAR_11 && VAR_27)
                              ? FUNC_29(VAR_8, VAR_19->depth)
                              : ((void*)0),
                            VAR_9, VAR_19->kind,
                            VAR_19->changed_rev,
                            VAR_19->changed_date,
                            VAR_19->changed_author,
                            (VAR_19->kind == VAR_13 && VAR_27) ?
                                VAR_19->target : ((void*)0)));
  if (VAR_19->kind == VAR_12 && VAR_27)
    {
      if (!VAR_19->checksum
          && VAR_19->status != VAR_17
          && VAR_19->status != VAR_14
          && VAR_19->status != VAR_18)
        return FUNC_14(VAR_5, FUNC_26(VAR_24),
                                 FUNC_2("The file '%s' has no checksum."),
                                 FUNC_11(VAR_20, VAR_21,
                                                        VAR_22));

      FUNC_0(FUNC_17(VAR_24, 14, VAR_19->checksum,
                                        VAR_22));

      if (VAR_25 != VAR_6)
        {
          FUNC_0(FUNC_19(VAR_24, 16, VAR_25));
          FUNC_0(FUNC_19(VAR_24, 17, VAR_26));
        }
    }


  FUNC_5(VAR_19->status == VAR_16
         || VAR_19->status == VAR_15
         || VAR_19->props == ((void*)0));
  if (VAR_27)
    {
      FUNC_0(FUNC_21(VAR_24, 15, VAR_19->props,
                                          VAR_22));

      FUNC_0(FUNC_20(VAR_24, 23, VAR_19->iprops,
                                      VAR_22));
    }

  if (VAR_19->dav_cache)
    FUNC_0(FUNC_21(VAR_24, 18, VAR_19->dav_cache,
                                        VAR_22));

  if (VAR_19->file_external)
    FUNC_0(FUNC_18(VAR_24, 20, 1));

  FUNC_0(FUNC_25(((void*)0), VAR_24));

  if (VAR_19->update_actual_props)
    {

      apr_hash_t *VAR_30 = (apr_hash_t *)VAR_19->props;
      apr_hash_t *VAR_31 = (apr_hash_t *)VAR_19->new_actual_props;

      if (VAR_30 != ((void*)0)
          && VAR_31 != ((void*)0)
          && (FUNC_4(VAR_30) == FUNC_4(VAR_31)))
        {
          apr_array_header_t *VAR_32;

          FUNC_0(FUNC_15(&VAR_32, VAR_31, VAR_30,
                                 VAR_22));

          if (VAR_32->nelts == 0)
            VAR_31 = ((void*)0);
        }

      FUNC_0(FUNC_13(VAR_20, VAR_21, VAR_31,
                               VAR_22));
    }

  if (VAR_19->kind == VAR_11 && VAR_19->children)
    FUNC_0(FUNC_10(VAR_20->sdb, VAR_20->wc_id,
                                       VAR_21,
                                       VAR_23,
                                       VAR_19->repos_relpath,
                                       VAR_19->revision,
                                       VAR_19->children,
                                       0 ,
                                       VAR_22));


  if (*VAR_21)
    {
      if (VAR_28
          && ((VAR_19->status == VAR_16)
              || (VAR_19->status == VAR_15))
          && ! VAR_19->file_external)
        {
          FUNC_0(FUNC_7(VAR_20, VAR_21,
                                          VAR_19->kind, 0,
                                          VAR_22));
        }
      else if (VAR_19->status == VAR_17
               || VAR_19->status == VAR_18
               || VAR_19->status == VAR_14)
        {
          FUNC_0(FUNC_8(VAR_20, VAR_21, 0,
                                           VAR_22));
        }
    }

  if (VAR_19->delete_working)
    {
      FUNC_0(FUNC_24(&VAR_24, VAR_20->sdb,
                                    VAR_1));
      FUNC_0(FUNC_22(VAR_24, "is", VAR_20->wc_id, VAR_21));
      FUNC_0(FUNC_28(VAR_24));
    }
  if (VAR_19->insert_base_deleted)
    {
      FUNC_0(FUNC_24(&VAR_24, VAR_20->sdb,
                                        VAR_2));
      FUNC_0(FUNC_22(VAR_24, "isd",
                                VAR_20->wc_id, VAR_21,
                                FUNC_12(VAR_21)));
      FUNC_0(FUNC_28(VAR_24));
    }

  FUNC_0(FUNC_3(VAR_20->sdb, VAR_19->work_items, VAR_22));
  if (VAR_19->conflict)
    FUNC_0(FUNC_30(VAR_20, VAR_21,
                                              VAR_19->conflict, VAR_22));

  return VAR_7;
}
