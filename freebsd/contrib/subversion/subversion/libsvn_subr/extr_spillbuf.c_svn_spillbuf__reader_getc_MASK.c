
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_reader_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (scalar_t__*,int *,char*,int,int *) ;

svn_error_t *
FUNC_3(char *VAR_2,
                          svn_spillbuf_reader_t *VAR_3,
                          apr_pool_t *VAR_4)
{
  apr_size_t VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_2, 1, VAR_4));
  if (VAR_5 == 0)
    return FUNC_1(VAR_0, ((void*)0), ((void*)0));

  return VAR_1;
}
