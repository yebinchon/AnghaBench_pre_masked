
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_8__ {scalar_t__ url; TYPE_2__* commit_ctx; } ;
typedef TYPE_3__ file_context_t ;
struct TYPE_9__ {char* path; } ;
typedef TYPE_4__ apr_uri_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {TYPE_1__* session; } ;
struct TYPE_6__ {TYPE_4__ session_url; } ;


 int * VAR_0 ;
 char* FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(serf_bucket_t *VAR_1,
                        void *VAR_2,
                        apr_pool_t *VAR_3 ,
                        apr_pool_t *VAR_4)
{
  file_context_t *VAR_5 = VAR_2;
  apr_uri_t VAR_6;
  const char *VAR_7;


  VAR_6 = VAR_5->commit_ctx->session->session_url;
  VAR_6.path = (char*)VAR_5->url;
  VAR_7 = FUNC_0(VAR_3, &VAR_6, 0);

  FUNC_1(VAR_1, "Destination", VAR_7);

  FUNC_2(VAR_1, "Overwrite", "F");

  return VAR_0;
}
