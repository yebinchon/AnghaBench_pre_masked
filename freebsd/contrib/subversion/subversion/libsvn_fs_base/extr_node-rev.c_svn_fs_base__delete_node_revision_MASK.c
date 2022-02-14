
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_2__ base_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int *) ;
 int * FUNC_3 (TYPE_1__*,int const*,int *,int *) ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_1,
                                  const svn_fs_id_t *VAR_2,
                                  svn_boolean_t VAR_3,
                                  trail_t *VAR_4,
                                  apr_pool_t *VAR_5)
{
  base_fs_data_t *VAR_6 = VAR_1->fsap_data;






  if (VAR_3 && (VAR_6->format >= VAR_0))
    {
      FUNC_0(FUNC_2(VAR_1, FUNC_1(VAR_2),
                                             VAR_4, VAR_5));
    }

  return FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
}
