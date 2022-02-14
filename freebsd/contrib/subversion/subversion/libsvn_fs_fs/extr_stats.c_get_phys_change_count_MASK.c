
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int eol; } ;
typedef TYPE_1__ svn_fs_fs__changes_context_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ change_count; int revision; } ;
typedef TYPE_2__ revision_info_t ;
struct TYPE_12__ {int fs; } ;
typedef TYPE_3__ query_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {scalar_t__ nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int ,int ,int *) ;
 int FUNC_2 (TYPE_4__**,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(query_t *VAR_1,
                      revision_info_t *VAR_2,
                      apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_4(VAR_3);
  svn_fs_fs__changes_context_t *VAR_5;


  FUNC_0(FUNC_1(&VAR_5, VAR_1->fs,
                                            VAR_2->revision,
                                            VAR_3));

  VAR_2->change_count = 0;
  while (!VAR_5->eol)
    {
      apr_array_header_t *VAR_6;

      FUNC_3(VAR_4);
      FUNC_0(FUNC_2(&VAR_6, VAR_5, VAR_4, VAR_4));
      VAR_2->change_count = VAR_6->nelts;
    }

  FUNC_5(VAR_4);

  return VAR_0;
}
