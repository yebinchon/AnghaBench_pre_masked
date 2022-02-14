
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,int*) ;
 scalar_t__ FUNC_2 (int *,char*,int,int *) ;

__attribute__((used)) static apr_status_t
FUNC_3(apr_file_t *VAR_2,
              apr_file_t *VAR_3,
              apr_pool_t *VAR_4)
{

  while (1)
    {
      char VAR_5[VAR_1];
      apr_size_t VAR_6 = sizeof(VAR_5);
      apr_status_t VAR_7;
      apr_status_t VAR_8;


      VAR_7 = FUNC_1(VAR_2, VAR_5, &VAR_6);
      if (VAR_7 && !FUNC_0(VAR_7))
        {
          return VAR_7;
        }


      VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_6, ((void*)0));
      if (VAR_8)
        {
          return VAR_8;
        }

      if (VAR_7 && FUNC_0(VAR_7))
        {

          return VAR_0;
        }
    }

}
