
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_21__ {TYPE_5__* priv; } ;
typedef TYPE_4__ svn_ra_session_t ;
struct TYPE_18__ {int path; } ;
struct TYPE_22__ {TYPE_2__* wc_callbacks; TYPE_1__ session_url; } ;
typedef TYPE_5__ svn_ra_serf__session_t ;
struct TYPE_20__ {int code; } ;
struct TYPE_23__ {char* method; char const* path; TYPE_3__ sline; TYPE_7__* response_error_baton; int response_error; TYPE_7__* response_baton; int response_handler; TYPE_7__* header_delegate_baton; int header_delegate; void* no_dav_headers; void* custom_accept_encoding; } ;
typedef TYPE_6__ svn_ra_serf__handler_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct file_prop_baton_t {scalar_t__ kind; int * sha1_checksum; int * props; int * result_pool; } ;
struct TYPE_24__ {TYPE_6__* handler; TYPE_5__* session; int * result_stream; } ;
typedef TYPE_7__ stream_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_19__ {scalar_t__ get_wc_contents; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (char*) ;
 int * VAR_4 ;
 int * FUNC_4 (int *) ;
 TYPE_7__* FUNC_5 (int *,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char* FUNC_8 (int ,char const*,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*,int *) ;
 TYPE_6__* FUNC_12 (TYPE_5__*,int *) ;
 int FUNC_13 (TYPE_6__**,TYPE_5__*,char const*,int ,char*,int const*,int ,struct file_prop_baton_t*,int *) ;
 int FUNC_14 (char const**,int *,TYPE_5__*,char const*,int ,int *,int *) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (int *,TYPE_5__*,int *,int *,int *) ;
 int * VAR_12 ;

svn_error_t *
FUNC_17(svn_ra_session_t *VAR_13,
                      const char *VAR_14,
                      svn_revnum_t VAR_15,
                      svn_stream_t *VAR_16,
                      svn_revnum_t *VAR_17,
                      apr_hash_t **VAR_18,
                      apr_pool_t *VAR_19)
{
  svn_ra_serf__session_t *VAR_20 = VAR_13->priv;
  const char *VAR_21;
  const svn_ra_serf__dav_props_t *VAR_22;
  svn_ra_serf__handler_t *VAR_23;
  apr_pool_t *VAR_24 = FUNC_9(VAR_19);
  struct file_prop_baton_t VAR_25;



  VAR_21 = FUNC_8(VAR_20->session_url.path, VAR_14,
                                          VAR_24);






  if (FUNC_2(VAR_15) || VAR_17)
    {
      FUNC_0(FUNC_14(&VAR_21, VAR_17,
                                          VAR_20,
                                          VAR_21, VAR_15,
                                          VAR_24, VAR_24));
      VAR_15 = VAR_1;
    }

  FUNC_1(!FUNC_2(VAR_15));

  if (VAR_18)
      VAR_22 = VAR_4;
  else if (VAR_16 && VAR_20->wc_callbacks->get_wc_contents)
      VAR_22 = VAR_12;
  else
      VAR_22 = VAR_6;

  VAR_25.result_pool = VAR_19;
  VAR_25.props = VAR_18 ? FUNC_4(VAR_19) : ((void*)0);
  VAR_25.kind = VAR_11;
  VAR_25.sha1_checksum = ((void*)0);

  FUNC_0(FUNC_13(&VAR_23, VAR_20,
                                               VAR_21, VAR_1,
                                               "0", VAR_22,
                                               VAR_7, &VAR_25,
                                               VAR_24));

  FUNC_0(FUNC_11(VAR_23, VAR_24));


  if (VAR_25.kind != VAR_10)
    {
      return FUNC_6(VAR_0, ((void*)0),
                              FUNC_3("Can't get text contents of a directory"));
    }

  if (VAR_18)
    *VAR_18 = VAR_25.props;

  if (VAR_16)
    {
      svn_boolean_t VAR_26;
      FUNC_0(FUNC_16(&VAR_26, VAR_20, VAR_25.sha1_checksum, VAR_16,
                                  VAR_24));


      if (!VAR_26)
        {
          stream_ctx_t *VAR_27;
          svn_ra_serf__handler_t *VAR_28;


          VAR_27 = FUNC_5(VAR_24, sizeof(*VAR_27));
          VAR_27->result_stream = VAR_16;
          VAR_27->session = VAR_20;

          VAR_28 = FUNC_12(VAR_20, VAR_24);

          VAR_28->method = "GET";
          VAR_28->path = VAR_21;

          VAR_28->custom_accept_encoding = VAR_3;
          VAR_28->no_dav_headers = VAR_3;

          VAR_28->header_delegate = VAR_9;
          VAR_28->header_delegate_baton = VAR_27;

          VAR_28->response_handler = VAR_8;
          VAR_28->response_baton = VAR_27;

          VAR_28->response_error = VAR_5;
          VAR_28->response_error_baton = VAR_27;

          VAR_27->handler = VAR_28;

          FUNC_0(FUNC_11(VAR_28, VAR_24));

          if (VAR_28->sline.code != 200)
            return FUNC_7(FUNC_15(VAR_28));
        }
    }

  FUNC_10(VAR_24);

  return VAR_2;
}
