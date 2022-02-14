
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef int svn_lock_t ;
typedef int svn_fs_t ;
typedef int (* svn_fs_get_locks_callback_t ) (void*,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct locks_get_args {int * stream; int depth; int path; } ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *,int) ;
 int * FUNC_2 (scalar_t__*,int ,int ,int ,int) ;
 int * FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (int *,int ,struct locks_get_args*,int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,int,int *) ;
 int FUNC_12 (int,int,int *) ;
 int * FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,int*) ;
 int FUNC_16 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;
 int VAR_5 ;

svn_error_t *
FUNC_17(svn_fs_t *VAR_6,
                       const char *VAR_7,
                       svn_depth_t VAR_8,
                       svn_fs_get_locks_callback_t VAR_9,
                       void *VAR_10,
                       apr_pool_t *VAR_11)
{
  struct locks_get_args VAR_12;
  svn_stream_t *VAR_13;
  svn_stringbuf_t *VAR_14;
  svn_boolean_t VAR_15;
  apr_pool_t *VAR_16 = FUNC_9(VAR_11);

  FUNC_0(FUNC_5(VAR_6, VAR_4));

  VAR_12.path = FUNC_4(VAR_7, VAR_11);
  VAR_12.depth = VAR_8;

  VAR_12.stream = FUNC_13(FUNC_12(4 * 1024 ,
                                                               64 * 1024 ,
                                                               VAR_11),
                                          VAR_11);
  FUNC_0(FUNC_7(VAR_6, VAR_5, &VAR_12, VAR_1, VAR_11));


  VAR_13 = VAR_12.stream;

  while (1)
    {
      apr_size_t VAR_17, VAR_18;
      char VAR_19, *VAR_20;
      svn_skel_t *VAR_21;
      svn_lock_t *VAR_22;
      apr_uint64_t VAR_23;
      svn_error_t *VAR_24;

      FUNC_8(VAR_16);


      FUNC_0(FUNC_16(VAR_13, &VAR_14, "\n", &VAR_15, VAR_16));
      if (VAR_15)
        break;
      VAR_24 = FUNC_2(&VAR_23, VAR_14->data, 0, VAR_0, 10);
      if (VAR_24)
        return FUNC_3(VAR_2, VAR_24, ((void*)0));
      VAR_18 = (apr_size_t)VAR_23;


      VAR_20 = FUNC_1(VAR_11, VAR_18 + 1);
      FUNC_0(FUNC_15(VAR_13, VAR_20, &VAR_18));
      VAR_20[VAR_18] = '\0';


      VAR_17 = 1;
      FUNC_0(FUNC_15(VAR_13, &VAR_19, &VAR_17));
      if (VAR_19 != '\n')
        return FUNC_3(VAR_2, ((void*)0), ((void*)0));


      VAR_21 = FUNC_11(VAR_20, VAR_18, VAR_16);
      FUNC_0(FUNC_6(&VAR_22, VAR_21, VAR_16));
      FUNC_0(VAR_9(VAR_10, VAR_22, VAR_16));
    }

  FUNC_0(FUNC_14(VAR_13));
  FUNC_10(VAR_16);
  return VAR_3;
}
