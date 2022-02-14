
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_16__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_15__ {char* path; } ;
struct TYPE_17__ {TYPE_1__ session_url; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
typedef int svn_node_kind_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_7 (char const*,char const*,int *) ;
 char* FUNC_8 (int *,char*) ;
 TYPE_4__* FUNC_9 (int **,TYPE_3__*,char const*,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_10 (char const**,int *,TYPE_3__*,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_11(svn_ra_session_t *VAR_8,
                        const char *VAR_9,
                        svn_revnum_t VAR_10,
                        svn_node_kind_t *VAR_11,
                        apr_pool_t *VAR_12)
{
  svn_ra_serf__session_t *VAR_13 = VAR_8->priv;
  apr_hash_t *VAR_14;
  svn_error_t *VAR_15;
  const char *VAR_16;

  VAR_16 = VAR_13->session_url.path;


  if (VAR_9)
    VAR_16 = FUNC_7(VAR_16, VAR_9, VAR_12);



  if (FUNC_1(VAR_10))
    {
      FUNC_0(FUNC_10(&VAR_16, ((void*)0) ,
                                          VAR_13,
                                          VAR_16, VAR_10,
                                          VAR_12, VAR_12));
    }



  VAR_15 = FUNC_9(&VAR_14, VAR_13,
                                      VAR_16, VAR_2,
                                      VAR_4,
                                      VAR_12, VAR_12);

  if (VAR_15 && VAR_15->apr_err == VAR_0)
    {
      FUNC_5(VAR_15);
      *VAR_11 = VAR_7;
    }
  else
    {
      apr_hash_t *VAR_17;
      const char *VAR_18;


      FUNC_0(VAR_15);

      VAR_17 = FUNC_3(VAR_14, "DAV:", 4);
      VAR_18 = FUNC_8(VAR_17, "resourcetype");
      if (!VAR_18)
        {

          return FUNC_6(VAR_1, ((void*)0),
                                 FUNC_2("The PROPFIND response did not include the "
                                   "requested resourcetype value"));
        }

      if (FUNC_4(VAR_18, "collection") == 0)
        *VAR_11 = VAR_5;
      else
        *VAR_11 = VAR_6;
    }

  return VAR_3;
}
