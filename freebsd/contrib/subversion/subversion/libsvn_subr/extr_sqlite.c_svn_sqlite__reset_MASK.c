
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; int s3stmt; int needs_reset; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

svn_error_t *
FUNC_3(svn_sqlite__stmt_t *VAR_2)
{

  VAR_2->needs_reset = VAR_0;




  FUNC_0(FUNC_1(VAR_2->s3stmt), VAR_2->db);






  FUNC_0(FUNC_2(VAR_2->s3stmt), VAR_2->db);
  return VAR_1;
}
