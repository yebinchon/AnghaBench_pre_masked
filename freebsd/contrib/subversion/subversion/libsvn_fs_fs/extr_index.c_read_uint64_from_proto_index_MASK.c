
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int buffer ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_byte_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int*,int,int*,scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_file_t *VAR_2,
                             apr_uint64_t *VAR_3,
                             svn_boolean_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  apr_byte_t VAR_6[sizeof(*VAR_3)];
  apr_size_t VAR_7;



  FUNC_0(FUNC_2(VAR_2, VAR_6, sizeof(VAR_6),
                                 &VAR_7, VAR_4, VAR_5));
  FUNC_1((VAR_4 && *VAR_4) || VAR_7 == sizeof(VAR_6));


  if (!VAR_4 || !*VAR_4)
    {
      int VAR_8;
      apr_uint64_t VAR_9;



      VAR_9 = 0;
      for (VAR_8 = sizeof(VAR_6) - 1; VAR_8 >= 0; --VAR_8)
        VAR_9 = (VAR_9 << VAR_0) + VAR_6[VAR_8];

      *VAR_3 = VAR_9;
    }

  return VAR_1;
}
