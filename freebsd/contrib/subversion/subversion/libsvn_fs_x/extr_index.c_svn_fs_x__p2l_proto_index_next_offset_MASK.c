
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,scalar_t__*,int *,int *) ;
 int FUNC_2 (int *,int ,scalar_t__*,int *) ;

svn_error_t *
FUNC_3(apr_off_t *VAR_3,
                                      apr_file_t *VAR_4,
                                      apr_pool_t *VAR_5)
{
  apr_off_t VAR_6 = 0;


  FUNC_0(FUNC_2(VAR_4, VAR_0, &VAR_6, VAR_5));
  if (VAR_6 == 0)
    {
      *VAR_3 = 0;
    }
  else
    {

      VAR_6 -= sizeof(apr_uint64_t);
      FUNC_0(FUNC_2(VAR_4, VAR_1, &VAR_6, VAR_5));
      FUNC_0(FUNC_1(VAR_4, VAR_3, ((void*)0),
                                          VAR_5));
    }

  return VAR_2;
}
