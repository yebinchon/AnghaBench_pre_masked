
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

svn_revnum_t
FUNC_2(svn_sqlite__stmt_t *VAR_1, int VAR_2)
{
  if (FUNC_1(VAR_1, VAR_2))
    return VAR_0;
  return (svn_revnum_t) FUNC_0(VAR_1->s3stmt, VAR_2);
}
