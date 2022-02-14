
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
typedef int apr_file_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int **,int ,int *) ;
 char* FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (char*,int *) ;
 int FUNC_10 (int *,char*,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_file_t **VAR_0, apr_hash_t *VAR_1,
                   apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_9("LOCK-TOKENS:\n", VAR_2);
  apr_hash_index_t *VAR_4;

  for (VAR_4 = FUNC_0(VAR_2, VAR_1); VAR_4;
       VAR_4 = FUNC_1(VAR_4))
    {
      const char *VAR_5 = FUNC_2(VAR_4);
      const char *VAR_6 = FUNC_3(VAR_4);

      if (VAR_6 == (const char *) 1)
        {


          VAR_6 = "";
        }
      else
        {
          VAR_6 = FUNC_5(VAR_6, VAR_2);
        }

      FUNC_8(VAR_3,
          FUNC_10(VAR_2, "%s|%s\n", VAR_6, VAR_5));
    }

  FUNC_7(VAR_3, "\n");
  return FUNC_4(VAR_0,
                          FUNC_6(VAR_3), VAR_2);
}
