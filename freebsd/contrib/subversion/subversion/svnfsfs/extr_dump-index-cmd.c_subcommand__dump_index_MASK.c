
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {TYPE_2__ start_revision; int repository_path; } ;
typedef TYPE_3__ svnfsfs__opt_state ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

svn_error_t *
FUNC_2(apr_getopt_t *VAR_1, void *VAR_2, apr_pool_t *VAR_3)
{
  svnfsfs__opt_state *VAR_4 = VAR_2;

  FUNC_0(FUNC_1(VAR_4->repository_path,
                     VAR_4->start_revision.value.number, VAR_3));

  return VAR_0;
}
