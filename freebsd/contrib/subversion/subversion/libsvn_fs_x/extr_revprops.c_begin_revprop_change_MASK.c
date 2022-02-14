
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int has_write_lock; int revprop_generation; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_7__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_1,
                     apr_pool_t *VAR_2)
{
  svn_fs_x__data_t *VAR_3 = VAR_1->fsap_data;
  FUNC_1(VAR_3->has_write_lock);




  FUNC_0(FUNC_2(VAR_1, VAR_2));
  ++VAR_3->revprop_generation;
  FUNC_1(VAR_3->revprop_generation % 2);
  FUNC_0(FUNC_3(VAR_1, VAR_3->revprop_generation,
                                        VAR_2));

  return VAR_0;
}
