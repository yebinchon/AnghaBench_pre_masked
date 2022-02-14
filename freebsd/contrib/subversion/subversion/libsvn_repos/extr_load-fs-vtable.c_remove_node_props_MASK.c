
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct revision_baton {TYPE_1__* pb; int txn_root; scalar_t__ skipped; } ;
struct node_baton {int pool; int path; struct revision_baton* rb; } ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_2__ {int validate_props; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char const*,int *,int ,int ) ;
 int FUNC_5 (int **,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1)
{
  struct node_baton *VAR_2 = VAR_1;
  struct revision_baton *VAR_3 = VAR_2->rb;
  apr_hash_t *VAR_4;
  apr_hash_index_t *VAR_5;


  if (VAR_3->skipped)
    return VAR_0;

  FUNC_0(FUNC_5(&VAR_4,
                               VAR_3->txn_root, VAR_2->path, VAR_2->pool));

  for (VAR_5 = FUNC_1(VAR_2->pool, VAR_4); VAR_5; VAR_5 = FUNC_2(VAR_5))
    {
      const char *VAR_6 = FUNC_3(VAR_5);

      FUNC_0(FUNC_4(VAR_3->txn_root, VAR_2->path, VAR_6, ((void*)0),
                               VAR_3->pb->validate_props, VAR_2->pool));
    }

  return VAR_0;
}
