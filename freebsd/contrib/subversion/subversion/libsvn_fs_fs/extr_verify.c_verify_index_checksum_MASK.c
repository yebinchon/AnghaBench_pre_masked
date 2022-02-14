
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int buffer ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int *,int ,char const*,char const*) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (char const**,int *,int *) ;
 int FUNC_8 (int *,unsigned char*,int,int *,int *,int *) ;
 int FUNC_9 (int *,int ,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_file_t *VAR_4,
                      const char *VAR_5,
                      apr_off_t VAR_6,
                      apr_off_t VAR_7,
                      svn_checksum_t *VAR_8,
                      svn_cancel_func_t VAR_9,
                      void *VAR_10,
                      apr_pool_t *VAR_11)
{
  unsigned char VAR_12[VAR_2];
  apr_off_t VAR_13 = VAR_7 - VAR_6;
  svn_checksum_t *VAR_14;
  svn_checksum_ctx_t *VAR_15
    = FUNC_2(VAR_3, VAR_11);


  FUNC_0(FUNC_9(VAR_4, VAR_0, &VAR_6, VAR_11));
  while (VAR_13 > 0)
    {
      apr_size_t VAR_16 = VAR_13 > sizeof(VAR_12)
                         ? sizeof(VAR_12)
                         : (apr_size_t)VAR_13;
      FUNC_0(FUNC_8(VAR_4, VAR_12, VAR_16, ((void*)0), ((void*)0),
                                     VAR_11));
      FUNC_0(FUNC_6(VAR_15, VAR_12, VAR_16));
      VAR_13 -= VAR_16;

      if (VAR_9)
        FUNC_0(VAR_9(VAR_10));
    }

  FUNC_0(FUNC_3(&VAR_14, VAR_15, VAR_11));


  if (!FUNC_4(VAR_8, VAR_14))
    {
      const char *VAR_17;

      FUNC_0(FUNC_7(&VAR_17, VAR_4, VAR_11));
      FUNC_0(FUNC_5(VAR_8, VAR_14, VAR_11,
                                        FUNC_1("%s checksum mismatch in file %s"),
                                        VAR_5, VAR_17));
    }

  return VAR_1;
}
