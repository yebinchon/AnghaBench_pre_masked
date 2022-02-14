
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int,char const*,int,int ) ;

svn_error_t *
FUNC_2(svn_sqlite__stmt_t *VAR_2,
                      int VAR_3,
                      const char *VAR_4)
{
  FUNC_0(FUNC_1(VAR_2->s3stmt, VAR_3, VAR_4, -1, VAR_0),
             VAR_2->db);
  return VAR_1;
}
