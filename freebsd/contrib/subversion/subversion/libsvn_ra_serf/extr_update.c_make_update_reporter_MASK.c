
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_11__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_12__ {scalar_t__ bulk_updates; scalar_t__ supports_inline_props; scalar_t__ server_allows_bulk; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef void* svn_boolean_t ;
struct TYPE_13__ {char const* source; char const* destination; char const* update_target; int body_template; void* send_copyfrom_args; void* ignore_ancestry; int target_rev; int body; int * pool; void* done; void* editor_baton; int const* editor; int switched_paths; void* text_deltas; TYPE_3__* sess; } ;
typedef TYPE_4__ report_context_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (TYPE_1__**,char*,char*,int *) ;
 int VAR_7 ;
 int FUNC_7 (int const**,void**,int const*,void*,int ,void*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,void**,int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (TYPE_1__**,int *,int ,char*,char*,int ,char*,...) ;
 int VAR_13 ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_session_t *VAR_14,
                     const svn_ra_reporter3_t **VAR_15,
                     void **VAR_16,
                     svn_revnum_t VAR_17,
                     const char *VAR_18,
                     const char *VAR_19,
                     const char *VAR_20,
                     svn_depth_t VAR_21,
                     svn_boolean_t VAR_22,
                     svn_boolean_t VAR_23,
                     svn_boolean_t VAR_24,
                     const svn_delta_editor_t *VAR_25,
                     void *VAR_26,
                     apr_pool_t *VAR_27,
                     apr_pool_t *VAR_28)
{
  report_context_t *VAR_29;
  const svn_delta_editor_t *VAR_30;
  void *VAR_31;
  svn_boolean_t VAR_32 = *VAR_20 != '\0';
  svn_boolean_t VAR_33;
  svn_ra_serf__session_t *VAR_34 = VAR_14->priv;
  svn_stringbuf_t *VAR_35 = ((void*)0);
  svn_boolean_t VAR_36;

  FUNC_0(FUNC_9(VAR_14, &VAR_33,
                                      VAR_2, VAR_28));



  if ((VAR_21 != VAR_9)
      && (VAR_21 != VAR_10)
      && ! VAR_33)
    {
      FUNC_0(FUNC_7(&VAR_30,
                                            &VAR_31,
                                            VAR_25,
                                            VAR_26,
                                            VAR_21, VAR_32,
                                            VAR_27));
      VAR_25 = VAR_30;
      VAR_26 = VAR_31;
    }

  VAR_29 = FUNC_4(VAR_27, sizeof(*VAR_29));
  VAR_29->pool = VAR_27;
  VAR_29->sess = VAR_34;
  VAR_29->target_rev = VAR_17;
  VAR_29->ignore_ancestry = VAR_22;
  VAR_29->send_copyfrom_args = VAR_24;
  VAR_29->text_deltas = VAR_23;
  VAR_29->switched_paths = FUNC_2(VAR_29->pool);

  VAR_29->source = VAR_18;
  VAR_29->destination = VAR_19;
  VAR_29->update_target = VAR_20;

  VAR_29->editor = VAR_25;
  VAR_29->editor_baton = VAR_26;
  VAR_29->done = VAR_0;

  *VAR_15 = &VAR_7;
  *VAR_16 = VAR_29;

  VAR_29->body =
    FUNC_10(VAR_3,
                                     VAR_29->pool);
  VAR_29->body_template = FUNC_11(VAR_29->body);

  if (VAR_34->bulk_updates == VAR_12)
    {

      VAR_36 = VAR_6;
    }
  else if (VAR_34->bulk_updates == VAR_11)
    {

      VAR_36 = VAR_0;
    }
  else
    {


      if (VAR_34->server_allows_bulk)
        {
          if (FUNC_5(VAR_34->server_allows_bulk, "off") == 0)
            {

              VAR_36 = VAR_0;
            }
          else if (FUNC_5(VAR_34->server_allows_bulk, "prefer") == 0)
            {

              VAR_36 = VAR_6;
            }
          else
            {


              VAR_36 = VAR_0;
            }
        }
      else
        {


          if (VAR_34->supports_inline_props)
            {
              VAR_36 = VAR_0;
            }
          else
            {


              VAR_36 = VAR_6;
            }
        }
    }

  if (VAR_36)
    {
      FUNC_13(&VAR_35, VAR_28, VAR_13,
                            "S:update-report",
                            "xmlns:S", VAR_5, "send-all", "true",
                            VAR_4);
    }
  else
    {
      FUNC_13(&VAR_35, VAR_28, VAR_13,
                            "S:update-report",
                            "xmlns:S", VAR_5,
                            VAR_4);


      FUNC_6(&VAR_35, "S:include-props", "yes", VAR_28);
    }

  FUNC_6(&VAR_35, "S:src-path", VAR_29->source, VAR_28);

  if (FUNC_1(VAR_29->target_rev))
    {
      FUNC_6(&VAR_35, "S:target-revision",
                          FUNC_3(VAR_28, VAR_29->target_rev),
                          VAR_28);
    }

  if (VAR_29->destination && *VAR_29->destination)
    {
      FUNC_6(&VAR_35, "S:dst-path", VAR_29->destination,
                          VAR_28);
    }

  if (VAR_29->update_target && *VAR_29->update_target)
    {
      FUNC_6(&VAR_35, "S:update-target", VAR_29->update_target,
                          VAR_28);
    }

  if (VAR_29->ignore_ancestry)
    {
      FUNC_6(&VAR_35, "S:ignore-ancestry", "yes", VAR_28);
    }

  if (VAR_29->send_copyfrom_args)
    {
      FUNC_6(&VAR_35, "S:send-copyfrom-args", "yes", VAR_28);
    }


  if (VAR_21 == VAR_9 || VAR_21 == VAR_8)
    {
      FUNC_6(&VAR_35, "S:recursive", "no", VAR_28);
    }
  if (! VAR_23)
    {
      FUNC_6(&VAR_35, "S:text-deltas", "no", VAR_28);
    }

  FUNC_6(&VAR_35, "S:depth", FUNC_8(VAR_21), VAR_28);

  FUNC_0(FUNC_12(VAR_29->body_template, VAR_35->data, &VAR_35->len));

  return VAR_1;
}
