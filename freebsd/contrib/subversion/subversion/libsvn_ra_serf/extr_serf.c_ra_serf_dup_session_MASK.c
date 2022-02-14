
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_13__ {char const* useragent; char const* vcc_url; char const* activity_collection_url; char const* proxy_username; char const* proxy_password; char const* ssl_authorities; char const* uuid; char const* me_resource; char const* rev_stub; char const* txn_stub; char const* txn_root_stub; char const* vtxn_stub; char const* vtxn_root_stub; char const* server_allows_bulk; char const* repos_root_str; char const* session_url_str; int num_conns; scalar_t__ cur_conn; int context; TYPE_4__** conns; int session_url; scalar_t__ config; int repos_root; int * pool; int blncache; void* supported_posts; scalar_t__ proxy_auth_attempts; void* capabilities; int * pending_error; scalar_t__ auth_attempts; int * auth_state; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int last_status_code; int conn; TYPE_2__* session; int bkt_alloc; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,void*) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__*,int) ;
 void* FUNC_4 (int *,char const*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ,TYPE_4__*,int ,TYPE_4__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__,int *) ;
 int FUNC_11 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *,char const*,int *) ;
 int * FUNC_13 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_session_t *VAR_4,
                    svn_ra_session_t *VAR_5,
                    const char *VAR_6,
                    apr_pool_t *VAR_7,
                    apr_pool_t *VAR_8)
{
  svn_ra_serf__session_t *VAR_9 = VAR_5->priv;
  svn_ra_serf__session_t *VAR_10;
  apr_status_t VAR_11;

  VAR_10 = FUNC_3(VAR_7, VAR_9, sizeof(*VAR_10));

  VAR_10->pool = VAR_7;

  if (VAR_10->config)
    FUNC_0(FUNC_10(&VAR_10->config, VAR_10->config,
                                   VAR_7));
  if (VAR_10->useragent)
    VAR_10->useragent = FUNC_4(VAR_7, VAR_10->useragent);

  if (VAR_10->vcc_url)
    VAR_10->vcc_url = FUNC_4(VAR_7, VAR_10->vcc_url);

  VAR_10->auth_state = ((void*)0);
  VAR_10->auth_attempts = 0;
  VAR_10->pending_error = ((void*)0);




  if (VAR_10->capabilities)
    VAR_10->capabilities = FUNC_1(VAR_7, VAR_10->capabilities);

  if (VAR_10->activity_collection_url)
    {
      VAR_10->activity_collection_url
                = FUNC_4(VAR_7, VAR_10->activity_collection_url);
    }



  if (VAR_10->proxy_username)
    {
      VAR_10->proxy_username
                = FUNC_4(VAR_7, VAR_10->proxy_username);
    }

  if (VAR_10->proxy_password)
    {
      VAR_10->proxy_password
                = FUNC_4(VAR_7, VAR_10->proxy_password);
    }

  VAR_10->proxy_auth_attempts = 0;



  if (VAR_10->ssl_authorities)
    {
      VAR_10->ssl_authorities = FUNC_4(VAR_7,
                                              VAR_10->ssl_authorities);
    }

  if (VAR_10->uuid)
    VAR_10->uuid = FUNC_4(VAR_7, VAR_10->uuid);




  if (VAR_10->me_resource)
    VAR_10->me_resource = FUNC_4(VAR_7, VAR_10->me_resource);
  if (VAR_10->rev_stub)
    VAR_10->rev_stub = FUNC_4(VAR_7, VAR_10->rev_stub);
  if (VAR_10->txn_stub)
    VAR_10->txn_stub = FUNC_4(VAR_7, VAR_10->txn_stub);
  if (VAR_10->txn_root_stub)
    VAR_10->txn_root_stub = FUNC_4(VAR_7,
                                          VAR_10->txn_root_stub);
  if (VAR_10->vtxn_stub)
    VAR_10->vtxn_stub = FUNC_4(VAR_7, VAR_10->vtxn_stub);
  if (VAR_10->vtxn_root_stub)
    VAR_10->vtxn_root_stub = FUNC_4(VAR_7,
                                           VAR_10->vtxn_root_stub);


  if (VAR_10->supported_posts)
    VAR_10->supported_posts = FUNC_1(VAR_7,
                                              VAR_10->supported_posts);


  FUNC_0(FUNC_11(&VAR_10->blncache,
                                       VAR_10->pool));

  if (VAR_10->server_allows_bulk)
    VAR_10->server_allows_bulk = FUNC_4(VAR_7,
                                               VAR_10->server_allows_bulk);

  if (VAR_10->repos_root_str)
    {
      VAR_10->repos_root_str = FUNC_4(VAR_7,
                                             VAR_10->repos_root_str);
      FUNC_0(FUNC_12(&VAR_10->repos_root,
                                     VAR_10->repos_root_str,
                                     VAR_7));
    }

  VAR_10->session_url_str = FUNC_4(VAR_7, VAR_6);

  FUNC_0(FUNC_12(&VAR_10->session_url,
                                 VAR_10->session_url_str,
                                 VAR_7));
  VAR_10->context = FUNC_8(VAR_7);

  FUNC_0(FUNC_5(VAR_10, VAR_9->config,
                      VAR_7, VAR_8));

  VAR_10->conns[0] = FUNC_2(VAR_7,
                                   sizeof(*VAR_10->conns[0]));
  VAR_10->conns[0]->bkt_alloc =
          FUNC_6(VAR_7, ((void*)0), ((void*)0));
  VAR_10->conns[0]->session = VAR_10;
  VAR_10->conns[0]->last_status_code = -1;


  VAR_11 =
    FUNC_7(&VAR_10->conns[0]->conn,
                            VAR_10->context,
                            VAR_10->session_url,
                            VAR_2, VAR_10->conns[0],
                            VAR_1, VAR_10->conns[0],
                            VAR_7);
  if (VAR_11)
    return FUNC_13(VAR_11, ((void*)0));


  FUNC_9(VAR_10->context, VAR_3,
                               VAR_10);

  VAR_10->num_conns = 1;
  VAR_10->cur_conn = 0;

  VAR_4->priv = VAR_10;

  return VAR_0;
}
