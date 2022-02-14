
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int needs_reset; TYPE_1__* db; int s3stmt; } ;
typedef TYPE_2__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {int db3; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,int *,char*,int,int ) ;
 int * FUNC_5 (TYPE_2__*) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_4, svn_sqlite__stmt_t *VAR_5)
{
  int VAR_6 = FUNC_2(VAR_5->s3stmt);

  if (VAR_6 != VAR_0 && VAR_6 != VAR_1)
    {
      svn_error_t *VAR_7, *VAR_8;

      VAR_7 = FUNC_4(FUNC_0(VAR_6), ((void*)0),
                               "sqlite[S%d]: %s",
                               VAR_6, FUNC_1(VAR_5->db->db3));
      VAR_8 = FUNC_5(VAR_5);
      return FUNC_3(VAR_7, VAR_8);
    }

  *VAR_4 = (VAR_6 == VAR_1);
  VAR_5->needs_reset = VAR_3;

  return VAR_2;
}
