
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct TYPE_5__ {int committed_rev; int quiet; } ;
typedef TYPE_2__ subcommand_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_commit_info_t *VAR_1,
                void *VAR_2,
                apr_pool_t *VAR_3)
{
  subcommand_baton_t *VAR_4 = VAR_2;

  if (! VAR_4->quiet)
    {
      FUNC_0(FUNC_2(VAR_3, FUNC_1("Committed revision %ld.\n"),
                                 VAR_1->revision));
    }

  VAR_4->committed_rev = VAR_1->revision;

  return VAR_0;
}
