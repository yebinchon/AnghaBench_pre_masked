
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* db; } ;
typedef TYPE_2__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_int64_t ;
struct TYPE_6__ {int db3; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;

svn_error_t *
FUNC_5(apr_int64_t *VAR_0, svn_sqlite__stmt_t *VAR_1)
{
  svn_boolean_t VAR_2;

  FUNC_0(FUNC_4(&VAR_2, VAR_1));
  if (VAR_0)
    *VAR_0 = FUNC_1(VAR_1->db->db3);

  return FUNC_2(FUNC_3(VAR_1));
}
