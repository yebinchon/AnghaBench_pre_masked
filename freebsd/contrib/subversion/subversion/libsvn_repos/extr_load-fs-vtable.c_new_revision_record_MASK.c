
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_5__ {scalar_t__ old_revision; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int svn_error_t ;
struct revision_baton {scalar_t__ rev; scalar_t__ skipped; int txn; int txn_root; scalar_t__ rev_offset; } ;
struct parse_baton {scalar_t__ oldest_dumpstream_rev; int notify_pool; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int ) ;int fs; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int32_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 struct revision_baton* FUNC_2 (int *,struct parse_baton*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (scalar_t__*,int ,int *) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_10(void **VAR_4,
                    apr_hash_t *VAR_5,
                    void *VAR_6,
                    apr_pool_t *VAR_7)
{
  struct parse_baton *VAR_8 = VAR_6;
  struct revision_baton *VAR_9;
  svn_revnum_t VAR_10;

  VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_7);
  FUNC_0(FUNC_7(&VAR_10, VAR_8->fs, VAR_7));





  VAR_9->rev_offset = (apr_int32_t) ((VAR_9->rev) - (VAR_10 + 1));

  if ((VAR_9->rev > 0) && (! VAR_9->skipped))
    {

      FUNC_0(FUNC_5(&(VAR_9->txn), VAR_8->fs, VAR_10,
                                VAR_0, VAR_7));
      FUNC_0(FUNC_6(&(VAR_9->txn_root), VAR_9->txn, VAR_7));

      if (VAR_8->notify_func)
        {

          svn_repos_notify_t *VAR_11 = FUNC_9(
                                            VAR_3,
                                            VAR_8->notify_pool);

          VAR_11->old_revision = VAR_9->rev;
          VAR_8->notify_func(VAR_8->notify_baton, VAR_11, VAR_8->notify_pool);
          FUNC_8(VAR_8->notify_pool);
        }


      if (!FUNC_1(VAR_8->oldest_dumpstream_rev))
        VAR_8->oldest_dumpstream_rev = VAR_9->rev;
    }


  if (VAR_9->skipped && VAR_8->notify_func)
    {

      svn_repos_notify_t *VAR_12 = FUNC_9(
                                        VAR_2,
                                        VAR_8->notify_pool);

      VAR_12->old_revision = VAR_9->rev;
      VAR_8->notify_func(VAR_8->notify_baton, VAR_12, VAR_8->notify_pool);
      FUNC_8(VAR_8->notify_pool);
    }






  *VAR_4 = VAR_9;
  return VAR_1;
}
