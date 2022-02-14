
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int format; int max_files_per_dir; scalar_t__ youngest_rev_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_20__ {int pool; int path; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__*,int *,int *,int ,int *) ;
 int FUNC_15 (int ,char*,int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (TYPE_2__*,int *) ;
 int FUNC_19 (TYPE_2__*,int *) ;

svn_error_t *
FUNC_20(svn_fs_t *VAR_2,
                           const char *VAR_3,
                           int VAR_4,
                           int VAR_5,
                           apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_2->fsap_data;

  VAR_2->path = FUNC_1(VAR_2->pool, VAR_3);
  VAR_7->format = VAR_4;


  VAR_7->max_files_per_dir = VAR_5;


  FUNC_0(FUNC_17(
                              FUNC_8(VAR_2, 0, VAR_6),
                              VAR_6));


  FUNC_0(FUNC_17(
                                  FUNC_12(VAR_2, VAR_6),
                                  VAR_6));


  FUNC_0(FUNC_17(
                            FUNC_11(VAR_2, VAR_6),
                            VAR_6));


  FUNC_0(FUNC_15(FUNC_4(VAR_2, VAR_6),
                             "0\n", VAR_6));


  FUNC_0(FUNC_16(FUNC_5(VAR_2, VAR_6),
                                   VAR_6));
  FUNC_0(FUNC_14(VAR_2, ((void*)0), ((void*)0), VAR_0, VAR_6));


  FUNC_0(FUNC_18(VAR_2, VAR_6));
  FUNC_0(FUNC_2(VAR_7, VAR_2->path, VAR_2->pool, VAR_6));


  FUNC_0(FUNC_3(VAR_2));


  FUNC_0(FUNC_19(VAR_2, VAR_6));


  FUNC_0(FUNC_15(
                          FUNC_6(VAR_2, VAR_6),
                          "0\n", VAR_6));



  FUNC_0(FUNC_15(FUNC_9(VAR_2, VAR_6),
                             "0\n", VAR_6));
  FUNC_0(FUNC_16(
                          FUNC_10(VAR_2, VAR_6),
                          VAR_6));


  FUNC_0(FUNC_16(
                        FUNC_7(VAR_2, VAR_6),
                        VAR_6));
  FUNC_0(FUNC_13(VAR_2, VAR_6));

  VAR_7->youngest_rev_cache = 0;
  return VAR_1;
}
