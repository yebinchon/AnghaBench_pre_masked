
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_access_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int **,int *) ;
 char* FUNC_8 (char const*,void const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_t *VAR_1,
                  const char *VAR_2,
                  apr_hash_t *VAR_3,
                  apr_pool_t *VAR_4,
                  apr_pool_t *VAR_5)
{
  if (VAR_3)
    {
      svn_fs_access_t *VAR_6;

      FUNC_0(FUNC_7(&VAR_6, VAR_1));



      if (VAR_6)
        {
          apr_hash_index_t *VAR_7;




          for (VAR_7 = FUNC_1(VAR_5, VAR_3); VAR_7;
               VAR_7 = FUNC_2(VAR_7))
            {
              const void *VAR_8 = FUNC_3(VAR_7);
              const char *VAR_9 = FUNC_4(VAR_7);
              const char *VAR_10;


              VAR_10 = FUNC_8(VAR_2, VAR_8, VAR_4);


              VAR_9 = FUNC_5(VAR_4, VAR_9);

              FUNC_0(FUNC_6(VAR_6, VAR_10,
                                                    VAR_9));
            }
        }
    }

  return VAR_0;
}
