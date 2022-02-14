
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pool; int abspath; int path; scalar_t__ db_provided; int * db; int * entries_all; int closed; } ;
typedef TYPE_1__ svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,char const*,int *) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int ,int *) ;
 int FUNC_9 (scalar_t__*,int *,char const*,int ,int *) ;
 int FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc_adm_access_t **VAR_5,
                 const char *VAR_6,
                 svn_wc__db_t *VAR_7,
                 svn_boolean_t VAR_8,
                 svn_boolean_t VAR_9,
                 apr_pool_t *VAR_10,
                 apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  svn_wc_adm_access_t *VAR_13 = FUNC_2(VAR_10, sizeof(*VAR_13));

  VAR_13->closed = VAR_0;
  VAR_13->entries_all = ((void*)0);
  VAR_13->db = VAR_7;
  VAR_13->db_provided = VAR_8;
  VAR_13->path = FUNC_4(VAR_10, VAR_6);
  VAR_13->pool = VAR_10;

  FUNC_0(FUNC_5(&VAR_13->abspath, VAR_6, VAR_10));

  *VAR_5 = VAR_13;

  if (VAR_9)
    {
      svn_boolean_t VAR_14;


      FUNC_0(FUNC_9(&VAR_14, VAR_7, VAR_6, VAR_0,
                                          VAR_11));





      if (!VAR_14
          || FUNC_7(VAR_7, VAR_13->abspath, VAR_11))
        {
          FUNC_0(FUNC_8(VAR_7, VAR_13->abspath, 0, VAR_0,
                                           VAR_11));
        }
    }

  VAR_12 = FUNC_1(VAR_13, VAR_11);

  if (VAR_12)
    return FUNC_6(
                VAR_12,
                FUNC_10(VAR_7, VAR_13->abspath, VAR_11));
  FUNC_3(VAR_13->pool, VAR_13,
                            VAR_9
                              ? VAR_3
                              : VAR_4,
                            VAR_2);

  return VAR_1;
}
