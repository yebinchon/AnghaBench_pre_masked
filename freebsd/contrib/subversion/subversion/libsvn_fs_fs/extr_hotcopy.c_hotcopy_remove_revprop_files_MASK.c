
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__,int,int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_t *VAR_2,
                             svn_revnum_t VAR_3,
                             svn_revnum_t VAR_4,
                             int VAR_5,
                             apr_pool_t *VAR_6)
{
  FUNC_1(VAR_3 <= VAR_4);


  FUNC_0(FUNC_2(VAR_2,
                               FUNC_3(VAR_2->path,
                                               VAR_0,
                                               VAR_6),
                               VAR_3 ? VAR_3 : 1, VAR_4,
                               VAR_5, VAR_6));

  return VAR_1;
}
