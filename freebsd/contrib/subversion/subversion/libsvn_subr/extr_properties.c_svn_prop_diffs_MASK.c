
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int * value; void const* name; } ;
typedef TYPE_1__ svn_prop_t ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,void const*,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 int FUNC_6 (int const*,int const*) ;
 void* FUNC_7 (int const*,int *) ;

svn_error_t *
FUNC_8(apr_array_header_t **VAR_1,
               const apr_hash_t *VAR_2,
               const apr_hash_t *VAR_3,
               apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  apr_array_header_t *VAR_6 = FUNC_0(VAR_4, 1, sizeof(svn_prop_t));







  for (VAR_5 = FUNC_2(VAR_4, (apr_hash_t *)VAR_3); VAR_5;
       VAR_5 = FUNC_4(VAR_5))
    {
      const void *VAR_7;
      apr_ssize_t VAR_8;
      void *VAR_9;
      const svn_string_t *VAR_10, *VAR_11;


      FUNC_5(VAR_5, &VAR_7, &VAR_8, &VAR_9);
      VAR_10 = VAR_9;


      VAR_11 = FUNC_3((apr_hash_t *)VAR_2, VAR_7, VAR_8);

      if (VAR_11 == ((void*)0))
        {

          svn_prop_t *VAR_12 = FUNC_1(VAR_6);
          VAR_12->name = VAR_7;
          VAR_12->value = ((void*)0);
        }
      else if (! FUNC_6(VAR_10, VAR_11))
        {

          svn_prop_t *VAR_13 = FUNC_1(VAR_6);
          VAR_13->name = VAR_7;
          VAR_13->value = FUNC_7(VAR_11, VAR_4);
        }
    }



  for (VAR_5 = FUNC_2(VAR_4, (apr_hash_t *)VAR_2); VAR_5;
       VAR_5 = FUNC_4(VAR_5))
    {
      const void *VAR_14;
      apr_ssize_t VAR_15;
      void *VAR_16;
      const svn_string_t *VAR_17;


      FUNC_5(VAR_5, &VAR_14, &VAR_15, &VAR_16);
      VAR_17 = VAR_16;


      if (((void*)0) == FUNC_3((apr_hash_t *)VAR_3, VAR_14, VAR_15))
        {

          svn_prop_t *VAR_18 = FUNC_1(VAR_6);
          VAR_18->name = VAR_14;
          VAR_18->value = FUNC_7(VAR_17, VAR_4);
        }
    }


  *VAR_1 = VAR_6;

  return VAR_0;
}
