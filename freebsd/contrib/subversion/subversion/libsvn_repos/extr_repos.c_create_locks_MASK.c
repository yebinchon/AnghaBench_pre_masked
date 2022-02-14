
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_repos_t *VAR_0, apr_pool_t *VAR_1)
{

  FUNC_1(FUNC_5(VAR_0->lock_path, VAR_1),
            FUNC_2("Creating lock dir"));

  FUNC_0(FUNC_3(VAR_0, VAR_1));
  return FUNC_4(VAR_0, VAR_1);
}
