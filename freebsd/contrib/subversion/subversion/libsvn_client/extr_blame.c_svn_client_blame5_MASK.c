
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_27__ ;
typedef struct TYPE_31__ TYPE_26__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_34__ {scalar_t__ text_status; scalar_t__ prop_status; } ;
typedef TYPE_3__ svn_wc_status3_t ;
typedef scalar_t__ svn_subst_eol_style_t ;
struct TYPE_35__ {int data; scalar_t__ len; } ;
typedef TYPE_4__ svn_stringbuf_t ;
struct TYPE_36__ {char* data; } ;
typedef TYPE_5__ svn_string_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_30__ {scalar_t__ number; } ;
struct TYPE_37__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_6__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_diff_file_options_t ;
struct TYPE_38__ {int cancel_baton; int (* cancel_func ) (int ) ;int wc_ctx; } ;
typedef TYPE_7__ svn_client_ctx_t ;
typedef int (* svn_client_blame_receiver3_t ) (void*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,int *,char const*,int ,int,int *) ;
struct TYPE_39__ {int url; } ;
typedef TYPE_8__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct file_rev_baton {scalar_t__ start_rev; scalar_t__ end_rev; char const* target; int include_merged_revisions; char const* last_filename; int backwards; int check_mime_type; int * prevfilepool; int * filepool; int * currpool; int * lastpool; TYPE_26__* chain; TYPE_27__* merged_chain; int * last_rev; int const* diff_options; int * mainpool; int repos_root_url; int * last_props; scalar_t__ last_revnum; int * last_original_filename; TYPE_7__* ctx; } ;
struct blame {scalar_t__ start; struct blame* next; TYPE_2__* rev; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_hash_t ;
struct TYPE_33__ {scalar_t__ revision; char* path; int * rev_props; } ;
struct TYPE_32__ {struct blame* blame; int * pool; int * avail; } ;
struct TYPE_31__ {struct blame* blame; int * pool; int * avail; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char const*,TYPE_26__*,int *,int const*,int (*) (int ),int ,int *) ;
 void* FUNC_5 (int *,int) ;
 struct blame* FUNC_6 (TYPE_26__*,int *,int ) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_26__*,TYPE_27__*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int **,int ,char const*,TYPE_6__*,int,int,int (*) (int ),int ,int *,int *) ;
 int FUNC_10 (scalar_t__*,int *,int ,char const*,int *,TYPE_6__ const*,int *) ;
 int FUNC_11 (int **,int *,char const*,int *,TYPE_6__ const*,TYPE_6__ const*,TYPE_7__*,int *) ;
 int FUNC_12 (TYPE_8__**,int *,char const*,TYPE_6__ const*,TYPE_6__*,TYPE_7__*,int *) ;
 int FUNC_13 (char const**,char const*,int *) ;
 char const* FUNC_14 (char const*,int *) ;
 int * FUNC_15 (int ,int *,int *) ;
 int * FUNC_16 (int ,int ,int ,char const*) ;
 TYPE_5__* FUNC_17 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_18 (char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (int *) ;
 void* FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 char* FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,char*,scalar_t__,int *,int *,int **,int *) ;
 int FUNC_25 (int *,char*,scalar_t__,scalar_t__,int,int ,struct file_rev_baton*,int *) ;
 int FUNC_26 (int *,int *,int *) ;
 int FUNC_27 (int *,int ,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int *,int (*) (int ),int ,int *) ;
 int FUNC_30 (int **,char const*,int *,int *) ;
 int FUNC_31 (int **,char const**,int *,int ,int *,int *) ;
 int FUNC_32 (int *,TYPE_4__**,char*,int*,int *) ;
 int FUNC_33 (scalar_t__*,char const**,char*) ;
 scalar_t__ VAR_14 ;
 int * FUNC_34 (int *,char*,int,int *,int,int *) ;
 int FUNC_35 (int **,int ,char const*,int *,int *) ;
 int FUNC_36 (TYPE_5__ const**,int ,char const*,int ,int *,int *) ;
 int FUNC_37 (TYPE_3__**,int ,char const*,int *,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

svn_error_t *
FUNC_38(const char *VAR_17,
                  const svn_opt_revision_t *VAR_18,
                  const svn_opt_revision_t *VAR_19,
                  const svn_opt_revision_t *VAR_20,
                  const svn_diff_file_options_t *VAR_21,
                  svn_boolean_t VAR_22,
                  svn_boolean_t VAR_23,
                  svn_client_blame_receiver3_t VAR_24,
                  void *VAR_25,
                  svn_client_ctx_t *VAR_26,
                  apr_pool_t *VAR_27)
{
  struct file_rev_baton VAR_28;
  svn_ra_session_t *VAR_29;
  svn_revnum_t VAR_30, VAR_31;
  struct blame *VAR_32, *VAR_33 = ((void*)0);
  apr_pool_t *VAR_34;
  svn_stream_t *VAR_35;
  svn_stream_t *VAR_36;
  const char *VAR_37;

  if (VAR_19->kind == VAR_12
      || VAR_20->kind == VAR_12)
    return FUNC_15
      (VAR_1, ((void*)0), ((void*)0));

  if (FUNC_19(VAR_17))
    VAR_37 = VAR_17;
  else
    FUNC_1(FUNC_13(&VAR_37, VAR_17, VAR_27));


  FUNC_1(FUNC_11(&VAR_29, ((void*)0),
                                            VAR_17, ((void*)0), VAR_18,
                                            VAR_18,
                                            VAR_26, VAR_27));

  FUNC_1(FUNC_10(&VAR_30, ((void*)0), VAR_26->wc_ctx,
                                          VAR_37, VAR_29,
                                          VAR_19, VAR_27));

  FUNC_1(FUNC_10(&VAR_31, ((void*)0), VAR_26->wc_ctx,
                                          VAR_37, VAR_29,
                                          VAR_20, VAR_27));

  {
    svn_client__pathrev_t *VAR_38;
    svn_opt_revision_t VAR_39;
    VAR_39.kind = VAR_11;
    VAR_39.value.number = FUNC_0(VAR_30, VAR_31);

    FUNC_1(FUNC_12(&VAR_38, VAR_29,
                                            VAR_17, VAR_18,
                                            &VAR_39,
                                            VAR_26, VAR_27));


    FUNC_1(FUNC_27(VAR_29, VAR_38->url, VAR_27));
  }



  if (!VAR_22
      && VAR_30 < VAR_31)
    {
      apr_hash_t *VAR_40;
      const char *VAR_41 = ((void*)0);

      if (FUNC_19(VAR_17)
          || VAR_30 > VAR_31
          || (VAR_20->kind != VAR_13
              && VAR_20->kind != VAR_10))
        {
          FUNC_1(FUNC_24(VAR_29, "", VAR_31, ((void*)0), ((void*)0),
                                  &VAR_40, VAR_27));

          VAR_41 = FUNC_23(VAR_40, VAR_6);
        }
      else
        {
          const svn_string_t *VAR_42;

          if (VAR_20->kind == VAR_13)
            FUNC_1(FUNC_36(&VAR_42, VAR_26->wc_ctx,
                                     VAR_37,
                                     VAR_6,
                                     VAR_27, VAR_27));
          else
            {
              FUNC_1(FUNC_35(&VAR_40, VAR_26->wc_ctx,
                                                VAR_37,
                                                VAR_27, VAR_27));

              VAR_42 = VAR_40 ? FUNC_17(VAR_40, VAR_6)
                            : ((void*)0);
            }

          VAR_41 = VAR_42 ? VAR_42->data : ((void*)0);
        }

      if (VAR_41)
        {
          if (FUNC_18(VAR_41))
            return FUNC_16
              (VAR_2, 0,
               FUNC_3("Cannot calculate blame information for binary file '%s'"),
               (FUNC_19(VAR_17)
                ? VAR_17 : FUNC_14(VAR_17, VAR_27)));
        }
    }

  VAR_28.start_rev = VAR_30;
  VAR_28.end_rev = VAR_31;
  VAR_28.target = VAR_17;
  VAR_28.ctx = VAR_26;
  VAR_28.diff_options = VAR_21;
  VAR_28.include_merged_revisions = VAR_23;
  VAR_28.last_filename = ((void*)0);
  VAR_28.last_rev = ((void*)0);
  VAR_28.last_original_filename = ((void*)0);
  VAR_28.chain = FUNC_5(VAR_27, sizeof(*VAR_28.chain));
  VAR_28.chain->blame = ((void*)0);
  VAR_28.chain->avail = ((void*)0);
  VAR_28.chain->pool = VAR_27;
  if (VAR_23)
    {
      VAR_28.merged_chain = FUNC_5(VAR_27, sizeof(*VAR_28.merged_chain));
      VAR_28.merged_chain->blame = ((void*)0);
      VAR_28.merged_chain->avail = ((void*)0);
      VAR_28.merged_chain->pool = VAR_27;
    }
  VAR_28.backwards = (VAR_28.start_rev > VAR_28.end_rev);
  VAR_28.last_revnum = VAR_3;
  VAR_28.last_props = ((void*)0);
  VAR_28.check_mime_type = (VAR_28.backwards && !VAR_22);

  FUNC_1(FUNC_26(VAR_29, &VAR_28.repos_root_url, VAR_27));

  VAR_28.mainpool = VAR_27;



  VAR_28.lastpool = FUNC_21(VAR_27);
  VAR_28.currpool = FUNC_21(VAR_27);
  if (VAR_23)
    {
      VAR_28.filepool = FUNC_21(VAR_27);
      VAR_28.prevfilepool = FUNC_21(VAR_27);
    }





  FUNC_1(FUNC_25(VAR_29, "",
                                VAR_28.backwards ? VAR_30
                                              : FUNC_0(0, VAR_30-1),
                                VAR_31,
                                VAR_23,
                                VAR_8, &VAR_28, VAR_27));

  if (VAR_20->kind == VAR_13)
    {


      svn_wc_status3_t *VAR_43;

      FUNC_1(FUNC_37(&VAR_43, VAR_26->wc_ctx, VAR_37, VAR_27,
                             VAR_27));

      if (VAR_43->text_status != VAR_16
          || (VAR_43->prop_status != VAR_16
              && VAR_43->prop_status != VAR_15))
        {
          svn_stream_t *VAR_44;
          svn_stream_t *VAR_45;
          svn_opt_revision_t VAR_46;
          svn_boolean_t VAR_47 = VAR_0;
          const char *VAR_48;

          if (VAR_43->prop_status != VAR_15)
            {
              const svn_string_t *VAR_49;
              FUNC_1(FUNC_36(&VAR_49, VAR_26->wc_ctx,
                                       VAR_37,
                                       VAR_5,
                                       VAR_27, VAR_27));

              if (VAR_49)
                {
                  svn_subst_eol_style_t VAR_50;
                  const char *VAR_51;
                  FUNC_33(&VAR_50, &VAR_51, VAR_49->data);

                  VAR_47 = (VAR_50 == VAR_14);
                }
            }

          VAR_46.kind = VAR_13;
          FUNC_1(FUNC_9(&VAR_44, VAR_26->wc_ctx,
                                                    VAR_37, &VAR_46,
                                                    VAR_0, VAR_47,
                                                    VAR_26->cancel_func,
                                                    VAR_26->cancel_baton,
                                                    VAR_27, VAR_27));

          FUNC_1(FUNC_31(&VAR_45, &VAR_48, ((void*)0),
                                         VAR_9,
                                         VAR_27, VAR_27));

          FUNC_1(FUNC_29(VAR_44, VAR_45, VAR_26->cancel_func,
                                   VAR_26->cancel_baton, VAR_27));

          FUNC_1(FUNC_4(VAR_28.last_filename, VAR_48, VAR_28.chain, ((void*)0),
                                 VAR_28.diff_options,
                                 VAR_26->cancel_func, VAR_26->cancel_baton, VAR_27));

          VAR_28.last_filename = VAR_48;
        }
    }




  FUNC_2(VAR_28.last_filename != ((void*)0));


  VAR_34 = FUNC_21(VAR_27);


  FUNC_1(FUNC_30(&VAR_35, VAR_28.last_filename,
                                   VAR_27, VAR_27));
  VAR_36 = FUNC_34(VAR_35,
                                       "\n", VAR_7, ((void*)0), VAR_0, VAR_27);


  if (VAR_23)
    {






      if (!VAR_28.chain->blame)
        VAR_28.chain->blame = FUNC_6(VAR_28.chain, VAR_28.last_rev, 0);

      FUNC_7(VAR_28.chain, VAR_28.merged_chain, VAR_27);
      VAR_33 = VAR_28.merged_chain->blame;
    }


  for (VAR_32 = VAR_28.chain->blame; VAR_32; VAR_32 = VAR_32->next)
    {
      apr_off_t VAR_52;
      svn_revnum_t VAR_53;
      const char *VAR_54;
      apr_hash_t *VAR_55;

      if (VAR_33)
        {
          VAR_53 = VAR_33->rev->revision;
          VAR_55 = VAR_33->rev->rev_props;
          VAR_54 = VAR_33->rev->path;
        }
      else
        {
          VAR_53 = VAR_3;
          VAR_55 = ((void*)0);
          VAR_54 = ((void*)0);
        }

      for (VAR_52 = VAR_32->start;
           !VAR_32->next || VAR_52 < VAR_32->next->start;
           ++VAR_52)
        {
          svn_boolean_t VAR_56;
          svn_stringbuf_t *VAR_57;

          FUNC_20(VAR_34);
          FUNC_1(FUNC_32(VAR_36, &VAR_57, "\n", &VAR_56, VAR_34));
          if (VAR_26->cancel_func)
            FUNC_1(VAR_26->cancel_func(VAR_26->cancel_baton));
          if (!VAR_56 || VAR_57->len)
            {
              if (VAR_32->rev)
                FUNC_1(VAR_24(VAR_25, VAR_30, VAR_31,
                                 VAR_52, VAR_32->rev->revision,
                                 VAR_32->rev->rev_props, VAR_53,
                                 VAR_55, VAR_54,
                                 VAR_57->data, VAR_0, VAR_34));
              else
                FUNC_1(VAR_24(VAR_25, VAR_30, VAR_31,
                                 VAR_52, VAR_3,
                                 ((void*)0), VAR_3,
                                 ((void*)0), ((void*)0),
                                 VAR_57->data, VAR_7, VAR_34));
            }
          if (VAR_56) break;
        }

      if (VAR_33)
        VAR_33 = VAR_33->next;
    }

  FUNC_1(FUNC_28(VAR_36));

  FUNC_22(VAR_28.lastpool);
  FUNC_22(VAR_28.currpool);
  if (VAR_23)
    {
      FUNC_22(VAR_28.filepool);
      FUNC_22(VAR_28.prevfilepool);
    }
  FUNC_22(VAR_34);

  return VAR_4;
}
