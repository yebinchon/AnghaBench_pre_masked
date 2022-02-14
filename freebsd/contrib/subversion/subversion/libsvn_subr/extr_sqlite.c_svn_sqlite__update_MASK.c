
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* db; } ;
typedef TYPE_2__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int db3; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

svn_error_t *
FUNC_5(int *VAR_1, svn_sqlite__stmt_t *VAR_2)
{
  FUNC_0(FUNC_2(VAR_2, VAR_0));

  if (VAR_1)
    *VAR_1 = FUNC_1(VAR_2->db->db3);

  return FUNC_3(FUNC_4(VAR_2));
}
