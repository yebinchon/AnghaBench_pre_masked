
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_3 ;
 int VAR_4 ;




 int FUNC_2 (int *,char*,int ,char const*,int) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_5,
                         svn_wc__db_wcroot_t *VAR_6,
                         const char *VAR_7,
                         int VAR_8,
                         svn_depth_t VAR_9,
                         apr_pool_t *VAR_10)
{
  svn_sqlite__stmt_t *VAR_11;
  svn_boolean_t VAR_12;

  switch (VAR_9)
    {
    case 128:
      *VAR_5 = VAR_4;
      return VAR_3;

    case 131:
      FUNC_0(FUNC_3(&VAR_11, VAR_6->sdb,
                                        VAR_2));
      FUNC_0(FUNC_2(VAR_11, "isd", VAR_6->wc_id,
                                VAR_7, VAR_8));
      break;

    case 130:
      FUNC_0(FUNC_3(&VAR_11, VAR_6->sdb,
                                        VAR_1));
      FUNC_0(FUNC_2(VAR_11, "isd", VAR_6->wc_id,
                                VAR_7, VAR_8));
      break;

    case 129:
      FUNC_0(FUNC_3(&VAR_11, VAR_6->sdb,
                                        VAR_0));
      FUNC_0(FUNC_2(VAR_11, "isd", VAR_6->wc_id,
                                VAR_7, VAR_8));
      break;
    default:
      FUNC_1();
    }
  FUNC_0(FUNC_5(&VAR_12, VAR_11));
  FUNC_0(FUNC_4(VAR_11));

  *VAR_5 = !VAR_12;
  return VAR_3;
}
