
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_repos__config_pool_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {char const* realm; void* hooks_env; int repos; int fs; scalar_t__ use_sasl; int max_ssf; int min_ssf; int repos_root; int base; int * repos_name; int * authz_repos_name; int repos_url; TYPE_1__* fs_path; int capabilities; } ;
typedef TYPE_3__ repository_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 char* FUNC_1 (char*) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_3__*,int *,scalar_t__) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char const**,int ,int ,char*) ;
 int FUNC_11 (int *,scalar_t__*,int ,char const*,scalar_t__) ;
 int FUNC_12 (int *,char const*) ;
 int * FUNC_13 (int ,int *) ;
 int FUNC_14 (char const*,int *) ;
 char* FUNC_15 (char const*,int *) ;
 int * FUNC_16 (char const*,int ,int *) ;
 char* FUNC_17 (int ,char const*,int *) ;
 int * FUNC_18 (int ,int *,char*) ;
 int * FUNC_19 (int ,int *,char*,char const*) ;
 int FUNC_20 (int ,char const**,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 char* FUNC_23 (char const*,int *) ;
 int * FUNC_24 (int *,int *) ;
 char* FUNC_25 (char const*,int *) ;
 int FUNC_26 (int **,int *,int ,scalar_t__,int ,int *) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (char const*,int *) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,char const*,int *) ;
 int FUNC_31 (int *,int ,int *,int *,int *) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,int *) ;
 void* FUNC_34 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_35(const char *VAR_13,
           const char *VAR_14,
           svn_boolean_t VAR_15,
           svn_boolean_t VAR_16,
           svn_config_t *VAR_17,
           repository_t *VAR_18,
           svn_repos__config_pool_t *VAR_19,
           apr_hash_t *VAR_20,
           apr_pool_t *VAR_21,
           apr_pool_t *VAR_22)
{
  const char *VAR_23, *VAR_24, *VAR_25, *VAR_26;
  svn_stringbuf_t *VAR_27;
  svn_boolean_t VAR_28;


  VAR_23 = FUNC_7(VAR_13);
  if (VAR_23 == ((void*)0))
    return FUNC_19(VAR_10, ((void*)0),
                             "Non-svn URL passed to svn server: '%s'", VAR_13);

  if (! VAR_15)
    {
      VAR_23 = FUNC_8(VAR_23, '/');
      if (VAR_23 == ((void*)0))
        VAR_23 = "";
    }
  VAR_23 = FUNC_25(VAR_23, VAR_22);
  VAR_23 = FUNC_23(VAR_23, VAR_22);



  if (!FUNC_5(VAR_23))
    return FUNC_18(VAR_9, ((void*)0),
                            "Couldn't determine repository path");


  VAR_24 = FUNC_17(FUNC_14(VAR_14, VAR_22),
                              VAR_23, VAR_22);


  VAR_18->repos_root = FUNC_28(VAR_24, VAR_21);
  if (!VAR_18->repos_root)
    return FUNC_19(VAR_11, ((void*)0),
                             "No repository found in '%s'", VAR_13);


  FUNC_0(FUNC_31(&VAR_18->repos, VAR_18->repos_root,
                          VAR_20, VAR_21, VAR_22));
  FUNC_0(FUNC_32(VAR_18->repos,
                                                 VAR_18->capabilities));
  VAR_18->fs = FUNC_29(VAR_18->repos);
  VAR_25 = VAR_24 + FUNC_9(VAR_18->repos_root);
  VAR_18->fs_path = FUNC_34(*VAR_25 ? VAR_25 : "/",
                                             VAR_21);
  VAR_27 = FUNC_34(VAR_13, VAR_21);
  FUNC_22(VAR_27,
                        FUNC_21(VAR_18->fs_path->data));
  VAR_18->repos_url = VAR_27->data;
  VAR_18->authz_repos_name = FUNC_16(VAR_14,
                                                     VAR_18->repos_root,
                                                     VAR_21);
  if (VAR_18->authz_repos_name == ((void*)0))
    VAR_18->repos_name = FUNC_13(VAR_18->repos_root,
                                                 VAR_21);
  else
    VAR_18->repos_name = VAR_18->authz_repos_name;
  VAR_18->repos_name = FUNC_24(VAR_18->repos_name,
                                               VAR_21);



  if (((void*)0) == VAR_17)
    {
      VAR_18->base = FUNC_27(VAR_18->repos, VAR_21);

      FUNC_0(FUNC_26(&VAR_17, VAR_19,
                                         FUNC_33
                                            (VAR_18->repos, VAR_21),
                                         VAR_0, VAR_18->repos,
                                         VAR_21));
    }

  FUNC_0(FUNC_4(VAR_18, VAR_17, VAR_19, VAR_21));
  FUNC_0(FUNC_3(VAR_18, VAR_18->repos_root, VAR_17,
                            VAR_21));


  FUNC_0(FUNC_11(VAR_17, &VAR_28,
                              VAR_7,
                              VAR_5, VAR_0));
  if (VAR_28)
    {
      return FUNC_19(VAR_8, ((void*)0),
                               FUNC_1("SASL requested but not compiled in; "
                                 "set '%s' to 'false' or recompile "
                                 "svnserve with SASL support"),
                               VAR_5);

    }
  else
    {
      VAR_18->use_sasl = VAR_0;
    }


  FUNC_0(FUNC_20(VAR_18->fs, &VAR_18->realm, VAR_22));
  FUNC_10(VAR_17, &VAR_18->realm, VAR_6,
                 VAR_4, VAR_18->realm);
  VAR_18->realm = FUNC_2(VAR_21, VAR_18->realm);





  FUNC_6(VAR_18, VAR_17, VAR_16);


  FUNC_10(VAR_17, &VAR_26, VAR_6,
                 VAR_1, ((void*)0));
  if (VAR_26)
    VAR_26 = FUNC_15(VAR_26, VAR_22);

  FUNC_0(FUNC_30(VAR_18->repos, VAR_26, VAR_22));
  VAR_18->hooks_env = FUNC_2(VAR_21, VAR_26);

  return VAR_12;
}
