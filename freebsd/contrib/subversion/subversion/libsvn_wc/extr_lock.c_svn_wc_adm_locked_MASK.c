
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abspath; int db; int pool; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int ,int *) ;

svn_boolean_t
FUNC_4(const svn_wc_adm_access_t *VAR_2)
{
  svn_boolean_t VAR_3;
  apr_pool_t *VAR_4 = FUNC_1(VAR_2->pool);
  svn_error_t *VAR_5 = FUNC_3(&VAR_3, VAR_2->db,
                                                 VAR_2->abspath, VAR_1,
                                                 VAR_4);
  FUNC_2(VAR_4);

  if (VAR_5)
    {
      FUNC_0(VAR_5);

      return VAR_0;
    }

  return VAR_3;
}
