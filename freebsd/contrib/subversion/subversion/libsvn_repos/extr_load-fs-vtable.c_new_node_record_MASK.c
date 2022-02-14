
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int svn_error_t ;
struct revision_baton {scalar_t__ rev; int txn_root; scalar_t__ skipped; struct parse_baton* pb; } ;
struct parse_baton {int notify_pool; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int ) ;} ;
struct node_baton {int action; int path; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct node_baton**,int *,struct revision_baton*,int *) ;
 int FUNC_3 (struct node_baton*,struct revision_baton*,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;




 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_10(void **VAR_4,
                apr_hash_t *VAR_5,
                void *VAR_6,
                apr_pool_t *VAR_7)
{
  struct revision_baton *VAR_8 = VAR_6;
  struct parse_baton *VAR_9 = VAR_8->pb;
  struct node_baton *VAR_10;

  if (VAR_8->rev == 0)
    return FUNC_5(VAR_0, ((void*)0),
                            FUNC_1("Malformed dumpstream: "
                              "Revision 0 must not contain node records"));

  FUNC_0(FUNC_2(&VAR_10, VAR_5, VAR_8, VAR_7));


  if (VAR_8->skipped)
    {
      *VAR_4 = VAR_10;
      return VAR_2;
    }


  if (VAR_10->action < 130
        || VAR_10->action > 128)
      return FUNC_6(VAR_1, ((void*)0),
                               FUNC_1("Unrecognized node-action on node '%s'"),
                               VAR_10->path);

  if (VAR_9->notify_func)
    {

      svn_repos_notify_t *VAR_11 = FUNC_9(
                                        VAR_3,
                                        VAR_9->notify_pool);

      VAR_11->path = VAR_10->path;
      VAR_9->notify_func(VAR_9->notify_baton, VAR_11, VAR_9->notify_pool);
      FUNC_8(VAR_9->notify_pool);
    }

  switch (VAR_10->action)
    {
    case 130:
      break;

    case 129:
      FUNC_0(FUNC_7(VAR_8->txn_root, VAR_10->path, VAR_7));
      break;

    case 131:
      FUNC_0(FUNC_3(VAR_10, VAR_8, VAR_7));
      break;

    case 128:
      FUNC_0(FUNC_7(VAR_8->txn_root, VAR_10->path, VAR_7));
      FUNC_0(FUNC_3(VAR_10, VAR_8, VAR_7));
      break;
    }

  *VAR_4 = VAR_10;
  return VAR_2;
}
