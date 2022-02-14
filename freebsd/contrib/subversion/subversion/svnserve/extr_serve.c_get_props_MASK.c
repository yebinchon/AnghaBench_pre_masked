
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int server; } ;
typedef TYPE_1__ authz_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const**,int *) ;
 int FUNC_3 (int **,int *,char const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int **,int *,char const*,int *,int ,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *,char const**,char const**,int *,char const*,int *) ;
 int * FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t **VAR_5,
          apr_array_header_t **VAR_6,
          authz_baton_t *VAR_7,
          svn_fs_root_t *VAR_8,
          const char *VAR_9,
          apr_pool_t *VAR_10)
{

  if (VAR_5)
    {
      svn_string_t *VAR_11;
      svn_revnum_t VAR_12;
      const char *VAR_13, *VAR_14, *VAR_15;

      FUNC_0(FUNC_3(VAR_5, VAR_8, VAR_9, VAR_10));


      FUNC_0(FUNC_7(&VAR_12, &VAR_13, &VAR_14, VAR_8,
                                           VAR_9, VAR_10));
      VAR_11 = FUNC_9(VAR_10, "%ld", VAR_12);
      FUNC_5(*VAR_5, VAR_2, VAR_11);
      VAR_11 = (VAR_13) ? FUNC_8(VAR_13, VAR_10) : ((void*)0);
      FUNC_5(*VAR_5, VAR_1, VAR_11);
      VAR_11 = (VAR_14) ? FUNC_8(VAR_14, VAR_10) : ((void*)0);
      FUNC_5(*VAR_5, VAR_3, VAR_11);


      FUNC_0(FUNC_2(FUNC_4(VAR_8), &VAR_15, VAR_10));
      VAR_11 = (VAR_15) ? FUNC_8(VAR_15, VAR_10) : ((void*)0);
      FUNC_5(*VAR_5, VAR_4, VAR_11);
    }


  if (VAR_6)
    {
      FUNC_0(FUNC_6(
                VAR_6, VAR_8, VAR_9, ((void*)0),
                FUNC_1(VAR_7->server),
                VAR_7, VAR_10, VAR_10));
    }

  return VAR_0;
}
