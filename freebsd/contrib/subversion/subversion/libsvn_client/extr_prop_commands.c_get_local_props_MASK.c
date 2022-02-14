
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int svn_proplist_receiver2_t ;
struct TYPE_21__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_23__ {int wc_ctx; int cancel_baton; int cancel_func; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct recursive_proplist_receiver_baton {char const* anchor_abspath; char const* anchor; TYPE_4__* iprops; void* wrapped_receiver_baton; int wrapped_receiver; int wc_ctx; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_24__ {scalar_t__ nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,TYPE_4__*,int ,void*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (TYPE_4__*,char const*,int *,int *) ;
 int FUNC_6 (char const**,int *,char const*,TYPE_3__*,int *,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int **,TYPE_4__ const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (int ,char const*,int *,int *) ;
 int FUNC_14 (TYPE_4__**,int ,char const*,int *,int *,int *) ;
 int FUNC_15 (int ,char const*,int *,int ,int,TYPE_4__ const*,int ,struct recursive_proplist_receiver_baton*,int ,int ,int *) ;
 int FUNC_16 (int **,int ,char const*,int *,int *) ;
 TYPE_2__* FUNC_17 (int **,int ,char const*,int *,int *) ;
 int FUNC_18 (scalar_t__*,int ,char const*,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(const char *VAR_10,
                const svn_opt_revision_t *VAR_11,
                svn_depth_t VAR_12,
                const apr_array_header_t *VAR_13,
                svn_boolean_t VAR_14,
                svn_proplist_receiver2_t VAR_15,
                void *VAR_16,
                svn_client_ctx_t *VAR_17,
                apr_pool_t *VAR_18)
{
  svn_boolean_t VAR_19;
  svn_node_kind_t VAR_20;
  apr_hash_t *VAR_21 = ((void*)0);
  const char *VAR_22;
  apr_array_header_t *VAR_23 = ((void*)0);

  FUNC_0(FUNC_7(&VAR_22, VAR_10,
                                  VAR_18));

  VAR_19 = ((VAR_11->kind == VAR_9)
              || (VAR_11->kind == VAR_8));

  FUNC_0(FUNC_18(&VAR_20, VAR_17->wc_ctx, VAR_22,
                            VAR_19, VAR_0, VAR_18));

  if (VAR_20 == VAR_7 || VAR_20 == VAR_6)
    {


      return FUNC_10(VAR_1, ((void*)0),
                               FUNC_1("'%s' is not under version control"),
                               FUNC_8(VAR_22,
                                                      VAR_18));
    }

  if (VAR_14)
    {
      const char *VAR_24;

      FUNC_0(FUNC_14(&VAR_23, VAR_17->wc_ctx, VAR_22,
                                 ((void*)0), VAR_18, VAR_18));
      FUNC_0(FUNC_6(&VAR_24, ((void*)0), VAR_22,
                                        VAR_17, VAR_18, VAR_18));
      FUNC_0(FUNC_5(VAR_23, VAR_24,
                                                 VAR_18,
                                                 VAR_18));
    }

  if (VAR_13 && VAR_13->nelts)
    FUNC_0(FUNC_12(&VAR_21,
                                       VAR_13, VAR_18));


  if (VAR_20 == VAR_5)
    {
      struct recursive_proplist_receiver_baton VAR_25;

      VAR_25.wc_ctx = VAR_17->wc_ctx;
      VAR_25.wrapped_receiver = VAR_15;
      VAR_25.wrapped_receiver_baton = VAR_16;
      VAR_25.iprops = VAR_23;
      VAR_25.anchor_abspath = VAR_22;

      if (FUNC_4(VAR_10, VAR_22) != 0)
        {
          VAR_25.anchor = VAR_10;
        }
      else
        {
          VAR_25.anchor = ((void*)0);
        }

      FUNC_0(FUNC_15(VAR_17->wc_ctx, VAR_22, ((void*)0),
                                          VAR_12, VAR_19, VAR_13,
                                          VAR_4, &VAR_25,
                                          VAR_17->cancel_func, VAR_17->cancel_baton,
                                          VAR_18));

      if (VAR_25.iprops)
        {

          FUNC_0(FUNC_3(VAR_10, ((void*)0) , VAR_25.iprops,
                                VAR_15, VAR_16, VAR_18));
        }
    }
  else if (FUNC_13(VAR_17->wc_ctx, VAR_22,
                                    VAR_21, VAR_18))
    {
      apr_hash_t *VAR_26;

        if (VAR_19)
          FUNC_0(FUNC_16(&VAR_26,
                                            VAR_17->wc_ctx, VAR_22,
                                            VAR_18, VAR_18));
        else
          {
            svn_error_t *VAR_27;

            VAR_27 = FUNC_17(&VAR_26, VAR_17->wc_ctx, VAR_22,
                                    VAR_18, VAR_18);


            if (VAR_27)
              {
                if (VAR_27->apr_err != VAR_2)
                  return FUNC_11(VAR_27);


                FUNC_9(VAR_27);
                VAR_26 = FUNC_2(VAR_18);
              }
          }

      FUNC_0(FUNC_3(VAR_10, VAR_26, VAR_23,
                            VAR_15, VAR_16, VAR_18));

    }
  return VAR_3;
}
