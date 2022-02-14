
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char const* VAR_1 ;

 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int *,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_stream_t *VAR_2,
                       apr_hash_t *VAR_3,
                       apr_pool_t *VAR_4)
{
  const char **VAR_5;
  apr_hash_index_t *VAR_6;

  static const char *VAR_7[] =
  {
    128,
    ((void*)0)
  };


  for (VAR_5 = VAR_7; *VAR_5; VAR_5++)
    {
      FUNC_0(FUNC_6(VAR_2, VAR_3, *VAR_5, VAR_4));
      FUNC_5(VAR_3, *VAR_5, ((void*)0));
    }




  for (VAR_6 = FUNC_1(VAR_4, VAR_3); VAR_6; VAR_6 = FUNC_2(VAR_6))
    {
      const char *VAR_8 = FUNC_3(VAR_6);

      if (FUNC_4(VAR_8, VAR_1) != 0)
        FUNC_0(FUNC_6(VAR_2, VAR_3, VAR_8, VAR_4));
    }


  FUNC_0(FUNC_6(VAR_2, VAR_3, VAR_1,
                       VAR_4));

  return VAR_0;
}
