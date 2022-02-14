
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int ptrdiff_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (unsigned char const**,unsigned char const*,int *,int) ;
 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,unsigned char const**,unsigned char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_time_t *VAR_5,
               apr_time_t *VAR_6,
               const unsigned char **VAR_7,
               const unsigned char *VAR_8,
               apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;
  ptrdiff_t VAR_11;

  VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_11, VAR_0 | VAR_1);
  if (VAR_10)
    return FUNC_2(VAR_3, VAR_10, ((void*)0));

  VAR_8 = *VAR_7 + VAR_11;

  FUNC_0(FUNC_3(VAR_5, VAR_7, VAR_8, VAR_9));

  FUNC_0(FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9));

  if (*VAR_7 != VAR_8)
    {
      VAR_10 = FUNC_2(VAR_2, ((void*)0), ((void*)0));
      return FUNC_2(VAR_3, VAR_10, ((void*)0));
    }

  return VAR_4;
}
