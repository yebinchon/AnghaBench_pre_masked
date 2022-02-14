
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * svn_repos_authz_func_t ;
struct TYPE_5__ {TYPE_1__* repository; } ;
typedef TYPE_2__ server_baton_t ;
struct TYPE_4__ {scalar_t__ authzdb; } ;


 int * VAR_0 ;

__attribute__((used)) static svn_repos_authz_func_t FUNC_0(server_baton_t *VAR_1)
{
  if (VAR_1->repository->authzdb)
     return VAR_0;
  return ((void*)0);
}
