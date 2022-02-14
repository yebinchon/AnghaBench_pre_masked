
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int s3stmt; int needs_reset; TYPE_2__* db; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
struct TYPE_8__ {int db3; } ;
typedef TYPE_2__ svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,int,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_sqlite__stmt_t **VAR_2, svn_sqlite__db_t *VAR_3,
                  const char *VAR_4, apr_pool_t *VAR_5)
{
  *VAR_2 = FUNC_1(VAR_5, sizeof(**VAR_2));
  (*VAR_2)->db = VAR_3;
  (*VAR_2)->needs_reset = VAR_0;

  FUNC_0(FUNC_2(VAR_3->db3, VAR_4, -1, &(*VAR_2)->s3stmt, ((void*)0)), VAR_3);

  return VAR_1;
}
