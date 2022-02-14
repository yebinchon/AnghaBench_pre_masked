
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_rangelist_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int * FUNC_9 (TYPE_1__**,int *,int *) ;
 char* FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_string_t **VAR_0,
                       const svn_string_t *VAR_1,
                       const char *VAR_2,
                       apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4, *VAR_5;
  apr_hash_index_t *VAR_6;

  FUNC_0(FUNC_8(&VAR_5, VAR_1->data, VAR_3));
  VAR_4 = FUNC_2(VAR_3);
  for (VAR_6 = FUNC_1(VAR_3, VAR_5); VAR_6; VAR_6 = FUNC_3(VAR_6))
    {
      const char *VAR_7 = FUNC_4(VAR_6);
      svn_rangelist_t *VAR_8 = FUNC_5(VAR_6);
      const char *VAR_9;

      VAR_7 = FUNC_10(VAR_7, VAR_3);


      VAR_9 = FUNC_6(FUNC_11(VAR_2,
                                                       VAR_7, VAR_3),
                                      VAR_3);
      FUNC_7(VAR_4, VAR_9, VAR_8);
    }
  return FUNC_9(VAR_0, VAR_4, VAR_3);
}
