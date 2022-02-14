
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
struct TYPE_9__ {int pool; int working_url; int name; TYPE_2__* parent_dir; scalar_t__ url; TYPE_6__* commit_ctx; } ;
typedef TYPE_3__ dir_context_t ;
struct TYPE_10__ {char* path; } ;
typedef TYPE_4__ apr_uri_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {TYPE_1__* session; } ;
struct TYPE_8__ {int working_url; } ;
struct TYPE_7__ {TYPE_4__ session_url; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,void*,int *,int *) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(serf_bucket_t *VAR_0,
                       void *VAR_1,
                       apr_pool_t *VAR_2 ,
                       apr_pool_t *VAR_3)
{
  dir_context_t *VAR_4 = VAR_1;
  apr_uri_t VAR_5;
  const char *VAR_6;


  VAR_5 = VAR_4->commit_ctx->session->session_url;

  if (FUNC_0(VAR_4->commit_ctx))
    {
      VAR_5.path = (char *)VAR_4->url;
    }
  else
    {
      VAR_5.path = (char *)FUNC_7(
                                    VAR_4->parent_dir->working_url,
                                    VAR_4->name, VAR_2);
    }
  VAR_6 = FUNC_2(VAR_2, &VAR_5, 0);

  FUNC_3(VAR_0, "Destination", VAR_6);

  FUNC_4(VAR_0, "Depth", "infinity");
  FUNC_4(VAR_0, "Overwrite", "F");


  VAR_4->working_url = FUNC_1(VAR_4->pool, VAR_5.path);

  return FUNC_6(FUNC_5(VAR_0, VAR_1, VAR_2,
                                                      VAR_3));
}
