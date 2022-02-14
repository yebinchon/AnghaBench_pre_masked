
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_17__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_16__ {char* path; } ;
struct TYPE_18__ {char* vcc_url; int pool; void* uuid; TYPE_14__ repos_root; scalar_t__ repos_root_str; TYPE_14__ session_url; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
struct TYPE_19__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,TYPE_14__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 char* FUNC_11 (int *,char*) ;
 TYPE_3__* FUNC_12 (int **,TYPE_2__*,char const*,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_13 (char const*,int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 char* FUNC_15 (char const*,int *) ;

svn_error_t *
FUNC_16(const char **VAR_7,
                          svn_ra_serf__session_t *VAR_8,
                          apr_pool_t *VAR_9)
{
  const char *VAR_10;
  const char *VAR_11;
  const char *VAR_12;


  if (VAR_8->vcc_url && VAR_8->repos_root_str)
    {
      *VAR_7 = VAR_8->vcc_url;
      return VAR_5;
    }

  VAR_10 = VAR_8->session_url.path;
  *VAR_7 = ((void*)0);
  VAR_12 = ((void*)0);

  do
    {
      apr_hash_t *VAR_13;
      svn_error_t *VAR_14;

      VAR_14 = FUNC_12(&VAR_13, VAR_8,
                                          VAR_10, VAR_4,
                                          VAR_6,
                                          VAR_9, VAR_9);
      if (! VAR_14)
        {
          apr_hash_t *VAR_15;

          VAR_15 = FUNC_1(VAR_13, "DAV:", 4);
          *VAR_7 = FUNC_11(VAR_15,
                                        "version-controlled-configuration");

          VAR_15 = FUNC_8(VAR_13, VAR_0);
          VAR_11 = FUNC_11(VAR_15,
                                             "baseline-relative-path");
          VAR_12 = FUNC_11(VAR_15, "repository-uuid");
          break;
        }
      else
        {
          if ((VAR_14->apr_err != VAR_1) &&
              (VAR_14->apr_err != VAR_2))
            {
              return FUNC_6(VAR_14);
            }
          else
            {

              FUNC_4(VAR_14);


              VAR_10 = FUNC_15(VAR_10, VAR_9);
            }
        }
    }
  while ((VAR_10[0] != '\0')
         && (! (VAR_10[0] == '/' && VAR_10[1] == '\0')));

  if (!*VAR_7)
    {
      return FUNC_5(VAR_3, ((void*)0),
                              FUNC_0("The PROPFIND response did not include the "
                                "requested version-controlled-configuration "
                                "value"));
    }


  if (!VAR_8->vcc_url)
    {
      VAR_8->vcc_url = FUNC_2(VAR_8->pool, *VAR_7);
    }


  if (!VAR_8->repos_root_str)
    {
      svn_stringbuf_t *VAR_16;

      VAR_16 = FUNC_13(VAR_10, VAR_9);

      FUNC_10(VAR_16,
                                 FUNC_9(VAR_11));


      VAR_8->repos_root = VAR_8->session_url;
      VAR_8->repos_root.path =
        (char *)FUNC_7(VAR_16->data, VAR_8->pool);
      VAR_8->repos_root_str =
        FUNC_14(FUNC_3(VAR_8->pool,
                                                  &VAR_8->repos_root, 0),
                                  VAR_8->pool);
    }


  if (!VAR_8->uuid)
    {
      VAR_8->uuid = FUNC_2(VAR_8->pool, VAR_12);
    }

  return VAR_5;
}
