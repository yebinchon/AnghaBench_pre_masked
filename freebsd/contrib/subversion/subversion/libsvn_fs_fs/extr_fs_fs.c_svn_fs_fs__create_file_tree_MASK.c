
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int pool; int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_20__ {int format; int max_files_per_dir; scalar_t__ youngest_rev_cache; int use_log_addressing; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_15 (TYPE_1__*,int ,int,int,int *) ;
 int FUNC_16 (int ,char*,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (TYPE_1__*,int *) ;
 int FUNC_20 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_21(svn_fs_t *VAR_10,
                            const char *VAR_11,
                            int VAR_12,
                            int VAR_13,
                            svn_boolean_t VAR_14,
                            apr_pool_t *VAR_15)
{
  fs_fs_data_t *VAR_16 = VAR_10->fsap_data;

  VAR_10->path = FUNC_1(VAR_10->pool, VAR_11);
  VAR_16->format = VAR_12;


  if (VAR_12 >= VAR_4)
    VAR_16->max_files_per_dir = VAR_13;
  else
    VAR_16->max_files_per_dir = 0;


  if (VAR_12 >= VAR_5)
    VAR_16->use_log_addressing = VAR_14;
  else
    VAR_16->use_log_addressing = VAR_0;


  if (VAR_16->max_files_per_dir)
    FUNC_0(FUNC_18(FUNC_8(VAR_10, 0,
                                                                  VAR_15),
                                        VAR_15));
  else
    FUNC_0(FUNC_18(FUNC_4(VAR_11, VAR_2,
                                                        VAR_15),
                                        VAR_15));


  if (VAR_16->max_files_per_dir)
    FUNC_0(FUNC_18(FUNC_9(VAR_10, 0,
                                                                       VAR_15),
                                        VAR_15));
  else
    FUNC_0(FUNC_18(FUNC_4(VAR_11,
                                                        VAR_1,
                                                        VAR_15),
                                        VAR_15));


  FUNC_0(FUNC_18(FUNC_13(VAR_10, VAR_15),
                                      VAR_15));


  if (VAR_12 >= VAR_7)
    FUNC_0(FUNC_18(FUNC_12(VAR_10,
                                                                       VAR_15),
                                        VAR_15));


  FUNC_0(FUNC_17(FUNC_5(VAR_10, VAR_15), VAR_15));
  FUNC_0(FUNC_15(VAR_10, 0, 1, 1, VAR_15));


  FUNC_0(FUNC_17(FUNC_6(VAR_10, VAR_15), VAR_15));
  FUNC_0(FUNC_14(VAR_10, ((void*)0), ((void*)0), VAR_15));





  if (VAR_16->format >= VAR_3)
    FUNC_0(FUNC_19(VAR_10, VAR_15));

  FUNC_0(FUNC_2(VAR_16, VAR_10->path, VAR_10->pool, VAR_15));


  FUNC_0(FUNC_3(VAR_10));


  FUNC_0(FUNC_20(VAR_10, VAR_15));


  if (VAR_16->format >= VAR_6)
    FUNC_0(FUNC_16(FUNC_7(VAR_10, VAR_15),
                               "0\n", VAR_15));



  if (VAR_12 >= VAR_8)
    {
      FUNC_0(FUNC_16(FUNC_10(VAR_10, VAR_15),
                                 "0\n", VAR_15));
      FUNC_0(FUNC_17(
                                 FUNC_11(VAR_10, VAR_15),
                                 VAR_15));
    }

  VAR_16->youngest_rev_cache = 0;
  return VAR_9;
}
