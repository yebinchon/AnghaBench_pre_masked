
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char const*,char const*,int ,int ,int *,int ,void*,int *) ;
 char* FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (char const*,int ,int ,void*,int *) ;
 int FUNC_7 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_5,
               const char *VAR_6,
               const char *VAR_7,
               apr_int64_t VAR_8,
               int VAR_9,
               apr_size_t VAR_10,
               svn_fs_x__batch_fsync_t *VAR_11,
               svn_cancel_func_t VAR_12,
               void *VAR_13,
               apr_pool_t *VAR_14)
{
  const char *VAR_15;
  svn_revnum_t VAR_16 = (svn_revnum_t) (VAR_8 * VAR_9);


  VAR_15 = FUNC_2(VAR_6, VAR_2, VAR_14);


  FUNC_0(FUNC_6(VAR_6, VAR_4, VAR_12, VAR_13,
                             VAR_14));


  FUNC_0(FUNC_5(VAR_6, VAR_0, VAR_14));
  FUNC_0(FUNC_3(VAR_11, VAR_6, VAR_14));


  FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_7, VAR_16,
                             VAR_10, VAR_11, VAR_12, VAR_13,
                             VAR_14));

  FUNC_0(FUNC_4(VAR_7, VAR_6, VAR_14));
  FUNC_0(FUNC_7(VAR_15, VAR_1, VAR_14));

  return VAR_3;
}
