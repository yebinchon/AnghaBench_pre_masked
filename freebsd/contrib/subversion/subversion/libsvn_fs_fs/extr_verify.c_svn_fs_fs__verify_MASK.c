
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_9__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_progress_notify_func_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_10__ {scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int ,void*,int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_2,
                  svn_revnum_t VAR_3,
                  svn_revnum_t VAR_4,
                  svn_fs_progress_notify_func_t VAR_5,
                  void *VAR_6,
                  svn_cancel_func_t VAR_7,
                  void *VAR_8,
                  apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_2->fsap_data;


  if (! FUNC_1(VAR_3))
    VAR_3 = 0;
  if (! FUNC_1(VAR_4))
    {
      FUNC_0(FUNC_4(&VAR_4, VAR_2, VAR_9));
    }

  FUNC_0(FUNC_2(VAR_3, VAR_2, VAR_9));
  FUNC_0(FUNC_2(VAR_4, VAR_2, VAR_9));



  if (FUNC_3(VAR_2))
    FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_4,
                                           VAR_5, VAR_6,
                                           VAR_7, VAR_8, VAR_9));


  if (VAR_10->format >= VAR_0)
    FUNC_0(FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                             VAR_7, VAR_8, VAR_9));

  return VAR_1;
}
