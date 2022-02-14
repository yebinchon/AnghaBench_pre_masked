
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * db; int db_provided; int abspath; scalar_t__ closed; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,TYPE_1__*,int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (scalar_t__*,int *,int ,scalar_t__,int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_wc_adm_access_t *VAR_2,
             svn_boolean_t VAR_3,
             apr_pool_t *VAR_4)
{
  svn_boolean_t VAR_5;

  if (VAR_2->closed)
    return VAR_0;


  FUNC_0(FUNC_7(&VAR_5, VAR_2->db,
                                      VAR_2->abspath, VAR_1,
                                      VAR_4));
  if (VAR_5)
    {
      if (!VAR_3)
        {






          svn_error_t *VAR_6 = FUNC_8(VAR_2->db,
                                                       VAR_2->abspath,
                                                       VAR_4);
          if (VAR_6)
            {
              if (FUNC_3(VAR_2->abspath, VAR_4))
                return VAR_6;
              FUNC_2(VAR_6);
            }
        }
    }


  VAR_2->closed = VAR_1;


  FUNC_0(FUNC_5(VAR_2->db, VAR_2->abspath,
                                       VAR_2, VAR_4));


  if (!VAR_2->db_provided)
    {
      apr_hash_t *VAR_7 = FUNC_6(VAR_2->db,
                                                          VAR_4);
      if (FUNC_1(VAR_7) == 0)
        {
          FUNC_0(FUNC_4(VAR_2->db));
          VAR_2->db = ((void*)0);
        }
    }

  return VAR_0;
}
