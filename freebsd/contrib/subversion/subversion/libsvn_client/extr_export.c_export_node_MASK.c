
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ node_status; scalar_t__ kind; char* changed_author; int repos_root_url; int repos_relpath; int changed_rev; int changed_date; scalar_t__ file_external; } ;
typedef TYPE_2__ svn_wc_status3_t ;
struct TYPE_28__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_wc_notify_t ;
typedef int svn_wc_context_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_29__ {int data; } ;
typedef TYPE_4__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_30__ {int apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef void* svn_boolean_t ;
struct export_info_baton {char const* origin_abspath; int notify_baton; int (* notify_func ) (int ,TYPE_3__*,int *) ;int ignore_keywords; int native_eol; TYPE_1__* revision; int overwrite; void* exported; int to_path; int * wc_ctx; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_31__ {int protection; } ;
typedef TYPE_6__ apr_finfo_t ;
typedef int apr_fileperms_t ;
struct TYPE_26__ {scalar_t__ kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,char const*) ;
 int FUNC_6 (int *,char const**,int ,int ) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int ,TYPE_3__*,int *) ;
 int FUNC_9 (int ,TYPE_3__*,int *) ;
 int FUNC_10 (char const*,int *) ;
 char* FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (char const*,int *) ;
 int FUNC_13 (char const*,char const*) ;
 int FUNC_14 (TYPE_5__*) ;
 TYPE_5__* FUNC_15 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_16 (int ,int *,char*,int ) ;
 TYPE_5__* FUNC_17 (TYPE_5__*) ;
 TYPE_4__* FUNC_18 (int *,int ) ;
 int FUNC_19 (char const*,scalar_t__*,int *) ;
 TYPE_5__* FUNC_20 (char const*,int ,int *) ;
 int FUNC_21 (int *,char const*,int *) ;
 int VAR_11 ;
 int FUNC_22 (char const*,char const*,void*,int *) ;
 int FUNC_23 (char const*,void*,int *) ;
 TYPE_5__* FUNC_24 (int ,char const*,int *) ;
 TYPE_5__* FUNC_25 (char const*,void*,void*,int *) ;
 int FUNC_26 (TYPE_6__*,char const*,int ,int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_27 (int ,int ,int *) ;
 TYPE_5__* FUNC_28 (int *,int *,int *,int *,int *) ;
 int FUNC_29 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_30 (int **,int ,int ,char const*,int ,int ,char const*,int *) ;
 int FUNC_31 (int **,char const*,int *,int *) ;
 int FUNC_32 (int **,char const*,int *,int *) ;
 int * FUNC_33 (int *,char const*,void*,int *,int,int *) ;
 TYPE_3__* FUNC_34 (char const*,int ,int *) ;
 int FUNC_35 (int **,int *,char const*,int *,int *) ;
 int FUNC_36 (int **,int *,char const*,int *,int *) ;
 int VAR_16 ;
 int FUNC_37 (int **,int *,char const*,int *,int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static svn_error_t *
FUNC_38(void *VAR_19,
            const char *VAR_20,
            const svn_wc_status3_t *VAR_21,
            apr_pool_t *VAR_22)
{
  struct export_info_baton *VAR_23 = VAR_19;
  svn_wc_context_t *VAR_24 = VAR_23->wc_ctx;
  apr_hash_t *VAR_25 = ((void*)0);
  svn_subst_eol_style_t VAR_26;
  apr_hash_t *VAR_27;
  svn_string_t *VAR_28, *VAR_29, *VAR_30, *VAR_31;
  const char *VAR_32 = ((void*)0);
  svn_boolean_t VAR_33 = VAR_2;
  apr_time_t VAR_34;
  svn_stream_t *VAR_35;
  svn_stream_t *VAR_36;
  const char *VAR_37;
  svn_error_t *VAR_38;

  const char *VAR_39 = FUNC_11(
                                VAR_23->to_path,
                                FUNC_13(VAR_23->origin_abspath,
                                                         VAR_20),
                                VAR_22);

  VAR_23->exported = VAR_10;




  if (VAR_23->revision->kind == VAR_15
      && VAR_21->node_status == VAR_17)
    return VAR_5;

  if (VAR_21->kind == VAR_12)
    {
      apr_fileperms_t VAR_40 = VAR_1;
      if (VAR_23->revision->kind == VAR_15)
        {
          apr_finfo_t VAR_41;
          FUNC_1(FUNC_26(&VAR_41, VAR_20, VAR_0,
                              VAR_22));
          VAR_40 = VAR_41.protection;
        }

      VAR_38 = FUNC_20(VAR_39, VAR_40, VAR_22);
      if (VAR_38)
        {
          if (! FUNC_0(VAR_38->apr_err))
            return FUNC_17(VAR_38);
          if (! VAR_23->overwrite)
            FUNC_2(VAR_38, FUNC_3("Destination directory exists, and will not be "
                             "overwritten unless forced"));
          else
            FUNC_14(VAR_38);
        }

      if (VAR_23->notify_func
          && (FUNC_7(VAR_23->origin_abspath, VAR_20) != 0))
        {
          svn_wc_notify_t *VAR_42 =
              FUNC_34(VAR_39,
                                   VAR_16, VAR_22);

          VAR_42->kind = VAR_12;
          (VAR_23->notify_func)(VAR_23->notify_baton, VAR_42, VAR_22);
        }

      return VAR_5;
    }
  else if (VAR_21->kind != VAR_13)
    {
      if (FUNC_7(VAR_23->origin_abspath, VAR_20) != 0)
        return VAR_5;

      return FUNC_16(VAR_4, ((void*)0),
                               FUNC_3("The node '%s' was not found."),
                               FUNC_12(VAR_20,
                                                      VAR_22));
    }



  if (VAR_21->file_external && FUNC_7(VAR_23->origin_abspath, VAR_20) != 0)
    return VAR_5;


  if (FUNC_7(VAR_20, VAR_23->origin_abspath) == 0)
    {
      svn_node_kind_t VAR_43;

      FUNC_1(FUNC_19(VAR_39, &VAR_43, VAR_22));

      if ((VAR_43 == VAR_13 || VAR_43 == VAR_14)
          && !VAR_23->overwrite)
        return FUNC_16(VAR_3, ((void*)0),
                                 FUNC_3("Destination file '%s' exists, and "
                                   "will not be overwritten unless forced"),
                                 FUNC_12(VAR_39,
                                                        VAR_22));
      else if (VAR_43 == VAR_12)
        return FUNC_16(VAR_3, ((void*)0),
                                 FUNC_3("Destination '%s' exists. Cannot "
                                   "overwrite directory with non-directory"),
                                 FUNC_12(VAR_39,
                                                        VAR_22));
    }

  if (VAR_23->revision->kind != VAR_15)
    {
      FUNC_1(FUNC_35(&VAR_35, VAR_24, VAR_20,
                                            VAR_22, VAR_22));
      if (VAR_35 == ((void*)0))
        return VAR_5;

      FUNC_1(FUNC_36(&VAR_27, VAR_24, VAR_20,
                                        VAR_22, VAR_22));
    }
  else
    {


      FUNC_1(FUNC_32(&VAR_35, VAR_20, VAR_22,
                                         VAR_22));

      FUNC_1(FUNC_37(&VAR_27, VAR_24, VAR_20, VAR_22,
                                VAR_22));
      if (VAR_21->node_status != VAR_18)
        VAR_33 = VAR_10;
    }


  VAR_31 = FUNC_18(VAR_27, VAR_9);
  if (VAR_31 != ((void*)0))
    {



      FUNC_1(FUNC_31(&VAR_36, VAR_39,
                                           VAR_22, VAR_22));
      return FUNC_17(
        FUNC_28(VAR_35, VAR_36, ((void*)0), ((void*)0), VAR_22));
    }


  VAR_28 = FUNC_18(VAR_27, VAR_6);
  VAR_29 = FUNC_18(VAR_27, VAR_8);
  VAR_30 = FUNC_18(VAR_27, VAR_7);

  if (VAR_28)
    FUNC_1(FUNC_6(&VAR_26, &VAR_32, VAR_28->data, VAR_23->native_eol));

  if (VAR_33)
    {


      FUNC_1(FUNC_21(&VAR_34, VAR_20, VAR_22));
    }
  else
    {
      VAR_34 = VAR_21->changed_date;
    }

  if (VAR_29)
    {
      svn_revnum_t VAR_44 = VAR_21->changed_rev;
      const char *VAR_45;
      const char *VAR_46 = FUNC_27(VAR_21->repos_root_url,
                                                    VAR_21->repos_relpath,
                                                    VAR_22);
      const char *VAR_47 = VAR_21->changed_author;
      if (VAR_33)
        {




          VAR_45 = "M";
          VAR_47 = FUNC_3("(local)");
        }
      else
        {
          VAR_45 = "";
        }

      FUNC_1(FUNC_30(&VAR_25, VAR_29->data,
                                        FUNC_5(VAR_22, "%ld%s",
                                                     VAR_44, VAR_45),
                                        VAR_46, VAR_21->repos_root_url, VAR_34,
                                        VAR_47, VAR_22));
    }



  FUNC_1(FUNC_29(&VAR_36, &VAR_37,
                                 FUNC_10(VAR_39, VAR_22),
                                 VAR_11, VAR_22,
                                 VAR_22));



  if (VAR_32 || (VAR_25 && (FUNC_4(VAR_25) > 0)))
    VAR_36 = FUNC_33(VAR_36,
                                             VAR_32,
                                             VAR_2 ,
                                             VAR_25,
                                             ! VAR_23->ignore_keywords ,
                                             VAR_22);


  VAR_38 = FUNC_28(VAR_35, VAR_36, ((void*)0), ((void*)0), VAR_22);

  if (!VAR_38 && VAR_30)
    VAR_38 = FUNC_25(VAR_37, VAR_10, VAR_2, VAR_22);

  if (!VAR_38)
    VAR_38 = FUNC_24(VAR_34, VAR_37, VAR_22);

  if (VAR_38)
    return FUNC_15(VAR_38, FUNC_23(VAR_37, VAR_2,
                                                             VAR_22));


  FUNC_1(FUNC_22(VAR_37, VAR_39, VAR_2, VAR_22));

  if (VAR_23->notify_func)
    {
      svn_wc_notify_t *VAR_48 = FUNC_34(VAR_39,
                                      VAR_16, VAR_22);
      VAR_48->kind = VAR_13;
      (VAR_23->notify_func)(VAR_23->notify_baton, VAR_48, VAR_22);
    }

  return VAR_5;
}
