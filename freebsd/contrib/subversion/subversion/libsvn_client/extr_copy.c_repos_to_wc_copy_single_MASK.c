
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (struct notification_adjust_baton*,TYPE_1__*,int *) ;
typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_19__ {struct notification_adjust_baton* notify_baton2; int (* notify_func2 ) (struct notification_adjust_baton*,TYPE_1__*,int *) ;int cancel_baton; int * (* cancel_func ) (int ) ;int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_20__ {char* dst_abspath_or_url; scalar_t__ src_kind; int src_revnum; int * src_abspath_or_url; int src_op_revision; int src_peg_revision; int src_original; } ;
typedef TYPE_4__ svn_client__copy_pair_t ;
typedef scalar_t__ svn_boolean_t ;
struct notification_adjust_baton {char const* checkout_abspath; char const* final_abspath; struct notification_adjust_baton* inner_baton; int (* inner_func ) (struct notification_adjust_baton*,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (char const*,int *,TYPE_3__*,int *) ;
 int FUNC_7 (struct notification_adjust_baton*,TYPE_1__*,int *) ;
 int * FUNC_8 (int **,int const*,TYPE_4__*,int *,char const*,TYPE_3__*,int *,int *) ;
 int FUNC_9 (struct notification_adjust_baton*,TYPE_1__*,int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (struct notification_adjust_baton*,TYPE_1__*,int *) ;
 int * FUNC_12 (int *,scalar_t__*,int ,char const*,int *,int *,int ,scalar_t__,int ,int *,TYPE_3__*,int *) ;
 int * FUNC_13 (int *,char const*,int *,int *,int ,int ,scalar_t__,TYPE_3__*,int *) ;
 int * FUNC_14 (int **,int *,int *,int ,int ,scalar_t__,int *) ;
 int * FUNC_15 (int *,int *,char const*,char const*,int ,scalar_t__*,int *,TYPE_3__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (char const*) ;
 char* FUNC_17 (char*,char const*,int *) ;
 int FUNC_18 (int *,int ,int *) ;
 int VAR_8 ;
 int * FUNC_19 (char const*,char const*,int ,int *) ;
 int * FUNC_20 (int *,char const**,char const*,int ,int *,int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 (int *,char const*,int ,int *,int *,int **,int *) ;
 int * FUNC_25 (int *,char const**,int *,int *) ;
 int * FUNC_26 (int *,char const**,int *) ;
 int * FUNC_27 (int *) ;
 int * FUNC_28 (int *,int ,char const*,int ,int *,int *) ;
 int * FUNC_29 (int **,int **,int ,char const*,int ,int *,int *) ;
 int * FUNC_30 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_31 (int ,char const*,int *,int *,int *,int *,int *,int ,int * (*) (int ),int ,int *) ;
 int * FUNC_32 (int ,char const*,char const*,scalar_t__,int * (*) (int ),int ,int *,int *,int *) ;
 TYPE_1__* FUNC_33 (char const*,int ,int *) ;
 TYPE_1__* FUNC_34 (int *,int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_35 (int ,char const*,int ,int *,int ,scalar_t__,int *,int * (*) (int ),int ,int *,int *,int *) ;
 int * FUNC_36 (int ,char const*,int ,int ,int * (*) (int ),int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_37(svn_boolean_t *VAR_14,
                        svn_client__copy_pair_t *VAR_15,
                        svn_boolean_t VAR_16,
                        svn_boolean_t VAR_17,
                        svn_boolean_t VAR_18,
                        const apr_hash_t *VAR_19,
                        svn_ra_session_t *VAR_20,
                        svn_client_ctx_t *VAR_21,
                        apr_pool_t *VAR_22)
{
  apr_hash_t *VAR_23;
  const char *VAR_24 = VAR_15->dst_abspath_or_url;

  FUNC_1(FUNC_16(VAR_24));

  if (!VAR_16 && VAR_21->notify_func2)
    {
      svn_wc_notify_t *VAR_25;
      VAR_25 = FUNC_34(
                            VAR_15->src_abspath_or_url,
                            VAR_13,
                            VAR_22);
      VAR_25->kind = VAR_15->src_kind;
      VAR_21->notify_func2(VAR_21->notify_baton2, VAR_25, VAR_22);


      if (VAR_21->cancel_func)
        FUNC_0(VAR_21->cancel_func(VAR_21->cancel_baton));
    }

  if (VAR_15->src_kind == VAR_10)
    {
      if (VAR_16)
        {
          const char *VAR_26, *VAR_27;


          FUNC_0(FUNC_30(&VAR_26, VAR_21->wc_ctx, VAR_24,
                                     VAR_22, VAR_22));

          FUNC_0(FUNC_20(((void*)0), &VAR_27, VAR_26,
                                           VAR_8, VAR_22, VAR_22));







          {
            svn_wc_notify_func2_t VAR_28 = VAR_21->notify_func2;
            void *VAR_29 = VAR_21->notify_baton2;
            struct notification_adjust_baton VAR_30;
            svn_error_t *VAR_31;

            VAR_30.inner_func = VAR_21->notify_func2;
            VAR_30.inner_baton = VAR_21->notify_baton2;
            VAR_30.checkout_abspath = VAR_27;
            VAR_30.final_abspath = VAR_24;
            VAR_21->notify_func2 = FUNC_7;
            VAR_21->notify_baton2 = &VAR_30;






            if (VAR_18)
              VAR_17 = VAR_5;

            VAR_31 = FUNC_12(&VAR_15->src_revnum, VAR_14,
                                                VAR_15->src_original,
                                                VAR_27,
                                                &VAR_15->src_peg_revision,
                                                &VAR_15->src_op_revision,
                                                VAR_7,
                                                VAR_17, VAR_0,
                                                VAR_20, VAR_21, VAR_22);

            VAR_21->notify_func2 = VAR_28;
            VAR_21->notify_baton2 = VAR_29;

            FUNC_0(VAR_31);
          }

          *VAR_14 = VAR_5;





          FUNC_0(FUNC_32(VAR_21->wc_ctx, VAR_27, VAR_24,
                               VAR_5 ,
                               VAR_21->cancel_func, VAR_21->cancel_baton,
                               ((void*)0), ((void*)0), VAR_22));
          FUNC_0(FUNC_28(((void*)0), VAR_21->wc_ctx, VAR_27,
                                             VAR_0, VAR_22, VAR_22));
          FUNC_0(FUNC_36(VAR_21->wc_ctx,
                                                       VAR_27,
                                                       VAR_0, VAR_0,
                                                       VAR_21->cancel_func,
                                                       VAR_21->cancel_baton,
                                                       VAR_22));


          FUNC_0(FUNC_19(VAR_27, VAR_24, VAR_0, VAR_22));
        }
      else
        {
          *VAR_14 = VAR_5;

          FUNC_0(FUNC_13(VAR_15->src_abspath_or_url,
                                           VAR_24,
                                           &VAR_15->src_peg_revision,
                                           &VAR_15->src_op_revision,
                                           VAR_7,
                                           VAR_0 ,
                                           VAR_5 ,
                                           VAR_21, VAR_22));

          return VAR_2;
        }

      if (VAR_18)
        {
          apr_hash_t *VAR_32;
          apr_hash_index_t *VAR_33;
          apr_pool_t *VAR_34;
          const char *VAR_35;
          apr_hash_t *VAR_36;
          apr_hash_t *VAR_37;

          FUNC_0(FUNC_26(VAR_20, &VAR_35, VAR_22));
          FUNC_0(FUNC_8(&VAR_32,
                                           VAR_19, VAR_15,
                                           VAR_20, VAR_35,
                                           VAR_21, VAR_22, VAR_22));

          VAR_34 = FUNC_22(VAR_22);
          for (VAR_33 = FUNC_2(VAR_22, VAR_32);
               VAR_33;
               VAR_33 = FUNC_3(VAR_33))
            {
              const char *VAR_38 = FUNC_4(VAR_33);
              svn_string_t *VAR_39 = FUNC_5(VAR_33);
              const char *VAR_40;

              FUNC_21(VAR_34);

              VAR_40 = FUNC_17(VAR_15->dst_abspath_or_url,
                                              VAR_38, VAR_34);

              FUNC_0(FUNC_35(VAR_21->wc_ctx, VAR_40,
                                       VAR_3, VAR_39,
                                       VAR_6, VAR_5 ,
                                       ((void*)0) ,
                                       VAR_21->cancel_func, VAR_21->cancel_baton,
                                       ((void*)0), ((void*)0),
                                       VAR_34));
            }


          FUNC_0(FUNC_29(&VAR_36,
                                                       &VAR_37,
                                                       VAR_21->wc_ctx,
                                                       VAR_24,
                                                       VAR_7,
                                                       VAR_34, VAR_34));
          FUNC_0(FUNC_15(VAR_36,
                                               VAR_37,
                                               VAR_35, VAR_24,
                                               VAR_7,
                                               VAR_14,
                                               VAR_20,
                                               VAR_21, VAR_34));
          FUNC_23(VAR_34);
        }
    }

  else if (VAR_15->src_kind == VAR_11)
    {
      apr_hash_t *VAR_41;
      const char *VAR_42;
      svn_stream_t *VAR_43 = FUNC_27(VAR_22);

      FUNC_0(FUNC_25(VAR_20, &VAR_42,
                                                  VAR_15->src_abspath_or_url,
                                                  VAR_22));


      FUNC_0(FUNC_24(VAR_20, VAR_42, VAR_15->src_revnum,
                              VAR_43,
                              &VAR_15->src_revnum, &VAR_41, VAR_22));

      if (VAR_41 && ! VAR_16)
        FUNC_18(VAR_41, VAR_4, ((void*)0));

      *VAR_14 = VAR_5;

      FUNC_0(FUNC_31(
         VAR_21->wc_ctx, VAR_24,
         VAR_43, ((void*)0), VAR_41, ((void*)0),
         VAR_16 ? VAR_15->src_abspath_or_url : ((void*)0),
         VAR_16 ? VAR_15->src_revnum : VAR_1,
         VAR_21->cancel_func, VAR_21->cancel_baton,
         VAR_22));
    }



  FUNC_0(FUNC_14(
            &VAR_23, VAR_20,
            VAR_15->src_abspath_or_url, VAR_15->src_revnum,
            VAR_9, VAR_5 , VAR_22));
  FUNC_0(FUNC_6(VAR_24, VAR_23, VAR_21, VAR_22));





  if (VAR_21->notify_func2)
    {
      svn_wc_notify_t *VAR_44 = FUNC_33(
                                  VAR_24, VAR_12, VAR_22);
      VAR_44->kind = VAR_15->src_kind;
      VAR_21->notify_func2(VAR_21->notify_baton2, VAR_44, VAR_22);
    }

  return VAR_2;
}
