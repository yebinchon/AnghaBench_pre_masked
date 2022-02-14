
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_notify_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct revision_baton {int txn_root; int rev; scalar_t__ rev_offset; struct parse_baton* pb; } ;
struct parse_baton {int notify_pool; int notify_baton; int (* notify_func ) (int ,int *,int ) ;int fs; int rev_map; int use_history; } ;
struct node_baton {scalar_t__ kind; int path; int * copyfrom_path; scalar_t__ copy_source_checksum; scalar_t__ copyfrom_rev; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 int VAR_3 ;
 int * FUNC_6 (scalar_t__,int *,int *,int ,int *,scalar_t__,int ,int ) ;
 int * FUNC_7 (int ,int *,int ,scalar_t__) ;
 int FUNC_8 (int *,int *,int ,int ,int *) ;
 int FUNC_9 (int **,int ,int *,int *,int ,int *) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int **,int ,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_15(struct node_baton *VAR_7,
                       struct revision_baton *VAR_8,
                       apr_pool_t *VAR_9)
{
  struct parse_baton *VAR_10 = VAR_8->pb;

  if ((VAR_7->copyfrom_path == ((void*)0)) || (! VAR_10->use_history))
    {

      if (VAR_7->kind == VAR_5)
        FUNC_0(FUNC_11(VAR_8->txn_root, VAR_7->path, VAR_9));

      else if (VAR_7->kind == VAR_4)
        FUNC_0(FUNC_10(VAR_8->txn_root, VAR_7->path, VAR_9));
    }
  else
    {

      svn_fs_root_t *VAR_11;
      svn_revnum_t VAR_12;



      VAR_12 = FUNC_3(VAR_8->pb->rev_map, VAR_7->copyfrom_rev);
      if (! FUNC_1(VAR_12))
        VAR_12 = VAR_7->copyfrom_rev - VAR_8->rev_offset;

      if (! FUNC_1(VAR_12))
        return FUNC_7(VAR_0, ((void*)0),
                                 FUNC_2("Relative source revision %ld is not"
                                   " available in current repository"),
                                 VAR_12);

      FUNC_0(FUNC_12(&VAR_11, VAR_10->fs, VAR_12, VAR_9));

      if (VAR_7->copy_source_checksum)
        {
          svn_checksum_t *VAR_13;
          FUNC_0(FUNC_9(&VAR_13, VAR_3, VAR_11,
                                       VAR_7->copyfrom_path, VAR_2, VAR_9));
          if (!FUNC_5(VAR_7->copy_source_checksum, VAR_13))
            return FUNC_6(VAR_7->copy_source_checksum,
                      VAR_13, VAR_9,
                      FUNC_2("Copy source checksum mismatch on copy from '%s'@%ld\n"
                        "to '%s' in rev based on r%ld"),
                      VAR_7->copyfrom_path, VAR_12, VAR_7->path, VAR_8->rev);
        }

      FUNC_0(FUNC_8(VAR_11, VAR_7->copyfrom_path,
                          VAR_8->txn_root, VAR_7->path, VAR_9));

      if (VAR_10->notify_func)
        {

          svn_repos_notify_t *VAR_14 = FUNC_14(
                                            VAR_6,
                                            VAR_10->notify_pool);

          VAR_10->notify_func(VAR_10->notify_baton, VAR_14, VAR_10->notify_pool);
          FUNC_13(VAR_10->notify_pool);
        }
    }

  return VAR_1;
}
