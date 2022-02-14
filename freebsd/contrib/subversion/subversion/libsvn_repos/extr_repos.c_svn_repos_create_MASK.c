
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; int db_path; int fs; int fs_type; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char const*,int *,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const**,char const*,int *) ;
 int FUNC_8 (char const*,int ,int *) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (int ,int *,int ,int ,...) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (char const*,int ,int *,int *,int *) ;
 int FUNC_17 (int ,int ,int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 char* FUNC_20 (char const*,int *) ;

svn_error_t *
FUNC_21(svn_repos_t **VAR_9,
                 const char *VAR_10,
                 const char *VAR_11,
                 const char *VAR_12,
                 apr_hash_t *VAR_13,
                 apr_hash_t *VAR_14,
                 apr_pool_t *VAR_15)
{
  svn_repos_t *VAR_16;
  svn_error_t *VAR_17;
  apr_pool_t *VAR_18 = FUNC_18(VAR_15);
  const char *VAR_19;
  const char *VAR_20;


  VAR_16 = FUNC_4(VAR_10, VAR_15);
  VAR_16->format = VAR_7;


  VAR_16->fs_type = FUNC_15(VAR_14, VAR_3,
                                         VAR_0);
  if (FUNC_14(VAR_14, VAR_4, VAR_1))
    VAR_16->format = VAR_8;


  FUNC_0(FUNC_7(&VAR_20, VAR_10, VAR_18));
  VAR_19 = FUNC_20(VAR_20, VAR_18);
  if (VAR_19 != ((void*)0))
    {
      if (FUNC_6(VAR_19, VAR_20) == 0)
        return FUNC_11(VAR_2, ((void*)0),
                                 FUNC_2("'%s' is an existing repository"),
                                 FUNC_9(VAR_19,
                                                        VAR_18));
      else
        return FUNC_11(VAR_2, ((void*)0),
                                 FUNC_2("'%s' is a subdirectory of an existing "
                                   "repository " "rooted at '%s'"),
                                 FUNC_9(VAR_20,
                                                        VAR_18),
                                 FUNC_9(VAR_19,
                                                        VAR_18));
    }


  FUNC_1(FUNC_3(VAR_16, VAR_10, VAR_14, VAR_18),
            FUNC_2("Repository creation failed"));


  FUNC_0(FUNC_5(VAR_16, VAR_1, VAR_1, VAR_18));


  if ((VAR_17 = FUNC_13(&VAR_16->fs, VAR_16->db_path, VAR_14,
                            VAR_15, VAR_18)))
    {





      FUNC_19(VAR_18);

      return FUNC_12(
                   FUNC_10(
                        VAR_17,
                        FUNC_16(VAR_10, VAR_1, ((void*)0), ((void*)0),
                                           VAR_15)));
    }


  FUNC_0(FUNC_17
          (FUNC_8(VAR_10, VAR_6, VAR_18),
           VAR_16->format, VAR_18));

  FUNC_19(VAR_18);

  *VAR_9 = VAR_16;
  return VAR_5;
}
