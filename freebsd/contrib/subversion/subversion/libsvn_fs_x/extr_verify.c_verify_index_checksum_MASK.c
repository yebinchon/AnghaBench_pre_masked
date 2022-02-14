
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_3__ {int end; int start; int checksum; } ;
typedef TYPE_1__ svn_fs_x__index_info_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int buffer ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,int *,int ,char const*,char const*) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (char const**,int *,int *) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_fs_x__revision_file_t *VAR_3,
                      const char *VAR_4,
                      svn_fs_x__index_info_t *VAR_5,
                      svn_cancel_func_t VAR_6,
                      void *VAR_7,
                      apr_pool_t *VAR_8)
{
  unsigned char VAR_9[VAR_1];
  apr_off_t VAR_10 = VAR_5->end - VAR_5->start;
  svn_checksum_t *VAR_11;
  svn_checksum_ctx_t *VAR_12
    = FUNC_2(VAR_2, VAR_8);


  FUNC_0(FUNC_9(VAR_3, ((void*)0), VAR_5->start));
  while (VAR_10 > 0)
    {
      apr_size_t VAR_13 = VAR_10 > sizeof(VAR_9)
                         ? sizeof(VAR_9)
                         : (apr_size_t)VAR_10;
      FUNC_0(FUNC_8(VAR_3, VAR_9, VAR_13));
      FUNC_0(FUNC_6(VAR_12, VAR_9, VAR_13));
      VAR_10 -= VAR_13;

      if (VAR_6)
        FUNC_0(VAR_6(VAR_7));
    }

  FUNC_0(FUNC_3(&VAR_11, VAR_12, VAR_8));


  if (!FUNC_4(VAR_5->checksum, VAR_11))
    {
      const char *VAR_14;

      FUNC_0(FUNC_7(&VAR_14, VAR_3, VAR_8));
      FUNC_0(FUNC_5(VAR_5->checksum, VAR_11,
                                        VAR_8,
                                        FUNC_1("%s checksum mismatch in file %s"),
                                        VAR_4, VAR_14));
    }

  return VAR_0;
}
