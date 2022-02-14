
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int path; TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_12__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int bdb_env_baton_t ;
struct TYPE_13__ {int * bdb; int miscellaneous; int checksum_reps; int node_origins; int lock_tokens; int locks; int uuids; int strings; int representations; int changes; int copies; int transactions; int revisions; int nodes; } ;
typedef TYPE_3__ base_fs_data_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *,char*) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1)
{
  base_fs_data_t *VAR_2 = VAR_1->fsap_data;
  bdb_env_baton_t *VAR_3 = (VAR_2 ? VAR_2->bdb : ((void*)0));

  if (!VAR_3)
    return VAR_0;


  FUNC_0(FUNC_2(VAR_1, &VAR_2->nodes, "nodes"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->revisions, "revisions"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->transactions, "transactions"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->copies, "copies"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->changes, "changes"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->representations, "representations"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->strings, "strings"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->uuids, "uuids"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->locks, "locks"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->lock_tokens, "lock-tokens"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->node_origins, "node-origins"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->checksum_reps, "checksum-reps"));
  FUNC_0(FUNC_2(VAR_1, &VAR_2->miscellaneous, "miscellaneous"));


  VAR_2->bdb = 0;
  {
    svn_error_t *VAR_4 = FUNC_4(VAR_3);
    if (VAR_4)
      return FUNC_3
        (VAR_4->apr_err, VAR_4,
         FUNC_1("Berkeley DB error for filesystem '%s'"
           " while closing environment:\n"),
         VAR_1->path);
  }
  return VAR_0;
}
