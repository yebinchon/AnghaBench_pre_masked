
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct getter_baton {char const* local_abspath; int const* mime_type; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int * FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char const*,int const*) ;
 int FUNC_10 (int const**,char const*,int const*,char const*,int ,int ,int *,struct getter_baton*,int *) ;

svn_error_t *
FUNC_11(apr_hash_t **VAR_3,
                           const char *VAR_4,
                           svn_node_kind_t VAR_5,
                           const apr_hash_t *VAR_6,
                           svn_boolean_t VAR_7,
                           apr_pool_t *VAR_8,
                           apr_pool_t *VAR_9)
{
  const svn_string_t *VAR_10;
  struct getter_baton VAR_11;
  apr_hash_index_t *VAR_12;



  *VAR_3 = FUNC_2(VAR_8);



  VAR_10 = FUNC_8((apr_hash_t *)VAR_6, VAR_1);
  if (VAR_10)
    {
      FUNC_0(FUNC_10(
                &VAR_10, VAR_1, VAR_10,
                VAR_4, VAR_5, VAR_7,
                ((void*)0), ((void*)0), VAR_9));
      FUNC_9(*VAR_3, VAR_1, VAR_10);
    }


  VAR_11.mime_type = VAR_10;
  VAR_11.local_abspath = VAR_4;


  for (VAR_12 = FUNC_1(VAR_9, (apr_hash_t *)VAR_6); VAR_12;
       VAR_12 = FUNC_3(VAR_12))
    {
      const char *VAR_13 = FUNC_4(VAR_12);
      const svn_string_t *VAR_14 = FUNC_5(VAR_12);

      if (FUNC_7(VAR_13, VAR_1) == 0)
        continue;

      FUNC_0(FUNC_6(VAR_13));
      FUNC_0(FUNC_10(
                &VAR_14, VAR_13, VAR_14,
                VAR_4, VAR_5, VAR_7,
                VAR_2, &VAR_11, VAR_9));
      FUNC_9(*VAR_3, VAR_13, VAR_14);
    }

  return VAR_0;
}
