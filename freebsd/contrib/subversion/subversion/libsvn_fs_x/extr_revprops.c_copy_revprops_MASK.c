
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_packed__data_root_t ;
typedef int svn_packed__byte_stream_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 char* FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__**,char const*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_fs_t *VAR_1,
              const char *VAR_2,
              const char *VAR_3,
              const char *VAR_4,
              svn_revnum_t VAR_5,
              svn_revnum_t VAR_6,
              apr_array_header_t *VAR_7,
              apr_size_t VAR_8,
              int VAR_9,
              svn_fs_x__batch_fsync_t *VAR_10,
              svn_cancel_func_t VAR_11,
              void *VAR_12,
              apr_pool_t *VAR_13)
{
  apr_file_t *VAR_14;
  svn_revnum_t VAR_15;
  apr_pool_t *VAR_16 = FUNC_10(VAR_13);

  svn_packed__data_root_t *VAR_17 = FUNC_8(VAR_13);
  svn_packed__byte_stream_t *VAR_18
    = FUNC_7(VAR_17);


  for (VAR_15 = VAR_5; VAR_15 <= VAR_6; VAR_15++)
    {
      const char *VAR_19;
      svn_stringbuf_t *VAR_20;

      FUNC_9(VAR_16);


      VAR_19 = FUNC_5(VAR_1, VAR_15, VAR_16);



      FUNC_0(FUNC_12(&VAR_20, VAR_19, VAR_16));
      FUNC_1(FUNC_13(VAR_20, VAR_16),
                FUNC_2(VAR_16, "Failed to read revprops for r%ld.",
                             VAR_15));

      FUNC_6(VAR_18, VAR_20->data, VAR_20->len);
    }


  FUNC_0(FUNC_4(&VAR_14, VAR_10,
                                          FUNC_3(VAR_2,
                                                          VAR_3,
                                                          VAR_13),
                                          VAR_13));


  FUNC_0(FUNC_14(VAR_17, VAR_14, VAR_13));

  FUNC_11(VAR_16);

  return VAR_0;
}
