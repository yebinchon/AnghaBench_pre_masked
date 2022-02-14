
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int **,int *,int *,char const*,int ,int *,int *) ;
 int FUNC_3 (int **,int *,int *,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_4 (scalar_t__,int *,scalar_t__,int *,int *,int *) ;
 int FUNC_5 (int *,int ,scalar_t__*,int *) ;
 int FUNC_6 (int *,unsigned char*,int,int *,int *) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_2,
                          apr_file_t *VAR_3,
                          const char *VAR_4,
                          const char *VAR_5,
                          svn_revnum_t VAR_6,
                          apr_pool_t *VAR_7)
{
  apr_off_t VAR_8;
  apr_off_t VAR_9;
  svn_stringbuf_t *VAR_10;
  unsigned char VAR_11;
  svn_checksum_t *VAR_12;
  svn_checksum_t *VAR_13;


  VAR_8 = 0;
  FUNC_0(FUNC_5(VAR_3, VAR_0, &VAR_8, VAR_7));
  FUNC_0(FUNC_2(&VAR_12, VAR_2, VAR_3,
                                      VAR_4, VAR_6,
                                      VAR_7, VAR_7));

  VAR_9 = 0;
  FUNC_0(FUNC_5(VAR_3, VAR_0, &VAR_9, VAR_7));
  FUNC_0(FUNC_3(&VAR_13, VAR_2, VAR_3,
                                      VAR_5, VAR_6,
                                      VAR_7, VAR_7));


  VAR_10 = FUNC_4(VAR_8, VAR_12,
                                     VAR_9, VAR_13, VAR_7, VAR_7);
  FUNC_0(FUNC_6(VAR_3, VAR_10->data, VAR_10->len, ((void*)0),
                                 VAR_7));

  VAR_11 = VAR_10->len;
  FUNC_1(VAR_11 == VAR_10->len);
  FUNC_0(FUNC_6(VAR_3, &VAR_11, 1, ((void*)0), VAR_7));

  return VAR_1;
}
