
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
typedef int sqlite_int64 ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;

svn_error_t *
FUNC_4(svn_sqlite__stmt_t *VAR_1,
                        int VAR_2,
                        svn_revnum_t VAR_3)
{
  if (FUNC_1(VAR_3))
    FUNC_0(FUNC_2(VAR_1->s3stmt, VAR_2,
                                  (sqlite_int64)VAR_3), VAR_1->db);
  else
    FUNC_0(FUNC_3(VAR_1->s3stmt, VAR_2), VAR_1->db);

  return VAR_0;
}
