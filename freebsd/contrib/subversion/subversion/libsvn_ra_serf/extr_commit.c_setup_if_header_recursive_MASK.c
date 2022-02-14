
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int serf_bucket_t ;
struct TYPE_12__ {TYPE_1__* session; int deleted_entries; int lock_tokens; } ;
typedef TYPE_3__ commit_context_t ;
struct TYPE_13__ {char* path; } ;
typedef TYPE_4__ apr_uri_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_10__ {TYPE_4__ session_url; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *,TYPE_4__*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int ,char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*,char const*) ;
 int FUNC_12 (TYPE_2__*,char) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_14 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_boolean_t *VAR_3,
                          serf_bucket_t *VAR_4,
                          commit_context_t *VAR_5,
                          const char *VAR_6,
                          apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8 = ((void*)0);
  apr_hash_index_t *VAR_9;
  apr_pool_t *VAR_10 = ((void*)0);

  if (!VAR_5->lock_tokens)
    {
      *VAR_3 = VAR_0;
      return VAR_1;
    }
  for (VAR_9 = FUNC_0(VAR_7, VAR_5->lock_tokens);
       VAR_9;
       VAR_9 = FUNC_1(VAR_9))
    {
      const char *VAR_11 = FUNC_2(VAR_9);
      apr_uri_t VAR_12;

      if (!FUNC_11(VAR_6, VAR_11))
        continue;
      else if (FUNC_6(VAR_5->deleted_entries, VAR_11))
        {



          continue;
        }

      if (!VAR_10)
        VAR_10 = FUNC_9(VAR_7);
      else
        FUNC_8(VAR_10);

      if (VAR_8 == ((void*)0))
        VAR_8 = FUNC_14("", VAR_7);
      else
        FUNC_12(VAR_8, ' ');

      VAR_12 = VAR_5->session->session_url;
      VAR_12.path = (char *)FUNC_7(VAR_12.path, VAR_11,
                                                    VAR_10);

      FUNC_12(VAR_8, '<');
      FUNC_13(VAR_8, FUNC_4(VAR_10, &VAR_12, 0));
      FUNC_13(VAR_8, "> (<");
      FUNC_13(VAR_8, FUNC_3(VAR_9));
      FUNC_13(VAR_8, ">)");
    }

  if (VAR_10)
    FUNC_10(VAR_10);

  if (VAR_8)
    {
      FUNC_5(VAR_4, "If", VAR_8->data);
      *VAR_3 = VAR_2;
    }
  else
    *VAR_3 = VAR_0;

  return VAR_1;
}
