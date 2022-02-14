
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_15__ {char* local_abspath; scalar_t__ node_status; scalar_t__ repos_node_status; scalar_t__ prop_status; scalar_t__ repos_prop_status; int repos_lock; int lock; int changed_date; int changed_author; int changed_rev; scalar_t__ moved_to_abspath; scalar_t__ moved_from_abspath; int revision; scalar_t__ copied; scalar_t__ versioned; scalar_t__ file_external; scalar_t__ switched; scalar_t__ wc_is_locked; scalar_t__ conflicted; } ;
typedef TYPE_2__ svn_client_status_t ;
struct TYPE_16__ {int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;
 char const* FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 char const* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (char const*,char const*,scalar_t__,int *,int *) ;
 int VAR_3 ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__**,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_1__**,int ,int *) ;
 char* FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *,char*,char const*) ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int *,scalar_t__*,int ,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_16 (TYPE_1__**,int *,char*) ;
 int FUNC_17 (TYPE_1__**,int *,int ,char*,char*,char const*,char*,...) ;
 int FUNC_18 (TYPE_1__**,int *,int ,char*,int *) ;
 int VAR_6 ;

svn_error_t *
FUNC_19(const char *VAR_7,
                         const char *VAR_8,
                         const char *VAR_9,
                         const svn_client_status_t *VAR_10,
                         svn_client_ctx_t *VAR_11,
                         apr_pool_t *VAR_12)
{
  svn_stringbuf_t *VAR_13 = FUNC_13(VAR_12);
  apr_hash_t *VAR_14;
  const char *VAR_15 = VAR_10->local_abspath;
  svn_boolean_t VAR_16 = VAR_0;

  if (VAR_10->node_status == VAR_5
      && VAR_10->repos_node_status == VAR_5)
    return VAR_1;

  if (VAR_10->conflicted)
    FUNC_0(FUNC_15(((void*)0), ((void*)0), &VAR_16,
                                 VAR_11->wc_ctx, VAR_15, VAR_12));

  FUNC_17(&VAR_13, VAR_12, VAR_6, "entry",
                        "path", FUNC_11(VAR_9, VAR_12),
                        VAR_2);

  VAR_14 = FUNC_2(VAR_12);
  FUNC_12(VAR_14, "item",
                FUNC_6(FUNC_5(VAR_10)));

  FUNC_12(VAR_14, "props",
                FUNC_6(
                   (VAR_10->node_status != VAR_4)
                   ? VAR_10->prop_status
                   : VAR_5));
  if (VAR_10->wc_is_locked)
    FUNC_12(VAR_14, "wc-locked", "true");
  if (VAR_10->copied)
    FUNC_12(VAR_14, "copied", "true");
  if (VAR_10->switched)
    FUNC_12(VAR_14, "switched", "true");
  if (VAR_10->file_external)
    FUNC_12(VAR_14, "file-external", "true");
  if (VAR_10->versioned && ! VAR_10->copied)
    FUNC_12(VAR_14, "revision",
                  FUNC_3(VAR_12, "%ld", VAR_10->revision));
  if (VAR_16)
    FUNC_12(VAR_14, "tree-conflicted", "true");
  if (VAR_10->moved_from_abspath || VAR_10->moved_to_abspath)
    {
      const char *VAR_17;

      if (VAR_10->moved_from_abspath)
        {
          VAR_17 = FUNC_7(VAR_7, VAR_8,
                                 VAR_10->moved_from_abspath,
                                 VAR_12, VAR_12);
          VAR_17 = FUNC_11(VAR_17, VAR_12);
          FUNC_12(VAR_14, "moved-from", VAR_17);
        }
      if (VAR_10->moved_to_abspath)
        {
          VAR_17 = FUNC_7(VAR_7, VAR_8,
                                 VAR_10->moved_to_abspath,
                                 VAR_12, VAR_12);
          VAR_17 = FUNC_11(VAR_17, VAR_12);
          FUNC_12(VAR_14, "moved-to", VAR_17);
        }
    }
  FUNC_18(&VAR_13, VAR_12, VAR_6, "wc-status",
                             VAR_14);

  if (FUNC_1(VAR_10->changed_rev))
    {
      FUNC_9(&VAR_13, VAR_10->changed_rev,
                               VAR_10->changed_author,
                               FUNC_14(VAR_10->changed_date,
                                                   VAR_12),
                               VAR_12);
    }

  if (VAR_10->lock)
    FUNC_10(&VAR_13, VAR_10->lock, VAR_12);

  FUNC_16(&VAR_13, VAR_12, "wc-status");

  if (VAR_10->repos_node_status != VAR_5
      || VAR_10->repos_lock)
    {
      FUNC_17(&VAR_13, VAR_12, VAR_6, "repos-status",
                            "item",
                            FUNC_6(FUNC_4(VAR_10)),
                            "props",
                            FUNC_6(VAR_10->repos_prop_status),
                            VAR_2);
      if (VAR_10->repos_lock)
        FUNC_10(&VAR_13, VAR_10->repos_lock, VAR_12);

      FUNC_16(&VAR_13, VAR_12, "repos-status");
    }

  FUNC_16(&VAR_13, VAR_12, "entry");

  return FUNC_8(VAR_13->data, VAR_3);
}
