
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int abspath; int db; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_wc_adm_access_t *VAR_1, apr_pool_t *VAR_2)
{

  {
    svn_wc_adm_access_t *VAR_3 = FUNC_3(VAR_1->db,
                                                            VAR_1->abspath,
                                                            VAR_2);
    if (FUNC_0(VAR_3))
      FUNC_1(FUNC_2(VAR_1->db, VAR_1->abspath,
                                           VAR_3, VAR_2));
  }

  FUNC_4(VAR_1->db, VAR_1->abspath, VAR_1,
                             VAR_2);

  return VAR_0;
}
