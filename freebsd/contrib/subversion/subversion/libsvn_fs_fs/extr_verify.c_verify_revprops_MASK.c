
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**,int *,scalar_t__,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_3,
                svn_revnum_t VAR_4,
                svn_revnum_t VAR_5,
                svn_cancel_func_t VAR_6,
                void *VAR_7,
                apr_pool_t *VAR_8)
{
  svn_revnum_t VAR_9;
  apr_pool_t *VAR_10 = FUNC_4(VAR_8);



  FUNC_1(VAR_3);

  for (VAR_9 = VAR_4; VAR_9 < VAR_5; ++VAR_9)
    {
      svn_string_t *VAR_11;
      apr_time_t VAR_12;

      FUNC_3(VAR_10);



      FUNC_0(FUNC_2(&VAR_11, VAR_3, VAR_9,
                                       VAR_2, VAR_0,
                                       VAR_10, VAR_10));



      if (VAR_11)
        FUNC_0(FUNC_6(&VAR_12, VAR_11->data, VAR_10));

      if (VAR_6)
        FUNC_0(VAR_6(VAR_7));
    }

  FUNC_5(VAR_10);

  return VAR_1;
}
