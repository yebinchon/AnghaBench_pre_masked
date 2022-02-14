
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(char **VAR_1,
                svn_filesize_t *VAR_2,
                svn_stream_t *VAR_3,
                apr_size_t VAR_4,
                apr_pool_t *VAR_5)
{
  char *VAR_6 = FUNC_1(VAR_5, VAR_4 + 1);
  apr_size_t VAR_7;
  char VAR_8;

  VAR_7 = VAR_4;
  FUNC_0(FUNC_5(VAR_3, VAR_6, &VAR_7));
  *VAR_2 += VAR_7;
  if (VAR_7 != VAR_4)
    return FUNC_4(FUNC_3());
  VAR_6[VAR_4] = '\0';


  VAR_7 = 1;
  FUNC_0(FUNC_5(VAR_3, &VAR_8, &VAR_7));
  *VAR_2 += VAR_7;
  if (VAR_7 != 1)
    return FUNC_4(FUNC_3());
  if (VAR_8 != '\n')
    return FUNC_4(FUNC_2());

  *VAR_1 = VAR_6;
  return VAR_0;
}
