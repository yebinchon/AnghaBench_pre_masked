
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,char const*,int,int ,int *) ;
 int * FUNC_5 (int *,void const*,int ,int *,int *) ;
 int FUNC_6 (char const*,int ,int *) ;

svn_error_t *
FUNC_7(const char *VAR_6,
                         const void *VAR_7,
                         apr_size_t VAR_8,
                         apr_pool_t *VAR_9)
{
  apr_file_t *VAR_10;
  apr_size_t VAR_11;
  svn_error_t *VAR_12 = VAR_4;

  FUNC_0(FUNC_4(&VAR_10, VAR_6,
                           (VAR_3 | VAR_0 | VAR_1),
                           VAR_2,
                           VAR_9));
  if (VAR_8)
    VAR_12 = FUNC_5(VAR_10, VAR_7, VAR_8, &VAR_11,
                                 VAR_9);

  VAR_12 = FUNC_1(
                    VAR_12,
                    FUNC_3(VAR_10, VAR_9));

  if (VAR_12)
    {



      return FUNC_2(
                FUNC_1(
                    VAR_12,
                    FUNC_6(VAR_6, VAR_5, VAR_9)));
    }

  return VAR_4;
}
