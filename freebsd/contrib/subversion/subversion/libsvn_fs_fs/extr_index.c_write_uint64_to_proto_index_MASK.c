
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int svn_error_t ;
typedef int buffer ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef scalar_t__ apr_byte_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *,scalar_t__*,int,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_file_t *VAR_2,
                            apr_uint64_t VAR_3,
                            apr_pool_t *VAR_4)
{
  apr_byte_t VAR_5[sizeof(VAR_3)];
  int VAR_6;
  apr_size_t VAR_7;


  for (VAR_6 = 0; VAR_6 < sizeof(VAR_5); ++VAR_6)
    {

      VAR_5[VAR_6] = (apr_byte_t)VAR_3;
      VAR_3 >>= VAR_0;
    }


  FUNC_0(FUNC_2(VAR_2, VAR_5, sizeof(VAR_5),
                                 &VAR_7, VAR_4));
  FUNC_1(VAR_7 == sizeof(VAR_5));

  return VAR_1;
}
