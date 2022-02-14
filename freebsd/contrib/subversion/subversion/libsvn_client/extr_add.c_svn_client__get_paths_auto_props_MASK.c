
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_magic__cookie_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int mimetypes_map; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char const**,scalar_t__*,int ,char const*,int *,int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const**,char const*,int ,int *) ;
 int FUNC_12 (scalar_t__*,char const*,int *) ;
 int FUNC_13 (char const**,char const*,int *,int *,int *) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (int *) ;

svn_error_t *
FUNC_16(apr_hash_t **VAR_4,
                                 const char **VAR_5,
                                 const char *VAR_6,
                                 svn_magic__cookie_t *VAR_7,
                                 apr_hash_t *VAR_8,
                                 svn_client_ctx_t *VAR_9,
                                 apr_pool_t *VAR_10,
                                 apr_pool_t *VAR_11)
{
  apr_hash_index_t *VAR_12;
  svn_boolean_t VAR_13 = VAR_0;

  *VAR_4 = FUNC_2(VAR_10);
  *VAR_5 = ((void*)0);

  if (VAR_8)
    {
      for (VAR_12 = FUNC_1(VAR_11, VAR_8);
           VAR_12 != ((void*)0);
           VAR_12 = FUNC_3(VAR_12))
        {
          const char *VAR_14 = FUNC_5(VAR_12);
          apr_hash_t *VAR_15 = FUNC_6(VAR_12);

          FUNC_7(*VAR_4, VAR_5, &VAR_13,
                                     FUNC_10(VAR_6, VAR_11),
                                     VAR_14, VAR_15, VAR_11);
        }
    }


  if (! *VAR_5)
    {
      FUNC_0(FUNC_11(VAR_5, VAR_6, VAR_9->mimetypes_map,
                                      VAR_10));



      if (VAR_7 &&
          (!*VAR_5 ||
           FUNC_8(*VAR_5, "application/octet-stream") == 0))
        {
          const char *VAR_16;
          FUNC_0(FUNC_13(&VAR_16,
                                                    VAR_6, VAR_7,
                                                    VAR_10,
                                                    VAR_11));
          if (VAR_16)
            *VAR_5 = VAR_16;
        }

      if (*VAR_5)
        FUNC_4(*VAR_4, VAR_3,
                     FUNC_9(VAR_3),
                     FUNC_14(*VAR_5, VAR_10));
    }


  if (! VAR_13)
    {
      svn_boolean_t VAR_17 = VAR_0;
      FUNC_0(FUNC_12(&VAR_17, VAR_6, VAR_11));
      if (VAR_17)
        FUNC_4(*VAR_4, VAR_2,
                     FUNC_9(VAR_2),
                     FUNC_15(VAR_10));
    }

  return VAR_1;
}
