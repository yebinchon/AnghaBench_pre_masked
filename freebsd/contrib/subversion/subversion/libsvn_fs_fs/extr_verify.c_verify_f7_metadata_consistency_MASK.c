
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_12__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int (* svn_fs_progress_notify_func_t ) (scalar_t__,void*,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_13__ {scalar_t__ max_files_per_dir; int min_unpacked_rev; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int *) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int *) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__) ;
 int * FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_1__*,scalar_t__,int ,void*,int *) ;
 int * FUNC_14 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_fs_t *VAR_1,
                               svn_revnum_t VAR_2,
                               svn_revnum_t VAR_3,
                               svn_fs_progress_notify_func_t VAR_4,
                               void *VAR_5,
                               svn_cancel_func_t VAR_6,
                               void *VAR_7,
                               apr_pool_t *VAR_8)
{
  fs_fs_data_t *VAR_9 = VAR_1->fsap_data;
  svn_revnum_t VAR_10, VAR_11;
  apr_pool_t *VAR_12 = FUNC_11(VAR_8);

  for (VAR_10 = VAR_2; VAR_10 <= VAR_3; VAR_10 = VAR_11)
    {
      svn_error_t *VAR_13 = VAR_0;

      svn_revnum_t VAR_14 = FUNC_4(VAR_1, VAR_10);
      svn_revnum_t VAR_15 = FUNC_8(VAR_1, VAR_10);
      svn_revnum_t VAR_16 = VAR_15 + VAR_14;

      FUNC_10(VAR_12);

      if (VAR_4 && (VAR_15 % VAR_9->max_files_per_dir == 0))
        VAR_4(VAR_15, VAR_5, VAR_12);


      VAR_13 = FUNC_13(VAR_1, VAR_15, VAR_6,
                                   VAR_7, VAR_12);


      if (!VAR_13)
        VAR_13 = FUNC_1(VAR_1, VAR_15, VAR_16 - VAR_15,
                                       VAR_6, VAR_7, VAR_12);
      if (!VAR_13)
        VAR_13 = FUNC_2(VAR_1, VAR_15, VAR_16 - VAR_15,
                                       VAR_6, VAR_7, VAR_12);


      if (!VAR_13)
        VAR_13 = FUNC_3(VAR_1, VAR_15, VAR_16 - VAR_15,
                                 VAR_6, VAR_7, VAR_12);


      if (!VAR_13)
        VAR_13 = FUNC_14(VAR_1, VAR_15, VAR_16,
                              VAR_6, VAR_7, VAR_12);



      if (VAR_13)
        {
          svn_error_t *VAR_17
            = FUNC_9(&VAR_9->min_unpacked_rev,
                                               VAR_1, VAR_8);


          if (VAR_17)
            return FUNC_7(FUNC_6(VAR_13, VAR_17));
        }


      if (VAR_13 && VAR_14 != FUNC_4(VAR_1, VAR_10))
        {
          FUNC_5(VAR_13);



          VAR_11 = FUNC_8(VAR_1, VAR_10);
        }
      else
        {
          FUNC_0(VAR_13);
          VAR_11 = VAR_16;
        }
    }

  FUNC_12(VAR_12);

  return VAR_0;
}
