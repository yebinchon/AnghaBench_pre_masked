
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int header_delegate_baton; int (* header_delegate ) (int *,int ,int *,int *) ;int no_dav_headers; int body_type; int path; int method; TYPE_2__* session; scalar_t__ custom_accept_encoding; int body_delegate_baton; int (* body_delegate ) (int **,int ,int *,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ using_compression; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,int **,TYPE_2__*,int ,int ,int *,int ,char const*,int,int *,int *) ;
 int FUNC_3 (int **,int ,int *,int *,int *) ;
 int FUNC_4 (int *,int ,int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_request_t *VAR_2,
              svn_ra_serf__handler_t *VAR_3,
              serf_bucket_t **VAR_4,
              apr_pool_t *VAR_5,
              apr_pool_t *VAR_6)
{
  serf_bucket_t *VAR_7;
  serf_bucket_t *VAR_8;
  const char *VAR_9;

  if (VAR_3->body_delegate)
    {
      serf_bucket_alloc_t *VAR_10 = FUNC_1(VAR_2);

      FUNC_0(VAR_3->body_delegate(&VAR_7, VAR_3->body_delegate_baton,
                                     VAR_10, VAR_5, VAR_6));
    }
  else
    {
      VAR_7 = ((void*)0);
    }

  if (VAR_3->custom_accept_encoding)
    {
      VAR_9 = ((void*)0);
    }
  else if (VAR_3->session->using_compression != VAR_1)
    {

      VAR_9 = "gzip";
    }
  else
    {
      VAR_9 = ((void*)0);
    }

  FUNC_0(FUNC_2(VAR_2, VAR_4, &VAR_8,
                         VAR_3->session, VAR_3->method, VAR_3->path,
                         VAR_7, VAR_3->body_type, VAR_9,
                         !VAR_3->no_dav_headers, VAR_5,
                         VAR_6));

  if (VAR_3->header_delegate)
    {
      FUNC_0(VAR_3->header_delegate(VAR_8,
                                       VAR_3->header_delegate_baton,
                                       VAR_5, VAR_6));
    }

  return VAR_0;
}
