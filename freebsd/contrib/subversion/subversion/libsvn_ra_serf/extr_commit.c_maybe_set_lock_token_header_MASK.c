
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_7__ {TYPE_1__* session; int lock_tokens; int deleted_entries; } ;
typedef TYPE_2__ commit_context_t ;
struct TYPE_8__ {char* path; } ;
typedef TYPE_3__ apr_uri_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {TYPE_3__ session_url; } ;


 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*,char const*,char*,char const*,char*,int ) ;
 char* FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,char*,char const*) ;
 char* FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t *VAR_2,
                            commit_context_t *VAR_3,
                            const char *VAR_4,
                            apr_pool_t *VAR_5)
{
  const char *VAR_6;

  if (! VAR_3->lock_tokens)
    return VAR_0;

  if (! FUNC_3(VAR_3->deleted_entries, VAR_4))
    {
      VAR_6 = FUNC_3(VAR_3->lock_tokens, VAR_4);
      if (VAR_6)
        {
          const char *VAR_7;
          const char *VAR_8;
          apr_uri_t VAR_9 = VAR_3->session->session_url;




          VAR_9.path = (char *)FUNC_4(VAR_9.path, VAR_4,
                                                         VAR_5);
          VAR_8 = FUNC_1(VAR_5, &VAR_9, 0);

          VAR_7 = FUNC_0(VAR_5, "<", VAR_8, "> (<", VAR_6, ">)",
                                     VAR_1);
          FUNC_2(VAR_2, "If", VAR_7);
        }
    }

  return VAR_0;
}
