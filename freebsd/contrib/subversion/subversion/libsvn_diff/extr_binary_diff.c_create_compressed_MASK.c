
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int buffer ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int *,int *) ;
 int FUNC_2 (int **,int *,int *,char*,int *,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,char*,int*) ;
 int FUNC_7 (int *,char*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_file_t **VAR_4,
                  svn_filesize_t *VAR_5,
                  svn_filesize_t *VAR_6,
                  svn_stream_t *VAR_7,
                  svn_cancel_func_t VAR_8,
                  void *VAR_9,
                  apr_pool_t *VAR_10,
                  apr_pool_t *VAR_11)
{
  svn_stream_t *VAR_12;
  svn_filesize_t VAR_13 = 0;
  apr_size_t VAR_14;

  FUNC_0(FUNC_2(VAR_4, ((void*)0), ((void*)0), "diffgz",
                                     ((void*)0), VAR_3,
                                     VAR_10, VAR_11));

  VAR_12 = FUNC_4(
                  FUNC_5(*VAR_4, VAR_2, VAR_11),
                  VAR_11);

  if (VAR_7)
    do
    {
      char VAR_15[VAR_1];
      VAR_14 = sizeof(VAR_15);

      if (VAR_8)
        FUNC_0(VAR_8(VAR_9));

      FUNC_0(FUNC_6(VAR_7, VAR_15, &VAR_14));

      VAR_13 += VAR_14;
      FUNC_0(FUNC_7(VAR_12, VAR_15, &VAR_14));
    }
    while(VAR_14 == VAR_1);
  else
    {
      apr_size_t VAR_16 = 0;
      FUNC_0(FUNC_7(VAR_12, ((void*)0), &VAR_16));
    }

  FUNC_0(FUNC_3(VAR_12));

  *VAR_5 = VAR_13;
  FUNC_0(FUNC_1(VAR_6, *VAR_4, VAR_11));

  return VAR_0;
}
