
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_16__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_serf__xml_context_t ;
struct TYPE_15__ {char* path; } ;
struct TYPE_17__ {TYPE_1__ session_url; int rev_stub; scalar_t__ supports_rev_rsrc_replay; int cancel_baton; int (* cancel_func ) (int ) ;scalar_t__ http20; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
struct TYPE_18__ {char* method; char const* path; char* body_type; struct revision_report_t* header_delegate_baton; int header_delegate; int custom_accept_encoding; struct revision_report_t* done_delegate_baton; int done_delegate; struct revision_report_t* body_delegate_baton; int body_delegate; } ;
typedef TYPE_4__ svn_ra_serf__handler_t ;
typedef int svn_ra_replay_revstart_callback_t ;
typedef int svn_ra_replay_revfinish_callback_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct revision_report_t {int* replay_reports; char const* include_path; char const* revprop_target; TYPE_4__* report_handler; TYPE_4__* propfind_handler; int rev_props; scalar_t__ revprop_rev; int * pool; TYPE_3__* session; int send_deltas; scalar_t__ low_water_mark; scalar_t__ revision; int * done; void* replay_baton; int revfinish_func; int revstart_func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 struct revision_report_t* FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,char*,int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,TYPE_3__*,int *) ;
 TYPE_4__* FUNC_11 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_12 (TYPE_4__**,TYPE_3__*,char const*,scalar_t__,char*,int ,int ,int ,int *) ;
 int VAR_14 ;
 int FUNC_13 (char const**,char*,TYPE_3__*,int *) ;
 int FUNC_14 (char const**,TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_4__*) ;
 int * FUNC_16 (int ,int ,int ,int ,struct revision_report_t*,int *) ;

svn_error_t *
FUNC_17(svn_ra_session_t *VAR_15,
                          svn_revnum_t VAR_16,
                          svn_revnum_t VAR_17,
                          svn_revnum_t VAR_18,
                          svn_boolean_t VAR_19,
                          svn_ra_replay_revstart_callback_t VAR_20,
                          svn_ra_replay_revfinish_callback_t VAR_21,
                          void *VAR_22,
                          apr_pool_t *VAR_23)
{
  svn_ra_serf__session_t *VAR_24 = VAR_15->priv;
  svn_revnum_t VAR_25 = VAR_16;
  const char *VAR_26;
  int VAR_27 = 0;
  const char *VAR_28;
  svn_boolean_t VAR_29;
  apr_pool_t *VAR_30 = FUNC_8(VAR_23);

  if (VAR_24->http20) {
      return FUNC_6(VAR_2, ((void*)0), ((void*)0));
  }

  FUNC_0(FUNC_14(&VAR_26, VAR_24,
                                       VAR_30));
  if (VAR_24->supports_rev_rsrc_replay)
    {
      FUNC_0(FUNC_13(&VAR_28,
                                             VAR_24->session_url.path,
                                             VAR_24, VAR_30));
    }
  else
    {
      VAR_28 = ((void*)0);
    }

  while (VAR_27 || VAR_25 <= VAR_17)
    {
      if (VAR_24->cancel_func)
        FUNC_0(VAR_24->cancel_func(VAR_24->cancel_baton));



      if (VAR_25 <= VAR_17 && VAR_27 < VAR_1)
        {
          struct revision_report_t *VAR_31;
          svn_ra_serf__handler_t *VAR_32;
          apr_pool_t *VAR_33 = FUNC_8(VAR_30);
          svn_ra_serf__xml_context_t *VAR_34;
          const char *VAR_35;

          VAR_31 = FUNC_3(VAR_33, sizeof(*VAR_31));
          VAR_31->pool = VAR_33;
          VAR_31->revstart_func = VAR_20;
          VAR_31->revfinish_func = VAR_21;
          VAR_31->replay_baton = VAR_22;
          VAR_31->done = &VAR_29;
          VAR_31->replay_reports = &VAR_27;
          VAR_31->include_path = VAR_28;
          VAR_31->revision = VAR_25;
          VAR_31->low_water_mark = VAR_18;
          VAR_31->send_deltas = VAR_19;
          VAR_31->session = VAR_24;


          VAR_31->rev_props = FUNC_2(VAR_31->pool);

          if (FUNC_1(VAR_24))
            {
              VAR_31->revprop_target = FUNC_4(VAR_33, "%s/%ld",
                                                     VAR_24->rev_stub, VAR_25);
              VAR_31->revprop_rev = VAR_3;
            }
          else
            {
              VAR_31->revprop_target = VAR_26;
              VAR_31->revprop_rev = VAR_25;
            }

          FUNC_0(FUNC_12(
                                              &VAR_31->propfind_handler,
                                              VAR_24,
                                              VAR_31->revprop_target,
                                              VAR_31->revprop_rev,
                                              "0", VAR_6,
                                              VAR_14,
                                              VAR_31->rev_props,
                                              VAR_33));


          FUNC_15(VAR_31->propfind_handler);


          if (VAR_24->supports_rev_rsrc_replay)
            {
              VAR_35 = FUNC_4(VAR_33, "%s/%ld",
                                           VAR_24->rev_stub, VAR_25);
            }
          else
            {
              VAR_35 = VAR_24->session_url.path;
            }

          VAR_34 = FUNC_16(VAR_12,
                                           VAR_11, VAR_9,
                                           VAR_8, VAR_31,
                                           VAR_33);

          VAR_32 = FUNC_11(VAR_24, VAR_34, ((void*)0),
                                                      VAR_33);

          VAR_32->method = "REPORT";
          VAR_32->path = VAR_35;
          VAR_32->body_delegate = VAR_7;
          VAR_32->body_delegate_baton = VAR_31;
          VAR_32->body_type = "text/xml";

          VAR_32->done_delegate = VAR_10;
          VAR_32->done_delegate_baton = VAR_31;

          VAR_32->custom_accept_encoding = VAR_5;
          VAR_32->header_delegate = VAR_13;
          VAR_32->header_delegate_baton = VAR_31;

          VAR_31->report_handler = VAR_32;
          FUNC_15(VAR_32);

          VAR_25++;
          VAR_27++;
        }


      VAR_29 = VAR_0;
      {
        svn_error_t *VAR_36 = FUNC_10(&VAR_29, VAR_24,
                                                         VAR_30);

        if (VAR_36)
          {
            FUNC_9(VAR_30);
            return FUNC_7(VAR_36);
          }
      }




    }

  FUNC_9(VAR_30);
  return VAR_4;
}
